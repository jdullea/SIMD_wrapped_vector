//============================================================================
// Name        : generate_vector.cpp
// Author      : Jonathan Dullea
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char*argv[]) {
	int max_num = atoi(argv[1]);



	ofstream outFile;

	outFile.open("simd_wrapped_vector.hpp");
	outFile<<"//Name: Jonathan Dullea \n//jdullea@umass.edu\n";
	outFile<<"//This header was generatef by generate_vector.cpp\n\n";
	outFile<<"#include <iostream>\n#include <x86intrin.h>\n#include \"immintrin.h\"\n#include <cstring>\n#include <cmath>\n";
	outFile<<"using namespace std;\n\n";

	outFile<<"template <typename Real, unsigned int n>\n";
	outFile<<"class VectorSIMD{\n\tVectorSIMD(){};\n";
	outFile<<"\tVectorSIMD(Real a) {}};\n\n";

	for(int n = 2; n <= max_num; n++){
		if(n %4 == 1){


				//this is the case where n%4 = 1;
				outFile<<"template <typename Real>\nclass VectorSIMD<Real,"<<n<<">{\npublic:\n";
				for (int i =0; i < n/4; i++){
					outFile<<"\t\t__m256d _avx"<<i<<";\n";
				}
				outFile<<"\t\tReal _d;\n";

				outFile<<"\t\tVectorSIMD(){};\n";

				outFile<<"\t\tVectorSIMD(Real a){\n";
				for(int i = 0; i<n/4; i++){
					outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a,a,a,a);\n";
				}
				outFile<<"\t\t\t_d = a;\n";
				outFile<<"\t\t}\n\n";

				outFile<<"\t\tVectorSIMD(Real (&a)["<<n<<"]){\n";
				for(int i = 0; i<n/4; i++){
					outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a["<<4*i+3<<"],a["<<4*i+2<<"],a["<<4*i+1<<"],a["<<4*i<<"]);\n";
				}
				outFile<<"\t\t\t_d = a["<<n-1<<"];";
				outFile<<"\t\t}\n\n";


				outFile<<"\t\tVectorSIMD(";
				for(int i = 0; i < n; i++){
					outFile<<"Real _"<<i;
					if(i != n-1){
					outFile<<",";
					}
				}
				outFile<<"){\n";
				for(int i = 0; i<n/4; i++){
					outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(_"<<4*i+3<<",_"<<4*i+2<<",_"<<4*i+1<<",_"<<4*i<<");\n";
				}
				outFile<<"\t\t\t_d = _"<<n-1<<";\n";
				outFile<<"\t\t}\n\n";

				outFile<<"\t\tVectorSIMD(";
				for(int i = 0; i < n/4; i++){
					outFile<<"__m256d _"<<i;
					if(i != (n/4)){
						outFile<<",";
					}
				}
				outFile<<"double c";
				outFile<<"){\n";
				for(int i = 0; i<n/4; i++){
					outFile<<"\t\t\t_avx"<<i<< "= _"<<i <<";\n" ;
				}
				outFile<<"\t\t\t_d = c;\n";
				outFile<<"\t\t}\n\n";

				outFile<<"\t\tVectorSIMD& operator=(Real a){\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\t\t_avx"<<i<<"=_mm256_set_pd(a,a,a,a);\n";
				}
				outFile<<"\t\t\t_d = a;\n";
				outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

				outFile << "\t\tVectorSIMD& operator += (VectorSIMD<Real,"<<n<<"> a){\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\t\t_avx"<<i<<"=  _mm256_add_pd(_avx"<<i<<",a._avx"<<i<<");\n";
				}
				outFile<<"\t\t\t_d = _d, a._d;\n";
				outFile<<"\t\t\treturn *this;\n\t\t}\n\n";


				outFile << "\t\tVectorSIMD& operator -= (VectorSIMD<Real,"<<n<<"> a){\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\t\t_avx"<<i<<"=  _mm256_sub_pd(_avx"<<i<<",a._avx"<<i<<");\n";
				}
				outFile<<"\t\t\t_d = _d - a._d;\n";
				outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

				outFile << "\t\tVectorSIMD operator -() const{\n";
				outFile << "\t\t\tconst static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);\n";
				outFile << "\t\t\tVectorSIMD<double,"<<n<<"> result;\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\t\tresult._avx"<<i<<"=  _mm256_mul_pd(this->_avx"<<i<<",m1);\n";
				}
				outFile << "\t\t\tresult._d = this->_d*(-1);\n";
				outFile<<"\t\t\treturn result;\n\t\t}\n\n";

				outFile<<"\t\tvoid load(Real const* a){\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\t\t_avx"<<i<<" =  _mm256_loadu_pd(&a["<<4*i<<"]);\n";
				}
				outFile<<"\t\t\t_d = a["<<n-1<<"];\n";
				outFile<<"\t\t}\n\n";

				outFile<<"\t\tvoid load_aligned(Real const* a){\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\t\t_avx"<<i<<" =  _mm256_load_pd(&a["<<4*i<<"]);\n";
				}
				outFile<<"\t\t\t_d = a["<<n-1<<"];\n";
				outFile<<"\t\t}\n\n";

				outFile<<"\t\tvoid convert(Real *a) const {\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
				}
				outFile << "\t\ta["<<n-1<<"] =  _d;\n";
				outFile<<"\t\t}\n\n";

				outFile<<"\t\tvoid convert_aligned(Real *a) const {\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
				}
				outFile << "\t\ta["<<n-1<<"] = _d;\n";
				outFile<<"\t\t}\n\n";

				outFile<<"\t};\n\n";

				outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(double a, VectorSIMD<double,"<<n<<"> b){\n";
				outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
				outFile<<"\t\t__m256d _a =  _mm256_set_pd(a,a,a,a);\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
				}
				outFile<<"\t\tc._d = a * b._d;\n";
				outFile<<"\t\treturn c;\n\t}\n\n";


				outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(VectorSIMD<double,"<<n<<"> a ,double b){\n";
				outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
				outFile<<"\t\t__m256d _b =  _mm256_set_pd(b,b,b,b);\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", _b);\n";
				}
				outFile<<"c._d = a._d * b;\n";
				outFile<<"\t\treturn c;\n\t}\n\n";


				outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(int a, VectorSIMD<double,"<<n<<"> b){\n";
				outFile<<"\t\tif(a==1){return b;}\n";
				outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
				outFile<<"\t\tdouble q = static_cast<double>(a);\n";
				outFile<<"\t\t__m256d _a =  _mm256_set_pd(q,q,q,q);\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
				}
				outFile<<"\t\tc._d = q*b._d;\n";
				outFile<<"\t\treturn c;\n\t}\n\n";

				outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(VectorSIMD<double,"<<n<<"> a, int b){\n";
				outFile<<"\t\tif(b==1){return a;}\n";
				outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
				outFile<<"\t\tdouble q = static_cast<double>(b);\n";
				outFile<<"\t\t__m256d _b =  _mm256_set_pd(q,q,q,q);\n";
				outFile<<"c._d = a._d * q;\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_b, a._avx"<<i<<");\n";
				}

				outFile<<"\t\treturn c;\n\t}\n\n";

				outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
				outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
				}
				outFile<<"\t\tc._d = a._d*b._d;\n";
				outFile<<"\t\treturn c;\n\t}\n\n";


				outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator+(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
				outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\tc._avx"<<i<<"=  _mm256_add_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
				}
				outFile<<"\t\tc._d = (a._d + b._d);\n";
				outFile<<"\t\treturn c;\n\t}\n\n";

				outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator-(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
				outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\tc._avx"<<i<<"=  _mm256_sub_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
				}
				outFile<<"\t\tc._d = (a._d-b._d);\n";
				outFile<<"\t\treturn c;\n\t}\n\n";

				outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator/(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
				outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
				for(int i = 0; i < n/4; i++){
					outFile<<"\t\tc._avx"<<i<<"=  _mm256_div_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
				}
				outFile<<"\t\tc._d = (a._d/b._d);\n";
				outFile<<"\t\treturn c;\n\t}\n\n";

				outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> exp(VectorSIMD<double,"<<n<<"> a){\n";
				outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
				for(int i = 0; i < n; i++){
					outFile<<"\t\ta_d["<<i<<"] = std::exp(a_d["<<i<<"]);\n";
				}
				outFile<<"\t\tVectorSIMD<double,"<<n<<"> r(a_d);\n\t\treturn r;\n\t}\n";

				outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> sqrt(VectorSIMD<double,"<<n<<"> a){\n";
				outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
				for(int i = 0; i < n; i++){
					outFile<<"\t\ta_d["<<i<<"] = std::sqrt(a_d["<<i<<"]);\n";
				}
				outFile<<"\t\tVectorSIMD<double,"<<n<<"> r(a_d);\n\t\treturn r;\n\t}";

				outFile<<"\n\n\tinline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,"<<n<<"> a){ \n";
				outFile<<"\t\tdouble ad["<<n<<"];\n";
				outFile<<"\t\ta.convert(ad);\n";
				outFile<<"\t\tos << \"{\"";
				for(int i = 0; i<n; i++){
					outFile << " << "<<"ad[" << i <<"]";
					if(i != n-1){
						outFile<<" << \",\" ";
					}
				}
				outFile<<" << \"}\";\n\t\treturn os;\n\t\t}\n\n\n";

			}



		if(n %4 == 2){


			//this is the case where n%4 = 3;
			outFile<<"template <typename Real>\nclass VectorSIMD<Real,"<<n<<">{\npublic:\n";
			for (int i =0; i < n/4; i++){
				outFile<<"\t\t__m256d _avx"<<i<<";\n";
			}
			outFile<<"\t\t__m128d _sse"<<0<<";\n";

			outFile<<"\t\tVectorSIMD(){};\n";

			outFile<<"\t\tVectorSIMD(Real a){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a,a,a,a);\n";
			}
			outFile<<"\t\t\t_sse0 = _mm_set_pd(a,a);\n";
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD(Real (&a)["<<n<<"]){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a["<<4*i+3<<"],a["<<4*i+2<<"],a["<<4*i+1<<"],a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t\t_sse0 = _mm_set_pd(a["<<n-1<<"],a["<<n-2<<"]);";
			outFile<<"\t\t}\n\n";


			outFile<<"\t\tVectorSIMD(";
			for(int i = 0; i < n; i++){
				outFile<<"Real _"<<i;
				if(i != n-1){
				outFile<<",";
				}
			}
			outFile<<"){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(_"<<4*i+3<<",_"<<4*i+2<<",_"<<4*i+1<<",_"<<4*i<<");\n";
			}
			outFile<<"\t\t\t_sse0 ="<<"_mm_set_pd(_"<<n-1<<",_"<<n-2<<");\n";
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD(";
			for(int i = 0; i < n/4; i++){
				outFile<<"__m256d _"<<i;
				if(i != (n/4)){
					outFile<<",";
				}
			}
			outFile<<"__m128d c";
			outFile<<"){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "= _"<<i <<";\n" ;
			}
			outFile<<"\t\t\t_sse0 = c;\n";
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD& operator=(Real a){\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<"=_mm256_set_pd(a,a,a,a);\n";
			}
			outFile<<"\t\t\t_sse0 = _mm_set_pd(a,a);\n";
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

			outFile << "\t\tVectorSIMD& operator += (VectorSIMD<Real,"<<n<<"> a){\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<"=  _mm256_add_pd(_avx"<<i<<",a._avx"<<i<<");\n";
			}
			outFile<<"\t\t\t_sse0 = _mm_add_pd(_sse0, a._sse0);\n";
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";


			outFile << "\t\tVectorSIMD& operator -= (VectorSIMD<Real,"<<n<<"> a){\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<"=  _mm256_sub_pd(_avx"<<i<<",a._avx"<<i<<");\n";
			}
			outFile<<"\t\t\t_sse0 = _mm_sub_pd(_sse0, a._sse0);\n";
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

			outFile << "\t\tVectorSIMD operator -() const{\n";
			outFile << "\t\t\tconst static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);\n";
			outFile << "\t\t\tconst static __m128d m1s = _mm_set_pd(-1.0, -1.0);\n";
			outFile << "\t\t\tVectorSIMD<double,"<<n<<"> result;\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\tresult._avx"<<i<<"=  _mm256_mul_pd(this->_avx"<<i<<",m1);\n";
			}
			outFile << "\t\t\tresult._sse0 = _mm_mul_pd(this->_sse0, m1s);\n";
			outFile<<"\t\t\treturn result;\n\t\t}\n\n";

			outFile<<"\t\tvoid load(Real const* a){\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<" =  _mm256_loadu_pd(&a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t\t_sse0 = _mm_loadu_pd(&a["<<n-2<<"]);\n";
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid load_aligned(Real const* a){\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<" =  _mm256_load_pd(&a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t\t_sse0 = _mm_load_pd(&a["<<n-2<<"]);\n";
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid convert(Real *a) const {\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
			}
			outFile << "\t\t_mm_storeu_pd(&a["<<n-2<<"], _sse0);\n";
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid convert_aligned(Real *a) const {\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
			}
			outFile << "\t\t_mm_store_pd(&a["<<n-2<<"], _sse0);\n";
			outFile<<"\t\t}\n\n";

			outFile<<"\t};\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(double a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			outFile<<"\t\t__m256d _a =  _mm256_set_pd(a,a,a,a);\n";
			outFile<<"\t\t__m128d _a_s = _mm_set_pd(a,a);";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
			}
			outFile<<"\t\tc._sse0 = _mm_mul_pd(_a_s, b._sse0);\n";
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(VectorSIMD<double,"<<n<<"> a ,double b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			outFile<<"\t\t__m256d _b =  _mm256_set_pd(b,b,b,b);\n";
			outFile<<"\t\t__m128d _b_s =  _mm_set_pd(b,b);\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", _b);\n";
			}
			outFile<<"c._sse0 = _mm_mul_pd(a._sse0, _b_s);\n";
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(int a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tif(a==1){return b;}\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";

			outFile<<"\t\tdouble q = static_cast<double>(a);\n";
			outFile<<"\t\t__m256d _a =  _mm256_set_pd(q,q,q,q);\n";
			outFile<<"\t\t__m128d _a_s = _mm_set_pd(q,q);\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
			}
			outFile<<"\t\tc._sse0 = _mm_mul_pd(_a_s,b._sse0);\n";
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(VectorSIMD<double,"<<n<<"> a, int b){\n";
			outFile<<"\t\tif(b==1){return a;}\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			outFile<<"\t\tdouble q = static_cast<double>(b);\n";
			outFile<<"\t\t__m256d _b =  _mm256_set_pd(q,q,q,q);\n";
			outFile<<"\t\t__m128d _b_s = _mm_set_pd(q,q);\n";
			outFile<<"c._sse0 = _mm_mul_pd(a._sse0, _b_s);\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_b, a._avx"<<i<<");\n";
			}

			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\tc._sse0 = _mm_mul_pd(a._sse0,b._sse0);\n";
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator+(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_add_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\tc._sse0 = _mm_add_pd(a._sse0,b._sse0);\n";
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator-(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_sub_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\tc._sse0 = _mm_sub_pd(a._sse0,b._sse0);\n";
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator/(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_div_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\tc._sse0 = _mm_div_pd(a._sse0,b._sse0);\n";
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> exp(VectorSIMD<double,"<<n<<"> a){\n";
			outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
			for(int i = 0; i < n; i++){
				outFile<<"\t\ta_d["<<i<<"] = std::exp(a_d["<<i<<"]);\n";
			}
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> r(a_d);\n\t\treturn r;\n\t}\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> sqrt(VectorSIMD<double,"<<n<<"> a){\n";
			outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
			for(int i = 0; i < n; i++){
				outFile<<"\t\ta_d["<<i<<"] = std::sqrt(a_d["<<i<<"]);\n";
			}
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> r(a_d);\n\t\treturn r;\n\t}";

			outFile<<"\n\n\tinline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,"<<n<<"> a){ \n";
			outFile<<"\t\tdouble ad["<<n<<"];\n";
			outFile<<"\t\ta.convert(ad);\n";
			outFile<<"\t\tos << \"{\"";
			for(int i = 0; i<n; i++){
				outFile << " << "<<"ad[" << i <<"]";
				if(i != n-1){
					outFile<<" << \",\" ";
				}
			}
			outFile<<" << \"}\";\n\t\treturn os;\n\t\t}\n\n\n";

		}


		if(n %4 == 3){


			//this is the case where n%4 = 3;
			outFile<<"template <typename Real>\nclass VectorSIMD<Real,"<<n<<">{\npublic:\n";
			for (int i =0; i < n/4 + 1; i++){
				outFile<<"\t\t__m256d _avx"<<i<<";\n";
			}
				outFile<<"\t\tVectorSIMD(){};\n";
			outFile<<"\t\tVectorSIMD(Real a){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a,a,a,a);\n";
			}
			outFile<<"\t\t\t_avx"<<n/4<< "="<<"_mm256_set_pd(0,a,a,a);\n";
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD(Real (&a)["<<n<<"]){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a["<<4*i+3<<"],a["<<4*i+2<<"],a["<<4*i+1<<"],a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t\t_avx"<<(n/4)<< "="<<"_mm256_set_pd(0,a["<<4*(n/4)+2<<"],a["<<4*(n/4)+1<<"],a["<<4*(n/4)<<"]);\n";
			outFile<<"\t\t}\n\n";


			outFile<<"\t\tVectorSIMD(";
			for(int i = 0; i < n; i++){
				outFile<<"Real _"<<i;
				if(i != n-1){
				outFile<<",";
				}
			}
			outFile<<"){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(_"<<4*i+3<<",_"<<4*i+2<<",_"<<4*i+1<<",_"<<4*i<<");\n";
			}
			outFile<<"\t\t\t_avx"<<(n/4)<< "="<<"_mm256_set_pd( 0,_"<<4*(n/4)+2<<",_"<<4*(n/4)+1<<",_"<<4*(n/4)<<");\n";
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD(";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"__m256d _"<<i;
				if(i != (n/4)){
					outFile<<",";
				}
			}
			outFile<<"){\n";
			for(int i = 0; i<n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<< "= _"<<i <<";\n" ;
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD& operator=(Real a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<"=_mm256_set_pd(a,a,a,a);\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

			outFile << "\t\tVectorSIMD& operator += (VectorSIMD<Real,"<<n<<"> a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<"=  _mm256_add_pd(_avx"<<i<<",a._avx"<<i<<");\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";


			outFile << "\t\tVectorSIMD& operator -= (VectorSIMD<Real,"<<n<<"> a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<"=  _mm256_sub_pd(_avx"<<i<<",a._avx"<<i<<");\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

			outFile << "\t\tVectorSIMD operator -() const{\n";
			outFile << "\t\t\tconst static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);\n";
			outFile << "\t\t\tVectorSIMD<double,"<<n<<"> result;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\tresult._avx"<<i<<"=  _mm256_mul_pd(this->_avx"<<i<<",m1);\n";
			}
			outFile<<"\t\t\treturn result;\n\t\t}\n\n";

			outFile<<"\t\tvoid load(Real const* a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<" =  _mm256_loadu_pd(&a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid load_aligned(Real const* a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<" =  _mm256_load_pd(&a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid convert(Real *a) const {\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid convert_aligned(Real *a) const {\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t};\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(double a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			outFile<<"\t\t__m256d _a =  _mm256_set_pd(a,a,a,a);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(VectorSIMD<double,"<<n<<"> a ,double b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			outFile<<"\t\t__m256d _b =  _mm256_set_pd(b,b,b,b);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", _b);\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(int a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tif(a==1){return b;}\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			outFile<<"\t\tdouble q = static_cast<double>(a);\n";
			outFile<<"\t\t__m256d _a =  _mm256_set_pd(q,q,q,q);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(VectorSIMD<double,"<<n<<"> a, int b){\n";
			outFile<<"\t\tif(b==1){return a;}\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			outFile<<"\t\tdouble q = static_cast<double>(b);\n";
			outFile<<"\t\t__m256d _b =  _mm256_set_pd(q,q,q,q);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_b, a._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator+(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_add_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator-(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_sub_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator/(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_div_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> exp(VectorSIMD<double,"<<n<<"> a){\n";
			outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
			for(int i = 0; i < n; i++){
				outFile<<"\t\ta_d["<<i<<"] = std::exp(a_d["<<i<<"]);\n";
			}
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> r(a_d);\n\t\treturn r;\n\t}\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> sqrt(VectorSIMD<double,"<<n<<"> a){\n";
			outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
			for(int i = 0; i < n; i++){
				outFile<<"\t\ta_d["<<i<<"] = std::sqrt(a_d["<<i<<"]);\n";
			}
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> r(a_d);\n\t\treturn r;\n\t}";

			outFile<<"\n\n\tinline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,"<<n<<"> a){ \n";
			outFile<<"\t\tdouble ad["<<n<<"];\n";
			outFile<<"\t\ta.convert(ad);\n";
			outFile<<"\t\tos << \"{\"";
			for(int i = 0; i<n; i++){
				outFile << " << "<<"ad[" << i <<"]";
				if(i != n-1){
					outFile<<" << \",\" ";
				}
			}
			outFile<<" << \"}\";\n\t\treturn os;\n\t\t}\n\n\n\n";

		}


		if(n%4 == 0){


			//this is the case where n%4 = 0;
			outFile<<"template <typename Real>\nclass VectorSIMD<Real,"<<n<<">{\npublic:\n";
			for (int i =0; i < n/4; i++){
				outFile<<"\t\t__m256d _avx"<<i<<";\n";
			}
			outFile<<"\t\tVectorSIMD(){};\n";
			outFile<<"\t\tVectorSIMD(Real a){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a,a,a,a);\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD(Real (&a)["<<n<<"]){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a["<<4*i+3<<"],a["<<4*i+2<<"],a["<<4*i+1<<"],a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t}\n\n";


			outFile<<"\t\tVectorSIMD(";
			for(int i = 0; i < n; i++){
				outFile<<"Real _"<<i;
				if(i != n-1){
					outFile<<",";
				}
			}
			outFile<<"){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(_"<<4*i+3<<",_"<<4*i+2<<",_"<<4*i+1<<",_"<<4*i<<");\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD(";
			for(int i = 0; i < n/4; i++){
				outFile<<"__m256d _"<<i;
				if(i != (n/4)-1){
					outFile<<",";
				}
			}
			outFile<<"){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "= _"<<i <<";\n" ;
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD& operator=(Real a){\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<"=_mm256_set_pd(a,a,a,a);\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

			outFile << "\t\tVectorSIMD& operator += (VectorSIMD<Real,"<<n<<"> a){\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<"=  _mm256_add_pd(_avx"<<i<<",a._avx"<<i<<");\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";


			outFile << "\t\tVectorSIMD& operator -= (VectorSIMD<Real,"<<n<<"> a){\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<"=  _mm256_sub_pd(_avx"<<i<<",a._avx"<<i<<");\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

			outFile << "\t\tVectorSIMD operator -() const{\n";
			outFile << "\t\t\tconst static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);\n";
			outFile << "\t\t\tVectorSIMD<double,"<<n<<"> result;\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\tresult._avx"<<i<<"=  _mm256_mul_pd(this->_avx"<<i<<",m1);\n";
			}
			outFile<<"\t\t\treturn result;\n\t\t}\n\n";

			outFile<<"\t\tvoid load(Real const* a){\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<" =  _mm256_loadu_pd(&a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid load_aligned(Real const* a){\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<" =  _mm256_load_pd(&a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid convert(Real *a) const {\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid convert_aligned(Real *a) const {\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t};\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(double a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			outFile<<"\t\t__m256d _a =  _mm256_set_pd(a,a,a,a);\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(VectorSIMD<double,"<<n<<"> a ,double b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			outFile<<"\t\t__m256d _b =  _mm256_set_pd(b,b,b,b);\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", _b);\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(int a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tif(a==1){return b;}\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			outFile<<"\t\tdouble q = static_cast<double>(a);\n";
			outFile<<"\t\t__m256d _a =  _mm256_set_pd(q,q,q,q);\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(VectorSIMD<double,"<<n<<"> a, int b){\n";
			outFile<<"\t\tif(b==1){return a;}\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			outFile<<"\t\tdouble q = static_cast<double>(b);\n";
			outFile<<"\t\t__m256d _b =  _mm256_set_pd(q,q,q,q);\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_b, a._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator*(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator+(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_add_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator-(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_sub_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> operator/(VectorSIMD<double,"<<n<<"> a, VectorSIMD<double,"<<n<<"> b){\n";
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> c;\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_div_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> exp(VectorSIMD<double,"<<n<<"> a){\n";
			outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
			for(int i = 0; i < n; i++){
				outFile<<"\t\ta_d["<<i<<"] = std::exp(a_d["<<i<<"]);\n";
			}
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> r(a_d);\n\t\treturn r;\n\t}\n";

			outFile<<"\n\tinline VectorSIMD<double,"<<n<<"> sqrt(VectorSIMD<double,"<<n<<"> a){\n";
			outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
			for(int i = 0; i < n; i++){
				outFile<<"\t\ta_d["<<i<<"] = std::sqrt(a_d["<<i<<"]);\n";
			}
			outFile<<"\t\tVectorSIMD<double,"<<n<<"> r(a_d);\n\t\treturn r;\n\t}";

			outFile<<"\n\n\tinline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,"<<n<<"> a){ \n";
			outFile<<"\t\tdouble ad["<<n<<"];\n";
			outFile<<"\t\ta.convert(ad);\n";
			outFile<<"\t\tos << \"{\"";
			for(int i = 0; i<n; i++){
				outFile << " << "<<"ad[" << i <<"]";
				if(i != n-1){
					outFile<<" << \",\" ";
				}
			}
			outFile<<" << \"}\";\n\t\treturn os;\n\t\t}";


		}

		}
	outFile.close();
	return 0;

}

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



	ofstream headFile;

	headFile.open("simd_wrapped_vectors.hpp");
	headFile<<"//Name: Jonathan Dullea \n//jdullea@umass.edu\n";
	headFile<<"//This header was generatef by generate_vector.cpp\n\n";
	headFile<<"#include <iostream>\n#include <x86intrin.h>\n#include \"immintrin.h\"\n#include <cstring>\n#include <cmath>\n";
	headFile<<"using namespace std;\n\n";


	for(int n = 2; n <= max_num; n++){

		if(n %4 == 1){
			ofstream outFile;
			std::string filename = std::string("vectors/vector_") +std::to_string(n) + ".hpp";
			outFile.open(filename.c_str());



			outFile<<"//Name: Jonathan Dullea \n//jdullea@umass.edu\n";
			outFile<<"//This header was generatef by generate_vector.cpp\n\n";
			outFile<<"#include <iostream>\n#include <x86intrin.h>\n#include \"immintrin.h\"\n#include <cstring>\n#include <cmath>\n";
			outFile<<"using namespace std;\n\n";

			//this is the case where n%4 = 3;
			outFile<<"class VectorSIMD"<<n<<"{\npublic:\n";
			for (int i =0; i < n/4 + 1; i++){
				outFile<<"\t\t__m256d _avx"<<i<<";\n";
			}
			outFile<<"\t\tVectorSIMD"<<n<<"(){};\n";
			outFile<<"\t\tVectorSIMD"<<n<<"(double a){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a,a,a,a);\n";
			}
			outFile<<"\t\t\t_avx"<<n/4<< "="<<"_mm256_set_pd(0,0,0,a);\n";
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD"<<n<<"(double (&a)["<<n<<"]){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a["<<4*i+3<<"],a["<<4*i+2<<"],a["<<4*i+1<<"],a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t\t_avx"<<(n/4)<< "="<<"_mm256_set_pd(0,0,0,a["<<4*(n/4)<<"]);\n";
			outFile<<"\t\t}\n\n";


			outFile<<"\t\tVectorSIMD"<<n<<"(";
			for(int i = 0; i < n; i++){
				outFile<<"double _"<<i;
				if(i != n-1){
				outFile<<",";
				}
			}
			outFile<<"){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(_"<<4*i+3<<",_"<<4*i+2<<",_"<<4*i+1<<",_"<<4*i<<");\n";
			}
			outFile<<"\t\t\t_avx"<<(n/4)<< "="<<"_mm256_set_pd( 0,0,0,_"<<4*(n/4)<<");\n";
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD"<<n<<"(";
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

			outFile<<"\t\tVectorSIMD"<<n<<"& operator=(double a){\n";
			for(int i = 0; i < n/4 ; i++){
				outFile<<"\t\t\t_avx"<<i<<" = _mm256_set_pd(a,a,a,a);\n";
			}
			outFile<<"\t\t\t_avx"<<n/4 <<" = _mm256_set_pd(0,0,0,a);\n";
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

			outFile << "\t\tVectorSIMD"<<n<<"& operator += (VectorSIMD"<<n<<" a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<"=  _mm256_add_pd(_avx"<<i<<",a._avx"<<i<<");\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";


			outFile << "\t\tVectorSIMD"<<n<<"& operator -= (VectorSIMD"<<n<<" a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<"=  _mm256_sub_pd(_avx"<<i<<",a._avx"<<i<<");\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

			outFile << "\t\tVectorSIMD"<<n<<" operator -() const{\n";
			outFile << "\t\t\tconst static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);\n";
			outFile << "\t\t\tVectorSIMD"<<n<<" result;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\tresult._avx"<<i<<"=  _mm256_mul_pd(this->_avx"<<i<<",m1);\n";
			}
			outFile<<"\t\t\treturn result;\n\t\t}\n\n";

			outFile<<"\t\tvoid load(double const* a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<" =  _mm256_loadu_pd(&a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid load_aligned(double const* a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<" =  _mm256_load_pd(&a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid convert(double *a) const {\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid convert_aligned(double *a) const {\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t};\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(double a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\t__m256d _a =  _mm256_set_pd(a,a,a,a);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(VectorSIMD"<<n<<" a ,double b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\t__m256d _b =  _mm256_set_pd(b,b,b,b);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", _b);\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(int a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tif(a==1){return b;}\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\tdouble q = static_cast<double>(a);\n";
			outFile<<"\t\t__m256d _a =  _mm256_set_pd(q,q,q,q);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(VectorSIMD"<<n<<" a, int b){\n";
			outFile<<"\t\tif(b==1){return a;}\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\tdouble q = static_cast<double>(b);\n";
			outFile<<"\t\t__m256d _b =  _mm256_set_pd(q,q,q,q);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_b, a._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD"<<n<<" operator+(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_add_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator-(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_sub_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator/(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_div_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" exp(VectorSIMD"<<n<<" a){\n";
			outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
			for(int i = 0; i < n; i++){
				outFile<<"\t\ta_d["<<i<<"] = std::exp(a_d["<<i<<"]);\n";
			}
			outFile<<"\t\tVectorSIMD"<<n<<" r(a_d);\n\t\treturn r;\n\t}\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" sqrt(VectorSIMD"<<n<<" a){\n";
			outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
			for(int i = 0; i < n; i++){
				outFile<<"\t\ta_d["<<i<<"] = std::sqrt(a_d["<<i<<"]);\n";
			}
			outFile<<"\t\tVectorSIMD"<<n<<" r(a_d);\n\t\treturn r;\n\t}";

			outFile<<"\n\n\tinline std::ostream& operator<<(std::ostream& os, VectorSIMD"<<n<<" a){ \n";
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

			outFile.close();
			headFile <<"#include \"" <<filename <<"\"\n";


			}



		if(n %4 == 2){

			ofstream outFile;
			std::string filename = std::string("vectors/vector_") +std::to_string(n) + ".hpp";
			outFile.open(filename.c_str());



			outFile<<"//Name: Jonathan Dullea \n//jdullea@umass.edu\n";
			outFile<<"//This header was generatef by generate_vector.cpp\n\n";
			outFile<<"#include <iostream>\n#include <x86intrin.h>\n#include \"immintrin.h\"\n#include <cstring>\n#include <cmath>\n";
			outFile<<"using namespace std;\n\n";

			//this is the case where n%4 = 3;
			outFile<<"class VectorSIMD"<<n<<"{\npublic:\n";
			for (int i =0; i < n/4 + 1; i++){
				outFile<<"\t\t__m256d _avx"<<i<<";\n";
			}
				outFile<<"\t\tVectorSIMD"<<n<<"(){};\n";
			outFile<<"\t\tVectorSIMD"<<n<<"(double a){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a,a,a,a);\n";
			}
			outFile<<"\t\t\t_avx"<<n/4<< "="<<"_mm256_set_pd(0,0,a,a);\n";
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD"<<n<<"(double (&a)["<<n<<"]){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a["<<4*i+3<<"],a["<<4*i+2<<"],a["<<4*i+1<<"],a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t\t_avx"<<(n/4)<< "="<<"_mm256_set_pd(0,0,a["<<4*(n/4)+1<<"],a["<<4*(n/4)<<"]);\n";
			outFile<<"\t\t}\n\n";


			outFile<<"\t\tVectorSIMD"<<n<<"(";
			for(int i = 0; i < n; i++){
				outFile<<"double _"<<i;
				if(i != n-1){
				outFile<<",";
				}
			}
			outFile<<"){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(_"<<4*i+3<<",_"<<4*i+2<<",_"<<4*i+1<<",_"<<4*i<<");\n";
			}
			outFile<<"\t\t\t_avx"<<(n/4)<< "="<<"_mm256_set_pd( 0,0,_"<<4*(n/4)+1<<",_"<<4*(n/4)<<");\n";
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD"<<n<<"(";
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

			outFile<<"\t\tVectorSIMD"<<n<<"& operator=(double a){\n";  //TODO Might want to fix this, allows data into the zero part of vector, shouldnt matter though
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<" = _mm256_set_pd(a,a,a,a);\n";
			}
			outFile<<"\t\t\t_avx"<<n/4<<" = _mm256_set_pd(0,0,a,a);\n";
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

			outFile << "\t\tVectorSIMD"<<n<<"& operator += (VectorSIMD"<<n<<" a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<"=  _mm256_add_pd(_avx"<<i<<",a._avx"<<i<<");\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";


			outFile << "\t\tVectorSIMD"<<n<<"& operator -= (VectorSIMD"<<n<<" a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<"=  _mm256_sub_pd(_avx"<<i<<",a._avx"<<i<<");\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

			outFile << "\t\tVectorSIMD"<<n<<" operator -() const{\n";
			outFile << "\t\t\tconst static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);\n";
			outFile << "\t\t\tVectorSIMD"<<n<<" result;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\tresult._avx"<<i<<"=  _mm256_mul_pd(this->_avx"<<i<<",m1);\n";
			}
			outFile<<"\t\t\treturn result;\n\t\t}\n\n";

			outFile<<"\t\tvoid load(double const* a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<" =  _mm256_loadu_pd(&a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid load_aligned(double const* a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<" =  _mm256_load_pd(&a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid convert(double *a) const {\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid convert_aligned(double *a) const {\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t};\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(double a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\t__m256d _a =  _mm256_set_pd(a,a,a,a);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(VectorSIMD"<<n<<" a ,double b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\t__m256d _b =  _mm256_set_pd(b,b,b,b);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", _b);\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(int a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tif(a==1){return b;}\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\tdouble q = static_cast<double>(a);\n";
			outFile<<"\t\t__m256d _a =  _mm256_set_pd(q,q,q,q);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(VectorSIMD"<<n<<" a, int b){\n";
			outFile<<"\t\tif(b==1){return a;}\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\tdouble q = static_cast<double>(b);\n";
			outFile<<"\t\t__m256d _b =  _mm256_set_pd(q,q,q,q);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_b, a._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD"<<n<<" operator+(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_add_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator-(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_sub_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator/(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_div_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" exp(VectorSIMD"<<n<<" a){\n";
			outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
			for(int i = 0; i < n; i++){
				outFile<<"\t\ta_d["<<i<<"] = std::exp(a_d["<<i<<"]);\n";
			}
			outFile<<"\t\tVectorSIMD"<<n<<" r(a_d);\n\t\treturn r;\n\t}\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" sqrt(VectorSIMD"<<n<<" a){\n";
			outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
			for(int i = 0; i < n; i++){
				outFile<<"\t\ta_d["<<i<<"] = std::sqrt(a_d["<<i<<"]);\n";
			}
			outFile<<"\t\tVectorSIMD"<<n<<" r(a_d);\n\t\treturn r;\n\t}";

			outFile<<"\n\n\tinline std::ostream& operator<<(std::ostream& os, VectorSIMD"<<n<<" a){ \n";
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

			outFile.close();
			headFile <<"#include \"" <<filename <<"\"\n";

		}


		if(n %4 == 3){
			ofstream outFile;
			std::string filename = std::string("vectors/vector_") +std::to_string(n) + ".hpp";
			outFile.open(filename.c_str());



			outFile<<"//Name: Jonathan Dullea \n//jdullea@umass.edu\n";
			outFile<<"//This header was generatef by generate_vector.cpp\n\n";
			outFile<<"#include <iostream>\n#include <x86intrin.h>\n#include \"immintrin.h\"\n#include <cstring>\n#include <cmath>\n";
			outFile<<"using namespace std;\n\n";

			//this is the case where n%4 = 3;
			outFile<<"class VectorSIMD"<<n<<"{\npublic:\n";
			for (int i =0; i < n/4 + 1; i++){
				outFile<<"\t\t__m256d _avx"<<i<<";\n";
			}
				outFile<<"\t\tVectorSIMD"<<n<<"(){};\n";
			outFile<<"\t\tVectorSIMD"<<n<<"(double a){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a,a,a,a);\n";
			}
			outFile<<"\t\t\t_avx"<<n/4<< "="<<"_mm256_set_pd(0,a,a,a);\n";
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD"<<n<<"(double (&a)["<<n<<"]){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a["<<4*i+3<<"],a["<<4*i+2<<"],a["<<4*i+1<<"],a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t\t_avx"<<(n/4)<< "="<<"_mm256_set_pd(0,a["<<4*(n/4)+2<<"],a["<<4*(n/4)+1<<"],a["<<4*(n/4)<<"]);\n";
			outFile<<"\t\t}\n\n";


			outFile<<"\t\tVectorSIMD"<<n<<"(";
			for(int i = 0; i < n; i++){
				outFile<<"double _"<<i;
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

			outFile<<"\t\tVectorSIMD"<<n<<"(";
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

			outFile<<"\t\tVectorSIMD"<<n<<"& operator=(double a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<" = _mm256_set_pd(a,a,a,a);\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

			outFile << "\t\tVectorSIMD"<<n<<"& operator += (VectorSIMD"<<n<<" a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<"=  _mm256_add_pd(_avx"<<i<<",a._avx"<<i<<");\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";


			outFile << "\t\tVectorSIMD"<<n<<"& operator -= (VectorSIMD"<<n<<" a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<"=  _mm256_sub_pd(_avx"<<i<<",a._avx"<<i<<");\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

			outFile << "\t\tVectorSIMD"<<n<<" operator -() const{\n";
			outFile << "\t\t\tconst static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);\n";
			outFile << "\t\t\tVectorSIMD"<<n<<" result;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\tresult._avx"<<i<<"=  _mm256_mul_pd(this->_avx"<<i<<",m1);\n";
			}
			outFile<<"\t\t\treturn result;\n\t\t}\n\n";

			outFile<<"\t\tvoid load(double const* a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<" =  _mm256_loadu_pd(&a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid load_aligned(double const* a){\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_avx"<<i<<" =  _mm256_load_pd(&a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid convert(double *a) const {\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid convert_aligned(double *a) const {\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t};\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(double a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\t__m256d _a =  _mm256_set_pd(a,a,a,a);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(VectorSIMD"<<n<<" a ,double b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\t__m256d _b =  _mm256_set_pd(b,b,b,b);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", _b);\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(int a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tif(a==1){return b;}\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\tdouble q = static_cast<double>(a);\n";
			outFile<<"\t\t__m256d _a =  _mm256_set_pd(q,q,q,q);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(VectorSIMD"<<n<<" a, int b){\n";
			outFile<<"\t\tif(b==1){return a;}\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\tdouble q = static_cast<double>(b);\n";
			outFile<<"\t\t__m256d _b =  _mm256_set_pd(q,q,q,q);\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_b, a._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD"<<n<<" operator+(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_add_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator-(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_sub_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator/(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4 + 1; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_div_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" exp(VectorSIMD"<<n<<" a){\n";
			outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
			for(int i = 0; i < n; i++){
				outFile<<"\t\ta_d["<<i<<"] = std::exp(a_d["<<i<<"]);\n";
			}
			outFile<<"\t\tVectorSIMD"<<n<<" r(a_d);\n\t\treturn r;\n\t}\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" sqrt(VectorSIMD"<<n<<" a){\n";
			outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
			for(int i = 0; i < n; i++){
				outFile<<"\t\ta_d["<<i<<"] = std::sqrt(a_d["<<i<<"]);\n";
			}
			outFile<<"\t\tVectorSIMD"<<n<<" r(a_d);\n\t\treturn r;\n\t}";

			outFile<<"\n\n\tinline std::ostream& operator<<(std::ostream& os, VectorSIMD"<<n<<" a){ \n";
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

			outFile.close();
			headFile <<"#include \"" <<filename <<"\"\n";

		}


		if(n%4 == 0){

			ofstream outFile;
			std::string filename = std::string("vectors/vector_") + std::to_string(n)  + ".hpp";
			outFile.open(filename.c_str());


			outFile<<"//Name: Jonathan Dullea \n//jdullea@umass.edu\n";
			outFile<<"//This header was generatef by generate_vector.cpp\n\n";
			outFile<<"#include <iostream>\n#include <x86intrin.h>\n#include \"immintrin.h\"\n#include <cstring>\n#include <cmath>\n";
			outFile<<"using namespace std;\n\n";

			//this is the case where n%4 = 0;
			outFile<<"class VectorSIMD"<<n<<"{\npublic:\n";
			for (int i =0; i < n/4; i++){
				outFile<<"\t\t__m256d _avx"<<i<<";\n";
			}
			outFile<<"\t\tVectorSIMD"<<n<<"(){};\n";
			outFile<<"\t\tVectorSIMD"<<n<<"(double a){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a,a,a,a);\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD"<<n<<"(double (&a)["<<n<<"]){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(a["<<4*i+3<<"],a["<<4*i+2<<"],a["<<4*i+1<<"],a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t}\n\n";


			outFile<<"\t\tVectorSIMD"<<n<<"(";
			for(int i = 0; i < n; i++){
				outFile<<"double _"<<i;
				if(i != n-1){
					outFile<<",";
				}
			}
			outFile<<"){\n";
			for(int i = 0; i<n/4; i++){
				outFile<<"\t\t\t_avx"<<i<< "="<<"_mm256_set_pd(_"<<4*i+3<<",_"<<4*i+2<<",_"<<4*i+1<<",_"<<4*i<<");\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tVectorSIMD"<<n<<"(";
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

			outFile<<"\t\tVectorSIMD"<<n<<"& operator=(double a){\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<" = _mm256_set_pd(a,a,a,a);\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

			outFile << "\t\tVectorSIMD"<<n<<"& operator += (VectorSIMD"<<n<<" a){\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<"=  _mm256_add_pd(_avx"<<i<<",a._avx"<<i<<");\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";


			outFile << "\t\tVectorSIMD"<<n<<"& operator -= (VectorSIMD"<<n<<" a){\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<"=  _mm256_sub_pd(_avx"<<i<<",a._avx"<<i<<");\n";
			}
			outFile<<"\t\t\treturn *this;\n\t\t}\n\n";

			outFile << "\t\tVectorSIMD"<<n<<" operator -() const{\n";
			outFile << "\t\t\tconst static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);\n";
			outFile << "\t\t\tVectorSIMD"<<n<<" result;\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\tresult._avx"<<i<<"=  _mm256_mul_pd(this->_avx"<<i<<",m1);\n";
			}
			outFile<<"\t\t\treturn result;\n\t\t}\n\n";

			outFile<<"\t\tvoid load(double const* a){\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<" =  _mm256_loadu_pd(&a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid load_aligned(double const* a){\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_avx"<<i<<" =  _mm256_load_pd(&a["<<4*i<<"]);\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid convert(double *a) const {\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t\tvoid convert_aligned(double *a) const {\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\t\t_mm256_storeu_pd(&a["<<4*i<<"],_avx"<<i<<");\n";
			}
			outFile<<"\t\t}\n\n";

			outFile<<"\t};\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(double a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\t__m256d _a =  _mm256_set_pd(a,a,a,a);\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(VectorSIMD"<<n<<" a ,double b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\t__m256d _b =  _mm256_set_pd(b,b,b,b);\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", _b);\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(int a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tif(a==1){return b;}\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\tdouble q = static_cast<double>(a);\n";
			outFile<<"\t\t__m256d _a =  _mm256_set_pd(q,q,q,q);\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_a, b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(VectorSIMD"<<n<<" a, int b){\n";
			outFile<<"\t\tif(b==1){return a;}\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			outFile<<"\t\tdouble q = static_cast<double>(b);\n";
			outFile<<"\t\t__m256d _b =  _mm256_set_pd(q,q,q,q);\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(_b, a._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator*(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_mul_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";


			outFile<<"\n\tinline VectorSIMD"<<n<<" operator+(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_add_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator-(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_sub_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" operator/(VectorSIMD"<<n<<" a, VectorSIMD"<<n<<" b){\n";
			outFile<<"\t\tVectorSIMD"<<n<<" c;\n";
			for(int i = 0; i < n/4; i++){
				outFile<<"\t\tc._avx"<<i<<"=  _mm256_div_pd(a._avx"<<i<<", b._avx"<<i<<");\n";
			}
			outFile<<"\t\treturn c;\n\t}\n\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" exp(VectorSIMD"<<n<<" a){\n";
			outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
			for(int i = 0; i < n; i++){
				outFile<<"\t\ta_d["<<i<<"] = std::exp(a_d["<<i<<"]);\n";
			}
			outFile<<"\t\tVectorSIMD"<<n<<" r(a_d);\n\t\treturn r;\n\t}\n";

			outFile<<"\n\tinline VectorSIMD"<<n<<" sqrt(VectorSIMD"<<n<<" a){\n";
			outFile<<"\t\tdouble a_d["<<n<<"]; a.convert(a_d);\n";
			for(int i = 0; i < n; i++){
				outFile<<"\t\ta_d["<<i<<"] = std::sqrt(a_d["<<i<<"]);\n";
			}
			outFile<<"\t\tVectorSIMD"<<n<<" r(a_d);\n\t\treturn r;\n\t}";

			outFile<<"\n\n\tinline std::ostream& operator<<(std::ostream& os, VectorSIMD"<<n<<" a){ \n";
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

			outFile.close();
			headFile <<"#include \"" <<filename <<"\" \n";

			outFile.close();
		}

		}

	return 0;

}

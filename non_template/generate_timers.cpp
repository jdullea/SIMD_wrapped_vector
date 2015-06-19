/*
 * generate_timers.cpp
 *
 *  Created on: Jun 19, 2015
 *      Author: jonathan
 */

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char*argv[]) {

	int max_num = atoi(argv[1]);


	for(int n = 2; n <=max_num; n++){	
		ofstream file;

		std::string filename = std::string("timers/timer_") +std::to_string(n) + ".cpp";

		file.open(filename.c_str());
		file<<"//Name: Jonathan Dullea \n//jdullea@umass.edu\n";
		file<<"//This file was generatef by generate_timers.cpp\n\n";
		file<<"#include <iostream>\n#include <x86intrin.h>\n#include \"immintrin.h\"\n#include <cstring>\n#include <cmath>\n";
		file<<"#include \"../simd_wrapped_vectors.hpp\"\n#include <ctime>\n#include <chrono>\n\n";

		file<<"#define aligned_store __attribute((aligned(32)))\n\n";

		file<<"using namespace std;\n";
		file<<"int main(){\n\n\t{\n";
		
		file<<"cout<<endl<<endl<<\"testing vector length of:  \" <<"<<n<<"<<endl;";
		file<<"\taligned_store const double d0_[] = {";
		for(int i = 1; i <=n; i++){
			file<<i;
			if(i != n){
				file<<",";
			}
		}
		file<<"};\n";

		file<<"\taligned_store const double d1_[] = {";
		for(int i = 1; i <=n; i++){
			file<<i;
			if(i != n){
				file<<",";
			}
		}
		file<<"};\n";

		file<<"\taligned_store const double d2_[] = {";
		for(int i = 1; i <=n; i++){
			file<<i;
			if(i != n){
				file<<",";
			}
		}
		file<<"};\n";

		file<<"\taligned_store const double r_[] = {";
		for(int i = 1; i <=n; i++){
			file<<0;
			if(i != n){
				file<<",";
			}
		}
		file<<"};\n\n\n";

		file<<"\taligned_store double d0[] = {";
		for(int i = 1; i <=n; i++){
			file<<i;
			if(i != n){
				file<<",";
			}
		}
		file<<"};\n";

		file<<"\taligned_store double d1[] = {";
		for(int i = 1; i <=n; i++){
			file<<i;
			if(i != n){
				file<<",";
			}
		}
		file<<"};\n";

		file<<"\taligned_store  double d2[] = {";
		for(int i = 1; i <=n; i++){
			file<<i;
			if(i != n){
				file<<",";
			}
		}
		file<<"};\n";

		file<<"\taligned_store double r[] = {";
		for(int i = 1; i <=n; i++){
			file<<0;
			if(i != n){
				file<<",";
			}
		}
		file<<"};\n\n\n";

		file<<"\tstd::chrono::time_point<std::chrono::system_clock> start, end; \n\
        start = std::chrono::system_clock::now();\n\n\n";

		file<<"\tVectorSIMD"<<n<<" a(d0);\n";
		file<<"\tVectorSIMD"<<n<<" b(d1);\n";
		file<<"\tVectorSIMD"<<n<<" c(d2);\n";
		file<<"\tVectorSIMD"<<n<<" res(r);\n\n";

		file<<"\ta.load_aligned(d0_);\n";
		file<<"\tb.load_aligned(d1_);\n";
		file<<"\tc.load_aligned(d2_);\n";
		file<<"\tres.load_aligned(r_);\n\n\n";

		file<<"\tasm(\"#start simd\");\n";

		file<<" \tfor(int i = 0; i < 100000000; i++)\n\t{\n";
		file<<"   \t\tres += 0.000001*(a * b) + c;\n";
        file<<" \t\tc =0.00000001* res;\n\t}";

		file<<"\tasm(\"#end simd\");\n\n\n";

		file<<"\tend = std::chrono::system_clock::now();\n";
		file<<"\tstd::chrono::duration<double> elapsed_seconds = end-start;\n";
		file<<"\tstd::time_t end_time = std::chrono::system_clock::to_time_t(end);\n";

		file<<"\tstd::cout<<\"elaspsed time vector: \" << elapsed_seconds.count()<<\" s\"<<endl;\n";
		file<<"\tstd::cout<<res<<c<<std::endl;\n\n\t}\n\n\t{\n\n";

		file<<"\taligned_store  double d0[] = {";
		for(int i = 1; i <=n; i++){
			file<<i;
			if(i != n){
				file<<",";
			}
		}
		file<<"};\n";

		file<<"\taligned_store double d1[] = {";
		for(int i = 1; i <=n; i++){
			file<<i;
			if(i != n){
				file<<",";
			}
		}
		file<<"};\n";

		file<<"\taligned_store double d2[] = {";
		for(int i = 1; i <=n; i++){
			file<<i;
			if(i != n){
				file<<",";
			}
		}
		file<<"};\n";

		file<<"\taligned_store double r[] = {";
		for(int i = 1; i <=n; i++){
			file<<0;
			if(i != n){
				file<<",";
			}
		}
		file<<"};\n\n\n";

		file<<"\tstd::chrono::time_point<std::chrono::system_clock> start, end; \n";
		file<<"\tstart = std::chrono::system_clock::now();\n\n";

		file<<"\tasm(\"#start scalar\");\n";

		file<<"\tfor(int i = 0; i < 100000000; i++)\n\t{\n";
		file<<"\t\tfor(int j = 0; j <"<<n<<"; j++){\n";
		file<<"\t\t\tr[j] += 0.000001*(d0[j] * d1[j]) + d2[j];\n";
		file<<"\t\t\td2[j] = 0.00000001 * r[j];\n\t\t}\n\t}";
		file<<"\n\tasm(\"#end scalar\");\n\n\n";

		file<<"\tend = std::chrono::system_clock::now();\n";
		file<<"\tstd::chrono::duration<double> elapsed_seconds = end-start;\n";
		file<<"\tstd::time_t end_time = std::chrono::system_clock::to_time_t(end);\n";
		file<<"\tstd::cout<<\"elaspsed time nonvector: \" << elapsed_seconds.count()<<\" s\"<<endl;\n\n\n";

		file<<"\tfor(int i = 0; i <"<<n<<"; i++){\n";
		file<<"\t\tstd::cout<<r[i]<<\"  \"<<d2[i]<<endl;\n\t}\n\n\t}";

		file<<"\n\treturn 0;\n}";

	}
	return 0;
}


#include "simd_wrapped_vectors.hpp"
#include <iostream>
#include <ctime>
#include <chrono>

#define aligned_store __attribute((aligned(32)))


using namespace std;
int main(){


	{
	aligned_store const double d0_[] = {1,2,3,4,5,6,7,8};
	aligned_store const double d1_[] = {1,2,3,4,5,6,7,8};
	aligned_store const double d2_[] = {1,2,3,4,5,6,7,8};
        aligned_store const double r_[] =  {0,0,0,0,5,6,7,8};


	aligned_store double d0[] = {1,2,3,4,5,6,7,8};
	aligned_store double d1[] = {1,2,3,4,5,6,7,8};
	aligned_store double d2[] = {1,2,3,4,5,6,7,8};
	aligned_store double r[] =  {0,0,0,0,0,0,0,0};



	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now();

	
	VectorSIMD8 a(d0);
	VectorSIMD8 b(d1);
	VectorSIMD8 c(d2);
	VectorSIMD8 res(r);
 	
	a.load_aligned(d0_);
	b.load_aligned(d1_);
	b.load_aligned(d2_);
	res.load_aligned(r_);

	asm("#start simd");

	
	for(int i = 0; i < 1000000000; i++)
	{
		res += 0.000001*(a * b) + c;
		c =    0.00000001* res;
	}	

	asm("#end simd");

	end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);

	std::cout<<"elaspsed time:" << elapsed_seconds.count()<<"s\n";

	std::cout<<res<<c<<std::endl;

	}

	{
        double d0[] = {1,2,3,4,5,6,7,8};
	double d1[] = {1,2,3,4,5,6,7,8};
        double d2[] = {1,2,3,4,5,6,7,8};
	double r[] =  {0,0,0,0,0,0,7,8};

	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now();

	asm("#second");

        for(int i = 0; i < 1000000000; i++){
		for(int j = 0; j < 8; j++){
			r[j] += 0.000001*(d0[j] * d1[j]) + d2[j];
			d2[j] = 0.00000001 * r[j];
		}
	}

	asm("#end");

	end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
        std::cout<<"elaspsed time:" << elapsed_seconds.count()<<"s\n";

	for(int i = 0; i < 8; i++){
		std::cout<<r[i]<<"  "<<d2[i]<<endl;
	}


	}
}

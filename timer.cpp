#include "simd_wrapped_vectors.hpp"
#include <iostream>
#include <ctime>
#include <chrono>

#define aligned_store __attribute((aligned(32)))


using namespace std;
int main(){


	{
	aligned_store const double d0_[] = {1,2,3,4,5,6};
	aligned_store const double d1_[] = {1,2,3,4,5,6};
	aligned_store const double d2_[] = {1,2,3,4,5,6};
        aligned_store const double r_[] =  {0,0,0,0,0,0};


	aligned_store double d0[] = {1,2,3,4,5,6};
	aligned_store double d1[] = {1,2,3,4,5,6};
	aligned_store double d2[] = {1,2,3,4,5,6};
	aligned_store double r[] =  {0,0,0,0,0,0};



	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now();

	
	VectorSIMD6 a(d0);
	VectorSIMD6 b(d1);
	VectorSIMD6 c(d2);
	VectorSIMD6 res(r);
 	
	a.load_aligned(d0_);
	b.load_aligned(d1_);
	b.load_aligned(d2_);
	res.load_aligned(r_);

	asm("#start simd");

	
	for(int i = 0; i < 1000000000; i++)
	{
		res += a * b * c;	
	}	

	asm("#end simd");

	end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);

	std::cout<<"elaspsed time:" << elapsed_seconds.count()<<"s\n";

	std::cout<<res<<std::endl;

	}

	{
        double d0[] = {1,2,3,4,5,6};
	double d1[] = {1,2,3,4,5,6};
        double d2[] = {1,2,3,4,5,6};
	double r[] =  {0,0,0,0,0,0};

	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now();

	asm("#second");

        for(int i = 0; i < 1000000000; i++){
		for(int j = 0; j < 8; j++){
			r[j] += d0[j] * d1[j] * d2[j];
		}
	}

	asm("#end");

	end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
        std::cout<<"elaspsed time:" << elapsed_seconds.count()<<"s\n";

	for(int i = 0; i < 8; i++){
		std::cout<<r[i]<<endl;
	}


	}
}

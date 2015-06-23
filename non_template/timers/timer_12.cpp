//Name: Jonathan Dullea 
//jdullea@umass.edu
//This file was generatef by generate_timers.cpp

#include <iostream>
#include <x86intrin.h>
#include "immintrin.h"
#include <cstring>
#include <cmath>
#include "../vectors/vector_12.hpp"
#include <ctime>
#include <chrono>

#define aligned_store __attribute((aligned(32)))

using namespace std;
int main(){

	{
cout<<endl<<endl<<"testing vector length of:  " <<12<<endl;	aligned_store const double d0_[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	aligned_store const double d1_[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	aligned_store const double d2_[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	aligned_store const double r_[] = {0,0,0,0,0,0,0,0,0,0,0,0};


	aligned_store double d0[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	aligned_store double d1[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	aligned_store  double d2[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	aligned_store double r[] = {0,0,0,0,0,0,0,0,0,0,0,0};


	std::chrono::time_point<std::chrono::system_clock> start, end; 
        start = std::chrono::system_clock::now();


	VectorSIMD12 a(d0);
	VectorSIMD12 b(d1);
	VectorSIMD12 c(d2);
	VectorSIMD12 res(r);

	a.load_aligned(d0_);
	b.load_aligned(d1_);
	c.load_aligned(d2_);
	res.load_aligned(r_);


	asm("#start simd");
 	for(int i = 0; i < 100000000; i++)
	{
   		res += 0.000001*(a * b) + c;
 		c =0.00000001* res;
	}	asm("#end simd");


	end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout<<"elaspsed time vector: " << elapsed_seconds.count()<<" s"<<endl;
	std::cout<<res<<c<<std::endl;

	}

	{

	aligned_store  double d0[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	aligned_store double d1[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	aligned_store double d2[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	aligned_store double r[] = {0,0,0,0,0,0,0,0,0,0,0,0};


	std::chrono::time_point<std::chrono::system_clock> start, end; 
	start = std::chrono::system_clock::now();

	asm("#start scalar");
	for(int i = 0; i < 100000000; i++)
	{
		for(int j = 0; j <12; j++){
			r[j] += 0.000001*(d0[j] * d1[j]) + d2[j];
			d2[j] = 0.00000001 * r[j];
		}
	}
	asm("#end scalar");


	end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout<<"elaspsed time nonvector: " << elapsed_seconds.count()<<" s"<<endl;


	for(int i = 0; i <12; i++){
		std::cout<<r[i]<<"  "<<d2[i]<<endl;
	}

	}
	return 0;
}
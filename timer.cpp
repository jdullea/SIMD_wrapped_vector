#include "simd_wrapped_vectors.hpp"
#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
int main(){


	{
	const double d0_[6] = {1,2,3,4,5,6};
	const double d1_[6] = {5,6,2,6,8,1};
	
	double d0[6] = {1,2,3,4,5,6};
	double d1[6] = {5,6,2,6,8,1};

	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now();

	VectorSIMD6 a(d0);
	VectorSIMD6 b(d0);
 	
	a.load(d0_);
	b.load(d1_);


	for(int i = 0; i < 100000000; i++){
		a = 0.01 * (a + b);
	       	b = 3.14 * (a);		
	}	
	end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);

	std::cout<<"elaspsed time:" << elapsed_seconds.count()<<"s\n";

	std::cout<<a<<std::endl<<b<<std::endl;

	}

	{
        double d0[6] = {1,2,3,4,5,6};
	double d1[6] = {5,6,2,6,8,1};

	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now();

        for(int i = 0; i < 100000000; i++){
		for(int j = 0; j < 6; j++){
			d0[j] = 0.01 * (d0[j] + d1[j]);
			d1[j] = 3.14 * (d0[j]);
		}
	}
	end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
        std::cout<<"elaspsed time:" << elapsed_seconds.count()<<"s\n";

	for(int i = 0; i < 6; i++){
		std::cout<<d0[i]<<" "<<d1[i]<<endl;
	}


	}
}

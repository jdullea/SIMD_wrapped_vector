#include <cmath>
#include <ctime>
#include <iostream>
#include <x86intrin.h>
#include "immintrin.h"
#include <cstring>
#include <cmath>
#include "simd_wrapped_vectors.hpp"

using namespace std;

int main(){

	double d[4];
	for(int i = 0; i < 4; i++){
		d[i] = i*3.14159;
	}
	
	//This is the refrence bit 
	//provides a time using doubles

	VectorSIMD4 a(d);

cout<<a<<endl;

	std::clock_t start;
	double duration;
	start = std::clock();
	for(int i = 0; i < 1000000; i++){	
		for(int i = 0; i < 20; i++){
			d[i] += d[i] * 0.00000001;
		}
	}

    	duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;

    	std::cout<<"time:  "<< duration <<'\n';


	for(int i = 0; i < 4; i++){
		cout<<d[i]<<" ";
	}
	cout<<endl;

        start = std::clock();

	for(int i = 0; i < 1000000; i++){
		a += a*0.00000001;
	}			



    duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
	cout<<a<<endl;
	return 0;
    std::cout<<"time:  "<< duration <<endl<<endl<<endl;
	return 0;

}

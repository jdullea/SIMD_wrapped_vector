#include <iostream>
#include "simd_wrapped_vectors.hpp"


int main(){
	
	double d[4] = {1, 2, 3 ,4};
	VectorSIMD4 a(d);

	a += a;

	cout<<a<<endl;

	return 0;



}

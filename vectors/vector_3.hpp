//Name: Jonathan Dullea 
//jdullea@umass.edu
//This header was generatef by generate_vector.cpp

#include <iostream>
#include <x86intrin.h>
#include "immintrin.h"
#include <cstring>
#include <cmath>
using namespace std;

class VectorSIMD3{
public:
		__m256d _avx0;
		VectorSIMD3(){};
		VectorSIMD3(double a){
			_avx0=_mm256_set_pd(0,a,a,a);
		}

		VectorSIMD3(double (&a)[3]){
			_avx0=_mm256_set_pd(0,a[2],a[1],a[0]);
		}

		VectorSIMD3(double _0,double _1,double _2){
			_avx0=_mm256_set_pd( 0,_2,_1,_0);
		}

		VectorSIMD3(__m256d _0){
			_avx0= _0;
		}

		VectorSIMD3& operator=(double a){
			_avx0 = _mm256_set_pd(a,a,a,a);
			return *this;
		}

		VectorSIMD3& operator += (VectorSIMD3 a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			return *this;
		}

		VectorSIMD3& operator -= (VectorSIMD3 a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			return *this;
		}

		VectorSIMD3 operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD3 result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			return result;
		}

		void load(double const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
		}

		void load_aligned(double const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
		}

		void convert(double *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
		}

		void convert_aligned(double *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
		}

	};


	inline VectorSIMD3 operator*(double a, VectorSIMD3 b){
		VectorSIMD3 c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		return c;
	}


	inline VectorSIMD3 operator*(VectorSIMD3 a ,double b){
		VectorSIMD3 c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		return c;
	}


	inline VectorSIMD3 operator*(int a, VectorSIMD3 b){
		if(a==1){return b;}
		VectorSIMD3 c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		return c;
	}


	inline VectorSIMD3 operator*(VectorSIMD3 a, int b){
		if(b==1){return a;}
		VectorSIMD3 c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		return c;
	}


	inline VectorSIMD3 operator*(VectorSIMD3 a, VectorSIMD3 b){
		VectorSIMD3 c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD3 operator+(VectorSIMD3 a, VectorSIMD3 b){
		VectorSIMD3 c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD3 operator-(VectorSIMD3 a, VectorSIMD3 b){
		VectorSIMD3 c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD3 operator/(VectorSIMD3 a, VectorSIMD3 b){
		VectorSIMD3 c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD3 exp(VectorSIMD3 a){
		double a_d[3]; a.convert(a_d);
		a_d[0] = std::exp(a_d[0]);
		a_d[1] = std::exp(a_d[1]);
		a_d[2] = std::exp(a_d[2]);
		VectorSIMD3 r(a_d);
		return r;
	}

	inline VectorSIMD3 sqrt(VectorSIMD3 a){
		double a_d[3]; a.convert(a_d);
		a_d[0] = std::sqrt(a_d[0]);
		a_d[1] = std::sqrt(a_d[1]);
		a_d[2] = std::sqrt(a_d[2]);
		VectorSIMD3 r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD3 a){ 
		double ad[3];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << "}";
		return os;
		}




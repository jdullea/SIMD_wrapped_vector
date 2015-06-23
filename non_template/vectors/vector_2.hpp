//Name: Jonathan Dullea 
//jdullea@umass.edu
//This header was generatef by generate_vector.cpp

#include <iostream>
#include <x86intrin.h>
#include "immintrin.h"
#include <cstring>
#include <cmath>
using namespace std;

class VectorSIMD2{
public:
		__m256d _avx0;
		VectorSIMD2(){};
		VectorSIMD2(double a){
			_avx0=_mm256_set_pd(0,0,a,a);
		}

		VectorSIMD2(double (&a)[2]){
			_avx0=_mm256_set_pd(0,0,a[1],a[0]);
		}

		VectorSIMD2(double _0,double _1){
			_avx0=_mm256_set_pd( 0,0,_1,_0);
		}

		VectorSIMD2(__m256d _0){
			_avx0= _0;
		}

		VectorSIMD2& operator=(double a){
			_avx0 = _mm256_set_pd(0,0,a,a);
			return *this;
		}

		VectorSIMD2& operator += (VectorSIMD2 a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			return *this;
		}

		VectorSIMD2& operator -= (VectorSIMD2 a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			return *this;
		}

		VectorSIMD2 operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD2 result;
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


	inline VectorSIMD2 operator*(double a, VectorSIMD2 b){
		VectorSIMD2 c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		return c;
	}


	inline VectorSIMD2 operator*(VectorSIMD2 a ,double b){
		VectorSIMD2 c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		return c;
	}


	inline VectorSIMD2 operator*(int a, VectorSIMD2 b){
		if(a==1){return b;}
		VectorSIMD2 c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		return c;
	}


	inline VectorSIMD2 operator*(VectorSIMD2 a, int b){
		if(b==1){return a;}
		VectorSIMD2 c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		return c;
	}


	inline VectorSIMD2 operator*(VectorSIMD2 a, VectorSIMD2 b){
		VectorSIMD2 c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD2 operator+(VectorSIMD2 a, VectorSIMD2 b){
		VectorSIMD2 c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD2 operator-(VectorSIMD2 a, VectorSIMD2 b){
		VectorSIMD2 c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD2 operator/(VectorSIMD2 a, VectorSIMD2 b){
		VectorSIMD2 c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD2 exp(VectorSIMD2 a){
		double a_d[2]; a.convert(a_d);
		a_d[0] = std::exp(a_d[0]);
		a_d[1] = std::exp(a_d[1]);
		VectorSIMD2 r(a_d);
		return r;
	}

	inline VectorSIMD2 sqrt(VectorSIMD2 a){
		double a_d[2]; a.convert(a_d);
		a_d[0] = std::sqrt(a_d[0]);
		a_d[1] = std::sqrt(a_d[1]);
		VectorSIMD2 r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD2 a){ 
		double ad[2];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << "}";
		return os;
		}




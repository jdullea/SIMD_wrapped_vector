//Name: Jonathan Dullea 
//jdullea@umass.edu
//This header was generatef by generate_vector.cpp

#include <iostream>
#include <x86intrin.h>
#include "immintrin.h"
#include <cstring>
#include <cmath>
using namespace std;

class VectorSIMD4{
public:
		__m256d _avx0;
		VectorSIMD4(){};
		VectorSIMD4(double a){
			_avx0=_mm256_set_pd(a,a,a,a);
		}

		VectorSIMD4(double (&a)[4]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
		}

		VectorSIMD4(double _0,double _1,double _2,double _3){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
		}

		VectorSIMD4(__m256d _0){
			_avx0= _0;
		}

		VectorSIMD4& operator=(double a){
			_avx0 = _mm256_set_pd(a,a,a,a);
			return *this;
		}

		VectorSIMD4& operator += (VectorSIMD4 a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			return *this;
		}

		VectorSIMD4& operator -= (VectorSIMD4 a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			return *this;
		}

		VectorSIMD4 operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD4 result;
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


	inline VectorSIMD4 operator*(double a, VectorSIMD4 b){
		VectorSIMD4 c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		return c;
	}


	inline VectorSIMD4 operator*(VectorSIMD4 a ,double b){
		VectorSIMD4 c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		return c;
	}


	inline VectorSIMD4 operator*(int a, VectorSIMD4 b){
		if(a==1){return b;}
		VectorSIMD4 c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		return c;
	}


	inline VectorSIMD4 operator*(VectorSIMD4 a, int b){
		if(b==1){return a;}
		VectorSIMD4 c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		return c;
	}


	inline VectorSIMD4 operator*(VectorSIMD4 a, VectorSIMD4 b){
		VectorSIMD4 c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD4 operator+(VectorSIMD4 a, VectorSIMD4 b){
		VectorSIMD4 c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD4 operator-(VectorSIMD4 a, VectorSIMD4 b){
		VectorSIMD4 c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD4 operator/(VectorSIMD4 a, VectorSIMD4 b){
		VectorSIMD4 c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD4 exp(VectorSIMD4 a){
		double a_d[4]; a.convert(a_d);
		a_d[0] = std::exp(a_d[0]);
		a_d[1] = std::exp(a_d[1]);
		a_d[2] = std::exp(a_d[2]);
		a_d[3] = std::exp(a_d[3]);
		VectorSIMD4 r(a_d);
		return r;
	}

	inline VectorSIMD4 sqrt(VectorSIMD4 a){
		double a_d[4]; a.convert(a_d);
		a_d[0] = std::sqrt(a_d[0]);
		a_d[1] = std::sqrt(a_d[1]);
		a_d[2] = std::sqrt(a_d[2]);
		a_d[3] = std::sqrt(a_d[3]);
		VectorSIMD4 r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD4 a){ 
		double ad[4];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << "}";
		return os;
		}
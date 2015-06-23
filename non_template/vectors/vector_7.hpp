//Name: Jonathan Dullea 
//jdullea@umass.edu
//This header was generatef by generate_vector.cpp

#include <iostream>
#include <x86intrin.h>
#include "immintrin.h"
#include <cstring>
#include <cmath>
using namespace std;

class VectorSIMD7{
public:
		__m256d _avx0;
		__m256d _avx1;
		VectorSIMD7(){};
		VectorSIMD7(double a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(0,a,a,a);
		}

		VectorSIMD7(double (&a)[7]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(0,a[6],a[5],a[4]);
		}

		VectorSIMD7(double _0,double _1,double _2,double _3,double _4,double _5,double _6){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd( 0,_6,_5,_4);
		}

		VectorSIMD7(__m256d _0,__m256d _1){
			_avx0= _0;
			_avx1= _1;
		}

		VectorSIMD7& operator=(double a){
			_avx0 = _mm256_set_pd(a,a,a,a);
			_avx1 = _mm256_set_pd(a,a,a,a);
			return *this;
		}

		VectorSIMD7& operator += (VectorSIMD7 a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			return *this;
		}

		VectorSIMD7& operator -= (VectorSIMD7 a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			return *this;
		}

		VectorSIMD7 operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD7 result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			return result;
		}

		void load(double const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
		}

		void load_aligned(double const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
		}

		void convert(double *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
		}

		void convert_aligned(double *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
		}

	};


	inline VectorSIMD7 operator*(double a, VectorSIMD7 b){
		VectorSIMD7 c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		return c;
	}


	inline VectorSIMD7 operator*(VectorSIMD7 a ,double b){
		VectorSIMD7 c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		return c;
	}


	inline VectorSIMD7 operator*(int a, VectorSIMD7 b){
		if(a==1){return b;}
		VectorSIMD7 c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		return c;
	}


	inline VectorSIMD7 operator*(VectorSIMD7 a, int b){
		if(b==1){return a;}
		VectorSIMD7 c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		return c;
	}


	inline VectorSIMD7 operator*(VectorSIMD7 a, VectorSIMD7 b){
		VectorSIMD7 c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		return c;
	}


	inline VectorSIMD7 operator+(VectorSIMD7 a, VectorSIMD7 b){
		VectorSIMD7 c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		return c;
	}


	inline VectorSIMD7 operator-(VectorSIMD7 a, VectorSIMD7 b){
		VectorSIMD7 c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		return c;
	}


	inline VectorSIMD7 operator/(VectorSIMD7 a, VectorSIMD7 b){
		VectorSIMD7 c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		return c;
	}


	inline VectorSIMD7 exp(VectorSIMD7 a){
		double a_d[7]; a.convert(a_d);
		a_d[0] = std::exp(a_d[0]);
		a_d[1] = std::exp(a_d[1]);
		a_d[2] = std::exp(a_d[2]);
		a_d[3] = std::exp(a_d[3]);
		a_d[4] = std::exp(a_d[4]);
		a_d[5] = std::exp(a_d[5]);
		a_d[6] = std::exp(a_d[6]);
		VectorSIMD7 r(a_d);
		return r;
	}

	inline VectorSIMD7 sqrt(VectorSIMD7 a){
		double a_d[7]; a.convert(a_d);
		a_d[0] = std::sqrt(a_d[0]);
		a_d[1] = std::sqrt(a_d[1]);
		a_d[2] = std::sqrt(a_d[2]);
		a_d[3] = std::sqrt(a_d[3]);
		a_d[4] = std::sqrt(a_d[4]);
		a_d[5] = std::sqrt(a_d[5]);
		a_d[6] = std::sqrt(a_d[6]);
		VectorSIMD7 r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD7 a){ 
		double ad[7];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << "}";
		return os;
		}




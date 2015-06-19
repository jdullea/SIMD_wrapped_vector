//Name: Jonathan Dullea 
//jdullea@umass.edu
//This header was generatef by generate_vector.cpp

#include <iostream>
#include <x86intrin.h>
#include "immintrin.h"
#include <cstring>
#include <cmath>
using namespace std;

class VectorSIMD6{
public:
		__m256d _avx0;
		__m128d _sse0;
		VectorSIMD6(){};
		VectorSIMD6(double a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_sse0 = _mm_set_pd(a,a);
		}

		VectorSIMD6(double (&a)[6]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_sse0 = _mm_set_pd(a[5],a[4]);		}

		VectorSIMD6(double _0,double _1,double _2,double _3,double _4,double _5){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_sse0 =_mm_set_pd(_5,_4);
		}

		VectorSIMD6(__m256d _0,__m128d c){
			_avx0= _0;
			_sse0 = c;
		}

		VectorSIMD6& operator =(double a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_sse0 = _mm_set_pd(a,a);
			return *this;
		}

		VectorSIMD6& operator += (VectorSIMD6 a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_sse0 = _mm_add_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD6& operator -= (VectorSIMD6 a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_sse0 = _mm_sub_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD6 operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			const static __m128d m1s = _mm_set_pd(-1.0, -1.0);
			VectorSIMD6 result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._sse0 = _mm_mul_pd(this->_sse0, m1s);
			return result;
		}

		void load(double const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_sse0 = _mm_loadu_pd(&a[4]);
		}

		void load_aligned(double const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_sse0 = _mm_load_pd(&a[4]);
		}

		void convert(double *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
		_mm_storeu_pd(&a[4], _sse0);
		}

		void convert_aligned(double *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
		_mm_store_pd(&a[4], _sse0);
		}

	};


	inline VectorSIMD6 operator*(double a, VectorSIMD6 b){
		VectorSIMD6 c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		__m128d _a_s = _mm_set_pd(a,a);		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._sse0 = _mm_mul_pd(_a_s, b._sse0);
		return c;
	}


	inline VectorSIMD6 operator*(VectorSIMD6 a ,double b){
		VectorSIMD6 c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		__m128d _b_s =  _mm_set_pd(b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		return c;
	}


	inline VectorSIMD6 operator*(int a, VectorSIMD6 b){
		if(a==1){return b;}
		VectorSIMD6 c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		__m128d _a_s = _mm_set_pd(q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._sse0 = _mm_mul_pd(_a_s,b._sse0);
		return c;
	}


	inline VectorSIMD6 operator*(VectorSIMD6 a, int b){
		if(b==1){return a;}
		VectorSIMD6 c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		__m128d _b_s = _mm_set_pd(q,q);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		return c;
	}


	inline VectorSIMD6 operator*(VectorSIMD6 a, VectorSIMD6 b){
		VectorSIMD6 c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._sse0 = _mm_mul_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD6 operator+(VectorSIMD6 a, VectorSIMD6 b){
		VectorSIMD6 c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._sse0 = _mm_add_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD6 operator-(VectorSIMD6 a, VectorSIMD6 b){
		VectorSIMD6 c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._sse0 = _mm_sub_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD6 operator/(VectorSIMD6 a, VectorSIMD6 b){
		VectorSIMD6 c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._sse0 = _mm_div_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD6 exp(VectorSIMD6 a){
		double a_d[6]; a.convert(a_d);
		a_d[0] = std::exp(a_d[0]);
		a_d[1] = std::exp(a_d[1]);
		a_d[2] = std::exp(a_d[2]);
		a_d[3] = std::exp(a_d[3]);
		a_d[4] = std::exp(a_d[4]);
		a_d[5] = std::exp(a_d[5]);
		VectorSIMD6 r(a_d);
		return r;
	}

	inline VectorSIMD6 sqrt(VectorSIMD6 a){
		double a_d[6]; a.convert(a_d);
		a_d[0] = std::sqrt(a_d[0]);
		a_d[1] = std::sqrt(a_d[1]);
		a_d[2] = std::sqrt(a_d[2]);
		a_d[3] = std::sqrt(a_d[3]);
		a_d[4] = std::sqrt(a_d[4]);
		a_d[5] = std::sqrt(a_d[5]);
		VectorSIMD6 r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD6 a){ 
		double ad[6];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << "}";
		return os;
		}



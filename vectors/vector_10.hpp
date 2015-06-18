//Name: Jonathan Dullea 
//jdullea@umass.edu
//This header was generatef by generate_vector.cpp

#include <iostream>
#include <x86intrin.h>
#include "immintrin.h"
#include <cstring>
#include <cmath>
using namespace std;

class VectorSIMD10{
public:
		__m256d _avx0;
		__m256d _avx1;
		__m128d _sse0;
		VectorSIMD10(){};
		VectorSIMD10(double a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_sse0 = _mm_set_pd(a,a);
		}

		VectorSIMD10(double (&a)[10]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_sse0 = _mm_set_pd(a[9],a[8]);		}

		VectorSIMD10(double _0,double _1,double _2,double _3,double _4,double _5,double _6,double _7,double _8,double _9){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_sse0 =_mm_set_pd(_9,_8);
		}

		VectorSIMD10(__m256d _0,__m256d _1,__m128d c){
			_avx0= _0;
			_avx1= _1;
			_sse0 = c;
		}

		VectorSIMD10& operator =(double a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_sse0 = _mm_set_pd(a,a);
			return *this;
		}

		VectorSIMD10& operator += (VectorSIMD10 a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_sse0 = _mm_add_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD10& operator -= (VectorSIMD10 a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_sse0 = _mm_sub_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD10 operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			const static __m128d m1s = _mm_set_pd(-1.0, -1.0);
			VectorSIMD10 result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._sse0 = _mm_mul_pd(this->_sse0, m1s);
			return result;
		}

		void load(double const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
			_sse0 = _mm_loadu_pd(&a[8]);
		}

		void load_aligned(double const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
			_sse0 = _mm_load_pd(&a[8]);
		}

		void convert(double *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
		_mm_storeu_pd(&a[8], _sse0);
		}

		void convert_aligned(double *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
		_mm_store_pd(&a[8], _sse0);
		}

	};


	inline VectorSIMD10 operator*(double a, VectorSIMD10 b){
		VectorSIMD10 c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		__m128d _a_s = _mm_set_pd(a,a);		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._sse0 = _mm_mul_pd(_a_s, b._sse0);
		return c;
	}


	inline VectorSIMD10 operator*(VectorSIMD10 a ,double b){
		VectorSIMD10 c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		__m128d _b_s =  _mm_set_pd(b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		return c;
	}


	inline VectorSIMD10 operator*(int a, VectorSIMD10 b){
		if(a==1){return b;}
		VectorSIMD10 c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		__m128d _a_s = _mm_set_pd(q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._sse0 = _mm_mul_pd(_a_s,b._sse0);
		return c;
	}


	inline VectorSIMD10 operator*(VectorSIMD10 a, int b){
		if(b==1){return a;}
		VectorSIMD10 c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		__m128d _b_s = _mm_set_pd(q,q);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		return c;
	}


	inline VectorSIMD10 operator*(VectorSIMD10 a, VectorSIMD10 b){
		VectorSIMD10 c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._sse0 = _mm_mul_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD10 operator+(VectorSIMD10 a, VectorSIMD10 b){
		VectorSIMD10 c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._sse0 = _mm_add_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD10 operator-(VectorSIMD10 a, VectorSIMD10 b){
		VectorSIMD10 c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._sse0 = _mm_sub_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD10 operator/(VectorSIMD10 a, VectorSIMD10 b){
		VectorSIMD10 c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._sse0 = _mm_div_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD10 exp(VectorSIMD10 a){
		double a_d[10]; a.convert(a_d);
		a_d[0] = std::exp(a_d[0]);
		a_d[1] = std::exp(a_d[1]);
		a_d[2] = std::exp(a_d[2]);
		a_d[3] = std::exp(a_d[3]);
		a_d[4] = std::exp(a_d[4]);
		a_d[5] = std::exp(a_d[5]);
		a_d[6] = std::exp(a_d[6]);
		a_d[7] = std::exp(a_d[7]);
		a_d[8] = std::exp(a_d[8]);
		a_d[9] = std::exp(a_d[9]);
		VectorSIMD10 r(a_d);
		return r;
	}

	inline VectorSIMD10 sqrt(VectorSIMD10 a){
		double a_d[10]; a.convert(a_d);
		a_d[0] = std::sqrt(a_d[0]);
		a_d[1] = std::sqrt(a_d[1]);
		a_d[2] = std::sqrt(a_d[2]);
		a_d[3] = std::sqrt(a_d[3]);
		a_d[4] = std::sqrt(a_d[4]);
		a_d[5] = std::sqrt(a_d[5]);
		a_d[6] = std::sqrt(a_d[6]);
		a_d[7] = std::sqrt(a_d[7]);
		a_d[8] = std::sqrt(a_d[8]);
		a_d[9] = std::sqrt(a_d[9]);
		VectorSIMD10 r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD10 a){ 
		double ad[10];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << "}";
		return os;
		}



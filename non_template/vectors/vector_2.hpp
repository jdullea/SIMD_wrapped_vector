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
		__m128d _sse0;
		VectorSIMD2(){};
		VectorSIMD2(double a){
			_sse0 = _mm_set_pd(a,a);
		}

		VectorSIMD2(double (&a)[2]){
			_sse0 = _mm_set_pd(a[1],a[0]);		}

		VectorSIMD2(double _0,double _1){
			_sse0 =_mm_set_pd(_1,_0);
		}

		VectorSIMD2(__m128d c){
			_sse0 = c;
		}

		VectorSIMD2& operator =(double a){
			_sse0 = _mm_set_pd(a,a);
			return *this;
		}

		VectorSIMD2& operator += (VectorSIMD2 a){
			_sse0 = _mm_add_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD2& operator -= (VectorSIMD2 a){
			_sse0 = _mm_sub_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD2 operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			const static __m128d m1s = _mm_set_pd(-1.0, -1.0);
			VectorSIMD2 result;
			result._sse0 = _mm_mul_pd(this->_sse0, m1s);
			return result;
		}

		void load(double const* a){
			_sse0 = _mm_loadu_pd(&a[0]);
		}

		void load_aligned(double const* a){
			_sse0 = _mm_load_pd(&a[0]);
		}

		void convert(double *a) const {
		_mm_storeu_pd(&a[0], _sse0);
		}

		void convert_aligned(double *a) const {
		_mm_store_pd(&a[0], _sse0);
		}

	};


	inline VectorSIMD2 operator*(double a, VectorSIMD2 b){
		VectorSIMD2 c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		__m128d _a_s = _mm_set_pd(a,a);		c._sse0 = _mm_mul_pd(_a_s, b._sse0);
		return c;
	}


	inline VectorSIMD2 operator*(VectorSIMD2 a ,double b){
		VectorSIMD2 c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		__m128d _b_s =  _mm_set_pd(b,b);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		return c;
	}


	inline VectorSIMD2 operator*(int a, VectorSIMD2 b){
		if(a==1){return b;}
		VectorSIMD2 c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		__m128d _a_s = _mm_set_pd(q,q);
		c._sse0 = _mm_mul_pd(_a_s,b._sse0);
		return c;
	}


	inline VectorSIMD2 operator*(VectorSIMD2 a, int b){
		if(b==1){return a;}
		VectorSIMD2 c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		__m128d _b_s = _mm_set_pd(q,q);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		return c;
	}


	inline VectorSIMD2 operator*(VectorSIMD2 a, VectorSIMD2 b){
		VectorSIMD2 c;
		c._sse0 = _mm_mul_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD2 operator+(VectorSIMD2 a, VectorSIMD2 b){
		VectorSIMD2 c;
		c._sse0 = _mm_add_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD2 operator-(VectorSIMD2 a, VectorSIMD2 b){
		VectorSIMD2 c;
		c._sse0 = _mm_sub_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD2 operator/(VectorSIMD2 a, VectorSIMD2 b){
		VectorSIMD2 c;
		c._sse0 = _mm_div_pd(a._sse0,b._sse0);
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



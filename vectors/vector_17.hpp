//Name: Jonathan Dullea 
//jdullea@umass.edu
//This header was generatef by generate_vector.cpp

#include <iostream>
#include <x86intrin.h>
#include "immintrin.h"
#include <cstring>
#include <cmath>
using namespace std;

class VectorSIMD17{
public:
		__m256d _avx0;
		__m256d _avx1;
		__m256d _avx2;
		__m256d _avx3;
		double _d;
		VectorSIMD17(){};
		VectorSIMD17(double a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_avx3=_mm256_set_pd(a,a,a,a);
			_d = a;
		}

		VectorSIMD17(double (&a)[17]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_avx2=_mm256_set_pd(a[11],a[10],a[9],a[8]);
			_avx3=_mm256_set_pd(a[15],a[14],a[13],a[12]);
			_d = a[16];		}

		VectorSIMD17(double _0,double _1,double _2,double _3,double _4,double _5,double _6,double _7,double _8,double _9,double _10,double _11,double _12,double _13,double _14,double _15,double _16){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_avx2=_mm256_set_pd(_11,_10,_9,_8);
			_avx3=_mm256_set_pd(_15,_14,_13,_12);
			_d = _16;
		}

		VectorSIMD17(__m256d _0,__m256d _1,__m256d _2,__m256d _3,double c){
			_avx0= _0;
			_avx1= _1;
			_avx2= _2;
			_avx3= _3;
			_d = c;
		}

		VectorSIMD17& operator=(double a){
			_avx0 = _mm256_set_pd(a,a,a,a);
			_avx1 = _mm256_set_pd(a,a,a,a);
			_avx2 = _mm256_set_pd(a,a,a,a);
			_avx3 = _mm256_set_pd(a,a,a,a);
			_d = a;
			return *this;
		}

		VectorSIMD17& operator += (VectorSIMD17 a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_avx2=  _mm256_add_pd(_avx2,a._avx2);
			_avx3=  _mm256_add_pd(_avx3,a._avx3);
			_d = _d, a._d;
			return *this;
		}

		VectorSIMD17& operator -= (VectorSIMD17 a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_avx2=  _mm256_sub_pd(_avx2,a._avx2);
			_avx3=  _mm256_sub_pd(_avx3,a._avx3);
			_d = _d - a._d;
			return *this;
		}

		VectorSIMD17 operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD17 result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._avx2=  _mm256_mul_pd(this->_avx2,m1);
			result._avx3=  _mm256_mul_pd(this->_avx3,m1);
			result._d = this->_d*(-1);
			return result;
		}

		void load(double const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
			_avx2 =  _mm256_loadu_pd(&a[8]);
			_avx3 =  _mm256_loadu_pd(&a[12]);
			_d = a[16];
		}

		void load_aligned(double const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
			_avx2 =  _mm256_load_pd(&a[8]);
			_avx3 =  _mm256_load_pd(&a[12]);
			_d = a[16];
		}

		void convert(double *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
		a[16] =  _d;
		}

		void convert_aligned(double *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
		a[16] = _d;
		}

	};


	inline VectorSIMD17 operator*(double a, VectorSIMD17 b){
		VectorSIMD17 c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		c._d = a * b._d;
		return c;
	}


	inline VectorSIMD17 operator*(VectorSIMD17 a ,double b){
		VectorSIMD17 c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		c._avx2=  _mm256_mul_pd(a._avx2, _b);
		c._avx3=  _mm256_mul_pd(a._avx3, _b);
c._d = a._d * b;
		return c;
	}


	inline VectorSIMD17 operator*(int a, VectorSIMD17 b){
		if(a==1){return b;}
		VectorSIMD17 c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		c._d = q*b._d;
		return c;
	}


	inline VectorSIMD17 operator*(VectorSIMD17 a, int b){
		if(b==1){return a;}
		VectorSIMD17 c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
c._d = a._d * q;
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		c._avx2=  _mm256_mul_pd(_b, a._avx2);
		c._avx3=  _mm256_mul_pd(_b, a._avx3);
		return c;
	}


	inline VectorSIMD17 operator*(VectorSIMD17 a, VectorSIMD17 b){
		VectorSIMD17 c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_mul_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_mul_pd(a._avx3, b._avx3);
		c._d = a._d*b._d;
		return c;
	}


	inline VectorSIMD17 operator+(VectorSIMD17 a, VectorSIMD17 b){
		VectorSIMD17 c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_add_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_add_pd(a._avx3, b._avx3);
		c._d = (a._d + b._d);
		return c;
	}


	inline VectorSIMD17 operator-(VectorSIMD17 a, VectorSIMD17 b){
		VectorSIMD17 c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_sub_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_sub_pd(a._avx3, b._avx3);
		c._d = (a._d-b._d);
		return c;
	}


	inline VectorSIMD17 operator/(VectorSIMD17 a, VectorSIMD17 b){
		VectorSIMD17 c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_div_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_div_pd(a._avx3, b._avx3);
		c._d = (a._d/b._d);
		return c;
	}


	inline VectorSIMD17 exp(VectorSIMD17 a){
		double a_d[17]; a.convert(a_d);
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
		a_d[10] = std::exp(a_d[10]);
		a_d[11] = std::exp(a_d[11]);
		a_d[12] = std::exp(a_d[12]);
		a_d[13] = std::exp(a_d[13]);
		a_d[14] = std::exp(a_d[14]);
		a_d[15] = std::exp(a_d[15]);
		a_d[16] = std::exp(a_d[16]);
		VectorSIMD17 r(a_d);
		return r;
	}

	inline VectorSIMD17 sqrt(VectorSIMD17 a){
		double a_d[17]; a.convert(a_d);
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
		a_d[10] = std::sqrt(a_d[10]);
		a_d[11] = std::sqrt(a_d[11]);
		a_d[12] = std::sqrt(a_d[12]);
		a_d[13] = std::sqrt(a_d[13]);
		a_d[14] = std::sqrt(a_d[14]);
		a_d[15] = std::sqrt(a_d[15]);
		a_d[16] = std::sqrt(a_d[16]);
		VectorSIMD17 r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD17 a){ 
		double ad[17];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << ","  << ad[10] << ","  << ad[11] << ","  << ad[12] << ","  << ad[13] << ","  << ad[14] << ","  << ad[15] << ","  << ad[16] << "}";
		return os;
		}



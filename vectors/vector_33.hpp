//Name: Jonathan Dullea 
//jdullea@umass.edu
//This header was generatef by generate_vector.cpp

#include <iostream>
#include <x86intrin.h>
#include "immintrin.h"
#include <cstring>
#include <cmath>
using namespace std;

class VectorSIMD33{
public:
		__m256d _avx0;
		__m256d _avx1;
		__m256d _avx2;
		__m256d _avx3;
		__m256d _avx4;
		__m256d _avx5;
		__m256d _avx6;
		__m256d _avx7;
		double _d;
		VectorSIMD33(){};
		VectorSIMD33(double a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_avx3=_mm256_set_pd(a,a,a,a);
			_avx4=_mm256_set_pd(a,a,a,a);
			_avx5=_mm256_set_pd(a,a,a,a);
			_avx6=_mm256_set_pd(a,a,a,a);
			_avx7=_mm256_set_pd(a,a,a,a);
			_d = a;
		}

		VectorSIMD33(double (&a)[33]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_avx2=_mm256_set_pd(a[11],a[10],a[9],a[8]);
			_avx3=_mm256_set_pd(a[15],a[14],a[13],a[12]);
			_avx4=_mm256_set_pd(a[19],a[18],a[17],a[16]);
			_avx5=_mm256_set_pd(a[23],a[22],a[21],a[20]);
			_avx6=_mm256_set_pd(a[27],a[26],a[25],a[24]);
			_avx7=_mm256_set_pd(a[31],a[30],a[29],a[28]);
			_d = a[32];		}

		VectorSIMD33(double _0,double _1,double _2,double _3,double _4,double _5,double _6,double _7,double _8,double _9,double _10,double _11,double _12,double _13,double _14,double _15,double _16,double _17,double _18,double _19,double _20,double _21,double _22,double _23,double _24,double _25,double _26,double _27,double _28,double _29,double _30,double _31,double _32){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_avx2=_mm256_set_pd(_11,_10,_9,_8);
			_avx3=_mm256_set_pd(_15,_14,_13,_12);
			_avx4=_mm256_set_pd(_19,_18,_17,_16);
			_avx5=_mm256_set_pd(_23,_22,_21,_20);
			_avx6=_mm256_set_pd(_27,_26,_25,_24);
			_avx7=_mm256_set_pd(_31,_30,_29,_28);
			_d = _32;
		}

		VectorSIMD33(__m256d _0,__m256d _1,__m256d _2,__m256d _3,__m256d _4,__m256d _5,__m256d _6,__m256d _7,double c){
			_avx0= _0;
			_avx1= _1;
			_avx2= _2;
			_avx3= _3;
			_avx4= _4;
			_avx5= _5;
			_avx6= _6;
			_avx7= _7;
			_d = c;
		}

		VectorSIMD33& operator=(double a){
			_avx0 = _mm256_set_pd(a,a,a,a);
			_avx1 = _mm256_set_pd(a,a,a,a);
			_avx2 = _mm256_set_pd(a,a,a,a);
			_avx3 = _mm256_set_pd(a,a,a,a);
			_avx4 = _mm256_set_pd(a,a,a,a);
			_avx5 = _mm256_set_pd(a,a,a,a);
			_avx6 = _mm256_set_pd(a,a,a,a);
			_avx7 = _mm256_set_pd(a,a,a,a);
			_d = a;
			return *this;
		}

		VectorSIMD33& operator += (VectorSIMD33 a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_avx2=  _mm256_add_pd(_avx2,a._avx2);
			_avx3=  _mm256_add_pd(_avx3,a._avx3);
			_avx4=  _mm256_add_pd(_avx4,a._avx4);
			_avx5=  _mm256_add_pd(_avx5,a._avx5);
			_avx6=  _mm256_add_pd(_avx6,a._avx6);
			_avx7=  _mm256_add_pd(_avx7,a._avx7);
			_d = _d, a._d;
			return *this;
		}

		VectorSIMD33& operator -= (VectorSIMD33 a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_avx2=  _mm256_sub_pd(_avx2,a._avx2);
			_avx3=  _mm256_sub_pd(_avx3,a._avx3);
			_avx4=  _mm256_sub_pd(_avx4,a._avx4);
			_avx5=  _mm256_sub_pd(_avx5,a._avx5);
			_avx6=  _mm256_sub_pd(_avx6,a._avx6);
			_avx7=  _mm256_sub_pd(_avx7,a._avx7);
			_d = _d - a._d;
			return *this;
		}

		VectorSIMD33 operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD33 result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._avx2=  _mm256_mul_pd(this->_avx2,m1);
			result._avx3=  _mm256_mul_pd(this->_avx3,m1);
			result._avx4=  _mm256_mul_pd(this->_avx4,m1);
			result._avx5=  _mm256_mul_pd(this->_avx5,m1);
			result._avx6=  _mm256_mul_pd(this->_avx6,m1);
			result._avx7=  _mm256_mul_pd(this->_avx7,m1);
			result._d = this->_d*(-1);
			return result;
		}

		void load(double const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
			_avx2 =  _mm256_loadu_pd(&a[8]);
			_avx3 =  _mm256_loadu_pd(&a[12]);
			_avx4 =  _mm256_loadu_pd(&a[16]);
			_avx5 =  _mm256_loadu_pd(&a[20]);
			_avx6 =  _mm256_loadu_pd(&a[24]);
			_avx7 =  _mm256_loadu_pd(&a[28]);
			_d = a[32];
		}

		void load_aligned(double const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
			_avx2 =  _mm256_load_pd(&a[8]);
			_avx3 =  _mm256_load_pd(&a[12]);
			_avx4 =  _mm256_load_pd(&a[16]);
			_avx5 =  _mm256_load_pd(&a[20]);
			_avx6 =  _mm256_load_pd(&a[24]);
			_avx7 =  _mm256_load_pd(&a[28]);
			_d = a[32];
		}

		void convert(double *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
			_mm256_storeu_pd(&a[16],_avx4);
			_mm256_storeu_pd(&a[20],_avx5);
			_mm256_storeu_pd(&a[24],_avx6);
			_mm256_storeu_pd(&a[28],_avx7);
		a[32] =  _d;
		}

		void convert_aligned(double *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
			_mm256_storeu_pd(&a[16],_avx4);
			_mm256_storeu_pd(&a[20],_avx5);
			_mm256_storeu_pd(&a[24],_avx6);
			_mm256_storeu_pd(&a[28],_avx7);
		a[32] = _d;
		}

	};


	inline VectorSIMD33 operator*(double a, VectorSIMD33 b){
		VectorSIMD33 c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		c._avx4=  _mm256_mul_pd(_a, b._avx4);
		c._avx5=  _mm256_mul_pd(_a, b._avx5);
		c._avx6=  _mm256_mul_pd(_a, b._avx6);
		c._avx7=  _mm256_mul_pd(_a, b._avx7);
		c._d = a * b._d;
		return c;
	}


	inline VectorSIMD33 operator*(VectorSIMD33 a ,double b){
		VectorSIMD33 c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		c._avx2=  _mm256_mul_pd(a._avx2, _b);
		c._avx3=  _mm256_mul_pd(a._avx3, _b);
		c._avx4=  _mm256_mul_pd(a._avx4, _b);
		c._avx5=  _mm256_mul_pd(a._avx5, _b);
		c._avx6=  _mm256_mul_pd(a._avx6, _b);
		c._avx7=  _mm256_mul_pd(a._avx7, _b);
c._d = a._d * b;
		return c;
	}


	inline VectorSIMD33 operator*(int a, VectorSIMD33 b){
		if(a==1){return b;}
		VectorSIMD33 c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		c._avx4=  _mm256_mul_pd(_a, b._avx4);
		c._avx5=  _mm256_mul_pd(_a, b._avx5);
		c._avx6=  _mm256_mul_pd(_a, b._avx6);
		c._avx7=  _mm256_mul_pd(_a, b._avx7);
		c._d = q*b._d;
		return c;
	}


	inline VectorSIMD33 operator*(VectorSIMD33 a, int b){
		if(b==1){return a;}
		VectorSIMD33 c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
c._d = a._d * q;
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		c._avx2=  _mm256_mul_pd(_b, a._avx2);
		c._avx3=  _mm256_mul_pd(_b, a._avx3);
		c._avx4=  _mm256_mul_pd(_b, a._avx4);
		c._avx5=  _mm256_mul_pd(_b, a._avx5);
		c._avx6=  _mm256_mul_pd(_b, a._avx6);
		c._avx7=  _mm256_mul_pd(_b, a._avx7);
		return c;
	}


	inline VectorSIMD33 operator*(VectorSIMD33 a, VectorSIMD33 b){
		VectorSIMD33 c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_mul_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_mul_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_mul_pd(a._avx4, b._avx4);
		c._avx5=  _mm256_mul_pd(a._avx5, b._avx5);
		c._avx6=  _mm256_mul_pd(a._avx6, b._avx6);
		c._avx7=  _mm256_mul_pd(a._avx7, b._avx7);
		c._d = a._d*b._d;
		return c;
	}


	inline VectorSIMD33 operator+(VectorSIMD33 a, VectorSIMD33 b){
		VectorSIMD33 c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_add_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_add_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_add_pd(a._avx4, b._avx4);
		c._avx5=  _mm256_add_pd(a._avx5, b._avx5);
		c._avx6=  _mm256_add_pd(a._avx6, b._avx6);
		c._avx7=  _mm256_add_pd(a._avx7, b._avx7);
		c._d = (a._d + b._d);
		return c;
	}


	inline VectorSIMD33 operator-(VectorSIMD33 a, VectorSIMD33 b){
		VectorSIMD33 c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_sub_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_sub_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_sub_pd(a._avx4, b._avx4);
		c._avx5=  _mm256_sub_pd(a._avx5, b._avx5);
		c._avx6=  _mm256_sub_pd(a._avx6, b._avx6);
		c._avx7=  _mm256_sub_pd(a._avx7, b._avx7);
		c._d = (a._d-b._d);
		return c;
	}


	inline VectorSIMD33 operator/(VectorSIMD33 a, VectorSIMD33 b){
		VectorSIMD33 c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_div_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_div_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_div_pd(a._avx4, b._avx4);
		c._avx5=  _mm256_div_pd(a._avx5, b._avx5);
		c._avx6=  _mm256_div_pd(a._avx6, b._avx6);
		c._avx7=  _mm256_div_pd(a._avx7, b._avx7);
		c._d = (a._d/b._d);
		return c;
	}


	inline VectorSIMD33 exp(VectorSIMD33 a){
		double a_d[33]; a.convert(a_d);
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
		a_d[17] = std::exp(a_d[17]);
		a_d[18] = std::exp(a_d[18]);
		a_d[19] = std::exp(a_d[19]);
		a_d[20] = std::exp(a_d[20]);
		a_d[21] = std::exp(a_d[21]);
		a_d[22] = std::exp(a_d[22]);
		a_d[23] = std::exp(a_d[23]);
		a_d[24] = std::exp(a_d[24]);
		a_d[25] = std::exp(a_d[25]);
		a_d[26] = std::exp(a_d[26]);
		a_d[27] = std::exp(a_d[27]);
		a_d[28] = std::exp(a_d[28]);
		a_d[29] = std::exp(a_d[29]);
		a_d[30] = std::exp(a_d[30]);
		a_d[31] = std::exp(a_d[31]);
		a_d[32] = std::exp(a_d[32]);
		VectorSIMD33 r(a_d);
		return r;
	}

	inline VectorSIMD33 sqrt(VectorSIMD33 a){
		double a_d[33]; a.convert(a_d);
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
		a_d[17] = std::sqrt(a_d[17]);
		a_d[18] = std::sqrt(a_d[18]);
		a_d[19] = std::sqrt(a_d[19]);
		a_d[20] = std::sqrt(a_d[20]);
		a_d[21] = std::sqrt(a_d[21]);
		a_d[22] = std::sqrt(a_d[22]);
		a_d[23] = std::sqrt(a_d[23]);
		a_d[24] = std::sqrt(a_d[24]);
		a_d[25] = std::sqrt(a_d[25]);
		a_d[26] = std::sqrt(a_d[26]);
		a_d[27] = std::sqrt(a_d[27]);
		a_d[28] = std::sqrt(a_d[28]);
		a_d[29] = std::sqrt(a_d[29]);
		a_d[30] = std::sqrt(a_d[30]);
		a_d[31] = std::sqrt(a_d[31]);
		a_d[32] = std::sqrt(a_d[32]);
		VectorSIMD33 r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD33 a){ 
		double ad[33];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << ","  << ad[10] << ","  << ad[11] << ","  << ad[12] << ","  << ad[13] << ","  << ad[14] << ","  << ad[15] << ","  << ad[16] << ","  << ad[17] << ","  << ad[18] << ","  << ad[19] << ","  << ad[20] << ","  << ad[21] << ","  << ad[22] << ","  << ad[23] << ","  << ad[24] << ","  << ad[25] << ","  << ad[26] << ","  << ad[27] << ","  << ad[28] << ","  << ad[29] << ","  << ad[30] << ","  << ad[31] << ","  << ad[32] << "}";
		return os;
		}



//Name: Jonathan Dullea 
//jdullea@umass.edu
//This header was generatef by generate_vector.cpp

#include <iostream>
#include <x86intrin.h>
#include "immintrin.h"
#include <cstring>
#include <cmath>
using namespace std;

class VectorSIMD69{
public:
		__m256d _avx0;
		__m256d _avx1;
		__m256d _avx2;
		__m256d _avx3;
		__m256d _avx4;
		__m256d _avx5;
		__m256d _avx6;
		__m256d _avx7;
		__m256d _avx8;
		__m256d _avx9;
		__m256d _avx10;
		__m256d _avx11;
		__m256d _avx12;
		__m256d _avx13;
		__m256d _avx14;
		__m256d _avx15;
		__m256d _avx16;
		__m256d _avx17;
		VectorSIMD69(){};
		VectorSIMD69(double a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_avx3=_mm256_set_pd(a,a,a,a);
			_avx4=_mm256_set_pd(a,a,a,a);
			_avx5=_mm256_set_pd(a,a,a,a);
			_avx6=_mm256_set_pd(a,a,a,a);
			_avx7=_mm256_set_pd(a,a,a,a);
			_avx8=_mm256_set_pd(a,a,a,a);
			_avx9=_mm256_set_pd(a,a,a,a);
			_avx10=_mm256_set_pd(a,a,a,a);
			_avx11=_mm256_set_pd(a,a,a,a);
			_avx12=_mm256_set_pd(a,a,a,a);
			_avx13=_mm256_set_pd(a,a,a,a);
			_avx14=_mm256_set_pd(a,a,a,a);
			_avx15=_mm256_set_pd(a,a,a,a);
			_avx16=_mm256_set_pd(a,a,a,a);
			_avx17=_mm256_set_pd(0,0,0,a);
		}

		VectorSIMD69(double (&a)[69]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_avx2=_mm256_set_pd(a[11],a[10],a[9],a[8]);
			_avx3=_mm256_set_pd(a[15],a[14],a[13],a[12]);
			_avx4=_mm256_set_pd(a[19],a[18],a[17],a[16]);
			_avx5=_mm256_set_pd(a[23],a[22],a[21],a[20]);
			_avx6=_mm256_set_pd(a[27],a[26],a[25],a[24]);
			_avx7=_mm256_set_pd(a[31],a[30],a[29],a[28]);
			_avx8=_mm256_set_pd(a[35],a[34],a[33],a[32]);
			_avx9=_mm256_set_pd(a[39],a[38],a[37],a[36]);
			_avx10=_mm256_set_pd(a[43],a[42],a[41],a[40]);
			_avx11=_mm256_set_pd(a[47],a[46],a[45],a[44]);
			_avx12=_mm256_set_pd(a[51],a[50],a[49],a[48]);
			_avx13=_mm256_set_pd(a[55],a[54],a[53],a[52]);
			_avx14=_mm256_set_pd(a[59],a[58],a[57],a[56]);
			_avx15=_mm256_set_pd(a[63],a[62],a[61],a[60]);
			_avx16=_mm256_set_pd(a[67],a[66],a[65],a[64]);
			_avx17=_mm256_set_pd(0,0,0,a[68]);
		}

		VectorSIMD69(double _0,double _1,double _2,double _3,double _4,double _5,double _6,double _7,double _8,double _9,double _10,double _11,double _12,double _13,double _14,double _15,double _16,double _17,double _18,double _19,double _20,double _21,double _22,double _23,double _24,double _25,double _26,double _27,double _28,double _29,double _30,double _31,double _32,double _33,double _34,double _35,double _36,double _37,double _38,double _39,double _40,double _41,double _42,double _43,double _44,double _45,double _46,double _47,double _48,double _49,double _50,double _51,double _52,double _53,double _54,double _55,double _56,double _57,double _58,double _59,double _60,double _61,double _62,double _63,double _64,double _65,double _66,double _67,double _68){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_avx2=_mm256_set_pd(_11,_10,_9,_8);
			_avx3=_mm256_set_pd(_15,_14,_13,_12);
			_avx4=_mm256_set_pd(_19,_18,_17,_16);
			_avx5=_mm256_set_pd(_23,_22,_21,_20);
			_avx6=_mm256_set_pd(_27,_26,_25,_24);
			_avx7=_mm256_set_pd(_31,_30,_29,_28);
			_avx8=_mm256_set_pd(_35,_34,_33,_32);
			_avx9=_mm256_set_pd(_39,_38,_37,_36);
			_avx10=_mm256_set_pd(_43,_42,_41,_40);
			_avx11=_mm256_set_pd(_47,_46,_45,_44);
			_avx12=_mm256_set_pd(_51,_50,_49,_48);
			_avx13=_mm256_set_pd(_55,_54,_53,_52);
			_avx14=_mm256_set_pd(_59,_58,_57,_56);
			_avx15=_mm256_set_pd(_63,_62,_61,_60);
			_avx16=_mm256_set_pd(_67,_66,_65,_64);
			_avx17=_mm256_set_pd( 0,0,0,_68);
		}

		VectorSIMD69(__m256d _0,__m256d _1,__m256d _2,__m256d _3,__m256d _4,__m256d _5,__m256d _6,__m256d _7,__m256d _8,__m256d _9,__m256d _10,__m256d _11,__m256d _12,__m256d _13,__m256d _14,__m256d _15,__m256d _16,__m256d _17){
			_avx0= _0;
			_avx1= _1;
			_avx2= _2;
			_avx3= _3;
			_avx4= _4;
			_avx5= _5;
			_avx6= _6;
			_avx7= _7;
			_avx8= _8;
			_avx9= _9;
			_avx10= _10;
			_avx11= _11;
			_avx12= _12;
			_avx13= _13;
			_avx14= _14;
			_avx15= _15;
			_avx16= _16;
			_avx17= _17;
		}

		VectorSIMD69& operator=(double a){
			_avx0 = _mm256_set_pd(a,a,a,a);
			_avx1 = _mm256_set_pd(a,a,a,a);
			_avx2 = _mm256_set_pd(a,a,a,a);
			_avx3 = _mm256_set_pd(a,a,a,a);
			_avx4 = _mm256_set_pd(a,a,a,a);
			_avx5 = _mm256_set_pd(a,a,a,a);
			_avx6 = _mm256_set_pd(a,a,a,a);
			_avx7 = _mm256_set_pd(a,a,a,a);
			_avx8 = _mm256_set_pd(a,a,a,a);
			_avx9 = _mm256_set_pd(a,a,a,a);
			_avx10 = _mm256_set_pd(a,a,a,a);
			_avx11 = _mm256_set_pd(a,a,a,a);
			_avx12 = _mm256_set_pd(a,a,a,a);
			_avx13 = _mm256_set_pd(a,a,a,a);
			_avx14 = _mm256_set_pd(a,a,a,a);
			_avx15 = _mm256_set_pd(a,a,a,a);
			_avx16 = _mm256_set_pd(a,a,a,a);
			_avx17 = _mm256_set_pd(0,0,0,a);
			return *this;
		}

		VectorSIMD69& operator += (VectorSIMD69 a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_avx2=  _mm256_add_pd(_avx2,a._avx2);
			_avx3=  _mm256_add_pd(_avx3,a._avx3);
			_avx4=  _mm256_add_pd(_avx4,a._avx4);
			_avx5=  _mm256_add_pd(_avx5,a._avx5);
			_avx6=  _mm256_add_pd(_avx6,a._avx6);
			_avx7=  _mm256_add_pd(_avx7,a._avx7);
			_avx8=  _mm256_add_pd(_avx8,a._avx8);
			_avx9=  _mm256_add_pd(_avx9,a._avx9);
			_avx10=  _mm256_add_pd(_avx10,a._avx10);
			_avx11=  _mm256_add_pd(_avx11,a._avx11);
			_avx12=  _mm256_add_pd(_avx12,a._avx12);
			_avx13=  _mm256_add_pd(_avx13,a._avx13);
			_avx14=  _mm256_add_pd(_avx14,a._avx14);
			_avx15=  _mm256_add_pd(_avx15,a._avx15);
			_avx16=  _mm256_add_pd(_avx16,a._avx16);
			_avx17=  _mm256_add_pd(_avx17,a._avx17);
			return *this;
		}

		VectorSIMD69& operator -= (VectorSIMD69 a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_avx2=  _mm256_sub_pd(_avx2,a._avx2);
			_avx3=  _mm256_sub_pd(_avx3,a._avx3);
			_avx4=  _mm256_sub_pd(_avx4,a._avx4);
			_avx5=  _mm256_sub_pd(_avx5,a._avx5);
			_avx6=  _mm256_sub_pd(_avx6,a._avx6);
			_avx7=  _mm256_sub_pd(_avx7,a._avx7);
			_avx8=  _mm256_sub_pd(_avx8,a._avx8);
			_avx9=  _mm256_sub_pd(_avx9,a._avx9);
			_avx10=  _mm256_sub_pd(_avx10,a._avx10);
			_avx11=  _mm256_sub_pd(_avx11,a._avx11);
			_avx12=  _mm256_sub_pd(_avx12,a._avx12);
			_avx13=  _mm256_sub_pd(_avx13,a._avx13);
			_avx14=  _mm256_sub_pd(_avx14,a._avx14);
			_avx15=  _mm256_sub_pd(_avx15,a._avx15);
			_avx16=  _mm256_sub_pd(_avx16,a._avx16);
			_avx17=  _mm256_sub_pd(_avx17,a._avx17);
			return *this;
		}

		VectorSIMD69 operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD69 result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._avx2=  _mm256_mul_pd(this->_avx2,m1);
			result._avx3=  _mm256_mul_pd(this->_avx3,m1);
			result._avx4=  _mm256_mul_pd(this->_avx4,m1);
			result._avx5=  _mm256_mul_pd(this->_avx5,m1);
			result._avx6=  _mm256_mul_pd(this->_avx6,m1);
			result._avx7=  _mm256_mul_pd(this->_avx7,m1);
			result._avx8=  _mm256_mul_pd(this->_avx8,m1);
			result._avx9=  _mm256_mul_pd(this->_avx9,m1);
			result._avx10=  _mm256_mul_pd(this->_avx10,m1);
			result._avx11=  _mm256_mul_pd(this->_avx11,m1);
			result._avx12=  _mm256_mul_pd(this->_avx12,m1);
			result._avx13=  _mm256_mul_pd(this->_avx13,m1);
			result._avx14=  _mm256_mul_pd(this->_avx14,m1);
			result._avx15=  _mm256_mul_pd(this->_avx15,m1);
			result._avx16=  _mm256_mul_pd(this->_avx16,m1);
			result._avx17=  _mm256_mul_pd(this->_avx17,m1);
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
			_avx8 =  _mm256_loadu_pd(&a[32]);
			_avx9 =  _mm256_loadu_pd(&a[36]);
			_avx10 =  _mm256_loadu_pd(&a[40]);
			_avx11 =  _mm256_loadu_pd(&a[44]);
			_avx12 =  _mm256_loadu_pd(&a[48]);
			_avx13 =  _mm256_loadu_pd(&a[52]);
			_avx14 =  _mm256_loadu_pd(&a[56]);
			_avx15 =  _mm256_loadu_pd(&a[60]);
			_avx16 =  _mm256_loadu_pd(&a[64]);
			_avx17 =  _mm256_loadu_pd(&a[68]);
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
			_avx8 =  _mm256_load_pd(&a[32]);
			_avx9 =  _mm256_load_pd(&a[36]);
			_avx10 =  _mm256_load_pd(&a[40]);
			_avx11 =  _mm256_load_pd(&a[44]);
			_avx12 =  _mm256_load_pd(&a[48]);
			_avx13 =  _mm256_load_pd(&a[52]);
			_avx14 =  _mm256_load_pd(&a[56]);
			_avx15 =  _mm256_load_pd(&a[60]);
			_avx16 =  _mm256_load_pd(&a[64]);
			_avx17 =  _mm256_load_pd(&a[68]);
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
			_mm256_storeu_pd(&a[32],_avx8);
			_mm256_storeu_pd(&a[36],_avx9);
			_mm256_storeu_pd(&a[40],_avx10);
			_mm256_storeu_pd(&a[44],_avx11);
			_mm256_storeu_pd(&a[48],_avx12);
			_mm256_storeu_pd(&a[52],_avx13);
			_mm256_storeu_pd(&a[56],_avx14);
			_mm256_storeu_pd(&a[60],_avx15);
			_mm256_storeu_pd(&a[64],_avx16);
			_mm256_storeu_pd(&a[68],_avx17);
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
			_mm256_storeu_pd(&a[32],_avx8);
			_mm256_storeu_pd(&a[36],_avx9);
			_mm256_storeu_pd(&a[40],_avx10);
			_mm256_storeu_pd(&a[44],_avx11);
			_mm256_storeu_pd(&a[48],_avx12);
			_mm256_storeu_pd(&a[52],_avx13);
			_mm256_storeu_pd(&a[56],_avx14);
			_mm256_storeu_pd(&a[60],_avx15);
			_mm256_storeu_pd(&a[64],_avx16);
			_mm256_storeu_pd(&a[68],_avx17);
		}

	};


	inline VectorSIMD69 operator*(double a, VectorSIMD69 b){
		VectorSIMD69 c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		c._avx4=  _mm256_mul_pd(_a, b._avx4);
		c._avx5=  _mm256_mul_pd(_a, b._avx5);
		c._avx6=  _mm256_mul_pd(_a, b._avx6);
		c._avx7=  _mm256_mul_pd(_a, b._avx7);
		c._avx8=  _mm256_mul_pd(_a, b._avx8);
		c._avx9=  _mm256_mul_pd(_a, b._avx9);
		c._avx10=  _mm256_mul_pd(_a, b._avx10);
		c._avx11=  _mm256_mul_pd(_a, b._avx11);
		c._avx12=  _mm256_mul_pd(_a, b._avx12);
		c._avx13=  _mm256_mul_pd(_a, b._avx13);
		c._avx14=  _mm256_mul_pd(_a, b._avx14);
		c._avx15=  _mm256_mul_pd(_a, b._avx15);
		c._avx16=  _mm256_mul_pd(_a, b._avx16);
		c._avx17=  _mm256_mul_pd(_a, b._avx17);
		return c;
	}


	inline VectorSIMD69 operator*(VectorSIMD69 a ,double b){
		VectorSIMD69 c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		c._avx2=  _mm256_mul_pd(a._avx2, _b);
		c._avx3=  _mm256_mul_pd(a._avx3, _b);
		c._avx4=  _mm256_mul_pd(a._avx4, _b);
		c._avx5=  _mm256_mul_pd(a._avx5, _b);
		c._avx6=  _mm256_mul_pd(a._avx6, _b);
		c._avx7=  _mm256_mul_pd(a._avx7, _b);
		c._avx8=  _mm256_mul_pd(a._avx8, _b);
		c._avx9=  _mm256_mul_pd(a._avx9, _b);
		c._avx10=  _mm256_mul_pd(a._avx10, _b);
		c._avx11=  _mm256_mul_pd(a._avx11, _b);
		c._avx12=  _mm256_mul_pd(a._avx12, _b);
		c._avx13=  _mm256_mul_pd(a._avx13, _b);
		c._avx14=  _mm256_mul_pd(a._avx14, _b);
		c._avx15=  _mm256_mul_pd(a._avx15, _b);
		c._avx16=  _mm256_mul_pd(a._avx16, _b);
		c._avx17=  _mm256_mul_pd(a._avx17, _b);
		return c;
	}


	inline VectorSIMD69 operator*(int a, VectorSIMD69 b){
		if(a==1){return b;}
		VectorSIMD69 c;
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
		c._avx8=  _mm256_mul_pd(_a, b._avx8);
		c._avx9=  _mm256_mul_pd(_a, b._avx9);
		c._avx10=  _mm256_mul_pd(_a, b._avx10);
		c._avx11=  _mm256_mul_pd(_a, b._avx11);
		c._avx12=  _mm256_mul_pd(_a, b._avx12);
		c._avx13=  _mm256_mul_pd(_a, b._avx13);
		c._avx14=  _mm256_mul_pd(_a, b._avx14);
		c._avx15=  _mm256_mul_pd(_a, b._avx15);
		c._avx16=  _mm256_mul_pd(_a, b._avx16);
		c._avx17=  _mm256_mul_pd(_a, b._avx17);
		return c;
	}


	inline VectorSIMD69 operator*(VectorSIMD69 a, int b){
		if(b==1){return a;}
		VectorSIMD69 c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		c._avx2=  _mm256_mul_pd(_b, a._avx2);
		c._avx3=  _mm256_mul_pd(_b, a._avx3);
		c._avx4=  _mm256_mul_pd(_b, a._avx4);
		c._avx5=  _mm256_mul_pd(_b, a._avx5);
		c._avx6=  _mm256_mul_pd(_b, a._avx6);
		c._avx7=  _mm256_mul_pd(_b, a._avx7);
		c._avx8=  _mm256_mul_pd(_b, a._avx8);
		c._avx9=  _mm256_mul_pd(_b, a._avx9);
		c._avx10=  _mm256_mul_pd(_b, a._avx10);
		c._avx11=  _mm256_mul_pd(_b, a._avx11);
		c._avx12=  _mm256_mul_pd(_b, a._avx12);
		c._avx13=  _mm256_mul_pd(_b, a._avx13);
		c._avx14=  _mm256_mul_pd(_b, a._avx14);
		c._avx15=  _mm256_mul_pd(_b, a._avx15);
		c._avx16=  _mm256_mul_pd(_b, a._avx16);
		c._avx17=  _mm256_mul_pd(_b, a._avx17);
		return c;
	}


	inline VectorSIMD69 operator*(VectorSIMD69 a, VectorSIMD69 b){
		VectorSIMD69 c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_mul_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_mul_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_mul_pd(a._avx4, b._avx4);
		c._avx5=  _mm256_mul_pd(a._avx5, b._avx5);
		c._avx6=  _mm256_mul_pd(a._avx6, b._avx6);
		c._avx7=  _mm256_mul_pd(a._avx7, b._avx7);
		c._avx8=  _mm256_mul_pd(a._avx8, b._avx8);
		c._avx9=  _mm256_mul_pd(a._avx9, b._avx9);
		c._avx10=  _mm256_mul_pd(a._avx10, b._avx10);
		c._avx11=  _mm256_mul_pd(a._avx11, b._avx11);
		c._avx12=  _mm256_mul_pd(a._avx12, b._avx12);
		c._avx13=  _mm256_mul_pd(a._avx13, b._avx13);
		c._avx14=  _mm256_mul_pd(a._avx14, b._avx14);
		c._avx15=  _mm256_mul_pd(a._avx15, b._avx15);
		c._avx16=  _mm256_mul_pd(a._avx16, b._avx16);
		c._avx17=  _mm256_mul_pd(a._avx17, b._avx17);
		return c;
	}


	inline VectorSIMD69 operator+(VectorSIMD69 a, VectorSIMD69 b){
		VectorSIMD69 c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_add_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_add_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_add_pd(a._avx4, b._avx4);
		c._avx5=  _mm256_add_pd(a._avx5, b._avx5);
		c._avx6=  _mm256_add_pd(a._avx6, b._avx6);
		c._avx7=  _mm256_add_pd(a._avx7, b._avx7);
		c._avx8=  _mm256_add_pd(a._avx8, b._avx8);
		c._avx9=  _mm256_add_pd(a._avx9, b._avx9);
		c._avx10=  _mm256_add_pd(a._avx10, b._avx10);
		c._avx11=  _mm256_add_pd(a._avx11, b._avx11);
		c._avx12=  _mm256_add_pd(a._avx12, b._avx12);
		c._avx13=  _mm256_add_pd(a._avx13, b._avx13);
		c._avx14=  _mm256_add_pd(a._avx14, b._avx14);
		c._avx15=  _mm256_add_pd(a._avx15, b._avx15);
		c._avx16=  _mm256_add_pd(a._avx16, b._avx16);
		c._avx17=  _mm256_add_pd(a._avx17, b._avx17);
		return c;
	}


	inline VectorSIMD69 operator-(VectorSIMD69 a, VectorSIMD69 b){
		VectorSIMD69 c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_sub_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_sub_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_sub_pd(a._avx4, b._avx4);
		c._avx5=  _mm256_sub_pd(a._avx5, b._avx5);
		c._avx6=  _mm256_sub_pd(a._avx6, b._avx6);
		c._avx7=  _mm256_sub_pd(a._avx7, b._avx7);
		c._avx8=  _mm256_sub_pd(a._avx8, b._avx8);
		c._avx9=  _mm256_sub_pd(a._avx9, b._avx9);
		c._avx10=  _mm256_sub_pd(a._avx10, b._avx10);
		c._avx11=  _mm256_sub_pd(a._avx11, b._avx11);
		c._avx12=  _mm256_sub_pd(a._avx12, b._avx12);
		c._avx13=  _mm256_sub_pd(a._avx13, b._avx13);
		c._avx14=  _mm256_sub_pd(a._avx14, b._avx14);
		c._avx15=  _mm256_sub_pd(a._avx15, b._avx15);
		c._avx16=  _mm256_sub_pd(a._avx16, b._avx16);
		c._avx17=  _mm256_sub_pd(a._avx17, b._avx17);
		return c;
	}


	inline VectorSIMD69 operator/(VectorSIMD69 a, VectorSIMD69 b){
		VectorSIMD69 c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_div_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_div_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_div_pd(a._avx4, b._avx4);
		c._avx5=  _mm256_div_pd(a._avx5, b._avx5);
		c._avx6=  _mm256_div_pd(a._avx6, b._avx6);
		c._avx7=  _mm256_div_pd(a._avx7, b._avx7);
		c._avx8=  _mm256_div_pd(a._avx8, b._avx8);
		c._avx9=  _mm256_div_pd(a._avx9, b._avx9);
		c._avx10=  _mm256_div_pd(a._avx10, b._avx10);
		c._avx11=  _mm256_div_pd(a._avx11, b._avx11);
		c._avx12=  _mm256_div_pd(a._avx12, b._avx12);
		c._avx13=  _mm256_div_pd(a._avx13, b._avx13);
		c._avx14=  _mm256_div_pd(a._avx14, b._avx14);
		c._avx15=  _mm256_div_pd(a._avx15, b._avx15);
		c._avx16=  _mm256_div_pd(a._avx16, b._avx16);
		c._avx17=  _mm256_div_pd(a._avx17, b._avx17);
		return c;
	}


	inline VectorSIMD69 exp(VectorSIMD69 a){
		double a_d[69]; a.convert(a_d);
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
		a_d[33] = std::exp(a_d[33]);
		a_d[34] = std::exp(a_d[34]);
		a_d[35] = std::exp(a_d[35]);
		a_d[36] = std::exp(a_d[36]);
		a_d[37] = std::exp(a_d[37]);
		a_d[38] = std::exp(a_d[38]);
		a_d[39] = std::exp(a_d[39]);
		a_d[40] = std::exp(a_d[40]);
		a_d[41] = std::exp(a_d[41]);
		a_d[42] = std::exp(a_d[42]);
		a_d[43] = std::exp(a_d[43]);
		a_d[44] = std::exp(a_d[44]);
		a_d[45] = std::exp(a_d[45]);
		a_d[46] = std::exp(a_d[46]);
		a_d[47] = std::exp(a_d[47]);
		a_d[48] = std::exp(a_d[48]);
		a_d[49] = std::exp(a_d[49]);
		a_d[50] = std::exp(a_d[50]);
		a_d[51] = std::exp(a_d[51]);
		a_d[52] = std::exp(a_d[52]);
		a_d[53] = std::exp(a_d[53]);
		a_d[54] = std::exp(a_d[54]);
		a_d[55] = std::exp(a_d[55]);
		a_d[56] = std::exp(a_d[56]);
		a_d[57] = std::exp(a_d[57]);
		a_d[58] = std::exp(a_d[58]);
		a_d[59] = std::exp(a_d[59]);
		a_d[60] = std::exp(a_d[60]);
		a_d[61] = std::exp(a_d[61]);
		a_d[62] = std::exp(a_d[62]);
		a_d[63] = std::exp(a_d[63]);
		a_d[64] = std::exp(a_d[64]);
		a_d[65] = std::exp(a_d[65]);
		a_d[66] = std::exp(a_d[66]);
		a_d[67] = std::exp(a_d[67]);
		a_d[68] = std::exp(a_d[68]);
		VectorSIMD69 r(a_d);
		return r;
	}

	inline VectorSIMD69 sqrt(VectorSIMD69 a){
		double a_d[69]; a.convert(a_d);
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
		a_d[33] = std::sqrt(a_d[33]);
		a_d[34] = std::sqrt(a_d[34]);
		a_d[35] = std::sqrt(a_d[35]);
		a_d[36] = std::sqrt(a_d[36]);
		a_d[37] = std::sqrt(a_d[37]);
		a_d[38] = std::sqrt(a_d[38]);
		a_d[39] = std::sqrt(a_d[39]);
		a_d[40] = std::sqrt(a_d[40]);
		a_d[41] = std::sqrt(a_d[41]);
		a_d[42] = std::sqrt(a_d[42]);
		a_d[43] = std::sqrt(a_d[43]);
		a_d[44] = std::sqrt(a_d[44]);
		a_d[45] = std::sqrt(a_d[45]);
		a_d[46] = std::sqrt(a_d[46]);
		a_d[47] = std::sqrt(a_d[47]);
		a_d[48] = std::sqrt(a_d[48]);
		a_d[49] = std::sqrt(a_d[49]);
		a_d[50] = std::sqrt(a_d[50]);
		a_d[51] = std::sqrt(a_d[51]);
		a_d[52] = std::sqrt(a_d[52]);
		a_d[53] = std::sqrt(a_d[53]);
		a_d[54] = std::sqrt(a_d[54]);
		a_d[55] = std::sqrt(a_d[55]);
		a_d[56] = std::sqrt(a_d[56]);
		a_d[57] = std::sqrt(a_d[57]);
		a_d[58] = std::sqrt(a_d[58]);
		a_d[59] = std::sqrt(a_d[59]);
		a_d[60] = std::sqrt(a_d[60]);
		a_d[61] = std::sqrt(a_d[61]);
		a_d[62] = std::sqrt(a_d[62]);
		a_d[63] = std::sqrt(a_d[63]);
		a_d[64] = std::sqrt(a_d[64]);
		a_d[65] = std::sqrt(a_d[65]);
		a_d[66] = std::sqrt(a_d[66]);
		a_d[67] = std::sqrt(a_d[67]);
		a_d[68] = std::sqrt(a_d[68]);
		VectorSIMD69 r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD69 a){ 
		double ad[69];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << ","  << ad[10] << ","  << ad[11] << ","  << ad[12] << ","  << ad[13] << ","  << ad[14] << ","  << ad[15] << ","  << ad[16] << ","  << ad[17] << ","  << ad[18] << ","  << ad[19] << ","  << ad[20] << ","  << ad[21] << ","  << ad[22] << ","  << ad[23] << ","  << ad[24] << ","  << ad[25] << ","  << ad[26] << ","  << ad[27] << ","  << ad[28] << ","  << ad[29] << ","  << ad[30] << ","  << ad[31] << ","  << ad[32] << ","  << ad[33] << ","  << ad[34] << ","  << ad[35] << ","  << ad[36] << ","  << ad[37] << ","  << ad[38] << ","  << ad[39] << ","  << ad[40] << ","  << ad[41] << ","  << ad[42] << ","  << ad[43] << ","  << ad[44] << ","  << ad[45] << ","  << ad[46] << ","  << ad[47] << ","  << ad[48] << ","  << ad[49] << ","  << ad[50] << ","  << ad[51] << ","  << ad[52] << ","  << ad[53] << ","  << ad[54] << ","  << ad[55] << ","  << ad[56] << ","  << ad[57] << ","  << ad[58] << ","  << ad[59] << ","  << ad[60] << ","  << ad[61] << ","  << ad[62] << ","  << ad[63] << ","  << ad[64] << ","  << ad[65] << ","  << ad[66] << ","  << ad[67] << ","  << ad[68] << "}";
		return os;
		}




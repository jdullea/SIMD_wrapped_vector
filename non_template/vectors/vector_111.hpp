//Name: Jonathan Dullea 
//jdullea@umass.edu
//This header was generatef by generate_vector.cpp

#include <iostream>
#include <x86intrin.h>
#include "immintrin.h"
#include <cstring>
#include <cmath>
using namespace std;

class VectorSIMD111{
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
		__m256d _avx18;
		__m256d _avx19;
		__m256d _avx20;
		__m256d _avx21;
		__m256d _avx22;
		__m256d _avx23;
		__m256d _avx24;
		__m256d _avx25;
		__m256d _avx26;
		__m256d _avx27;
		VectorSIMD111(){};
		VectorSIMD111(double a){
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
			_avx17=_mm256_set_pd(a,a,a,a);
			_avx18=_mm256_set_pd(a,a,a,a);
			_avx19=_mm256_set_pd(a,a,a,a);
			_avx20=_mm256_set_pd(a,a,a,a);
			_avx21=_mm256_set_pd(a,a,a,a);
			_avx22=_mm256_set_pd(a,a,a,a);
			_avx23=_mm256_set_pd(a,a,a,a);
			_avx24=_mm256_set_pd(a,a,a,a);
			_avx25=_mm256_set_pd(a,a,a,a);
			_avx26=_mm256_set_pd(a,a,a,a);
			_avx27=_mm256_set_pd(0,a,a,a);
		}

		VectorSIMD111(double (&a)[111]){
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
			_avx17=_mm256_set_pd(a[71],a[70],a[69],a[68]);
			_avx18=_mm256_set_pd(a[75],a[74],a[73],a[72]);
			_avx19=_mm256_set_pd(a[79],a[78],a[77],a[76]);
			_avx20=_mm256_set_pd(a[83],a[82],a[81],a[80]);
			_avx21=_mm256_set_pd(a[87],a[86],a[85],a[84]);
			_avx22=_mm256_set_pd(a[91],a[90],a[89],a[88]);
			_avx23=_mm256_set_pd(a[95],a[94],a[93],a[92]);
			_avx24=_mm256_set_pd(a[99],a[98],a[97],a[96]);
			_avx25=_mm256_set_pd(a[103],a[102],a[101],a[100]);
			_avx26=_mm256_set_pd(a[107],a[106],a[105],a[104]);
			_avx27=_mm256_set_pd(0,a[110],a[109],a[108]);
		}

		VectorSIMD111(double _0,double _1,double _2,double _3,double _4,double _5,double _6,double _7,double _8,double _9,double _10,double _11,double _12,double _13,double _14,double _15,double _16,double _17,double _18,double _19,double _20,double _21,double _22,double _23,double _24,double _25,double _26,double _27,double _28,double _29,double _30,double _31,double _32,double _33,double _34,double _35,double _36,double _37,double _38,double _39,double _40,double _41,double _42,double _43,double _44,double _45,double _46,double _47,double _48,double _49,double _50,double _51,double _52,double _53,double _54,double _55,double _56,double _57,double _58,double _59,double _60,double _61,double _62,double _63,double _64,double _65,double _66,double _67,double _68,double _69,double _70,double _71,double _72,double _73,double _74,double _75,double _76,double _77,double _78,double _79,double _80,double _81,double _82,double _83,double _84,double _85,double _86,double _87,double _88,double _89,double _90,double _91,double _92,double _93,double _94,double _95,double _96,double _97,double _98,double _99,double _100,double _101,double _102,double _103,double _104,double _105,double _106,double _107,double _108,double _109,double _110){
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
			_avx17=_mm256_set_pd(_71,_70,_69,_68);
			_avx18=_mm256_set_pd(_75,_74,_73,_72);
			_avx19=_mm256_set_pd(_79,_78,_77,_76);
			_avx20=_mm256_set_pd(_83,_82,_81,_80);
			_avx21=_mm256_set_pd(_87,_86,_85,_84);
			_avx22=_mm256_set_pd(_91,_90,_89,_88);
			_avx23=_mm256_set_pd(_95,_94,_93,_92);
			_avx24=_mm256_set_pd(_99,_98,_97,_96);
			_avx25=_mm256_set_pd(_103,_102,_101,_100);
			_avx26=_mm256_set_pd(_107,_106,_105,_104);
			_avx27=_mm256_set_pd( 0,_110,_109,_108);
		}

		VectorSIMD111(__m256d _0,__m256d _1,__m256d _2,__m256d _3,__m256d _4,__m256d _5,__m256d _6,__m256d _7,__m256d _8,__m256d _9,__m256d _10,__m256d _11,__m256d _12,__m256d _13,__m256d _14,__m256d _15,__m256d _16,__m256d _17,__m256d _18,__m256d _19,__m256d _20,__m256d _21,__m256d _22,__m256d _23,__m256d _24,__m256d _25,__m256d _26,__m256d _27){
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
			_avx18= _18;
			_avx19= _19;
			_avx20= _20;
			_avx21= _21;
			_avx22= _22;
			_avx23= _23;
			_avx24= _24;
			_avx25= _25;
			_avx26= _26;
			_avx27= _27;
		}

		VectorSIMD111& operator=(double a){
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
			_avx17 = _mm256_set_pd(a,a,a,a);
			_avx18 = _mm256_set_pd(a,a,a,a);
			_avx19 = _mm256_set_pd(a,a,a,a);
			_avx20 = _mm256_set_pd(a,a,a,a);
			_avx21 = _mm256_set_pd(a,a,a,a);
			_avx22 = _mm256_set_pd(a,a,a,a);
			_avx23 = _mm256_set_pd(a,a,a,a);
			_avx24 = _mm256_set_pd(a,a,a,a);
			_avx25 = _mm256_set_pd(a,a,a,a);
			_avx26 = _mm256_set_pd(a,a,a,a);
			_avx27 = _mm256_set_pd(a,a,a,a);
			return *this;
		}

		VectorSIMD111& operator += (VectorSIMD111 a){
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
			_avx18=  _mm256_add_pd(_avx18,a._avx18);
			_avx19=  _mm256_add_pd(_avx19,a._avx19);
			_avx20=  _mm256_add_pd(_avx20,a._avx20);
			_avx21=  _mm256_add_pd(_avx21,a._avx21);
			_avx22=  _mm256_add_pd(_avx22,a._avx22);
			_avx23=  _mm256_add_pd(_avx23,a._avx23);
			_avx24=  _mm256_add_pd(_avx24,a._avx24);
			_avx25=  _mm256_add_pd(_avx25,a._avx25);
			_avx26=  _mm256_add_pd(_avx26,a._avx26);
			_avx27=  _mm256_add_pd(_avx27,a._avx27);
			return *this;
		}

		VectorSIMD111& operator -= (VectorSIMD111 a){
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
			_avx18=  _mm256_sub_pd(_avx18,a._avx18);
			_avx19=  _mm256_sub_pd(_avx19,a._avx19);
			_avx20=  _mm256_sub_pd(_avx20,a._avx20);
			_avx21=  _mm256_sub_pd(_avx21,a._avx21);
			_avx22=  _mm256_sub_pd(_avx22,a._avx22);
			_avx23=  _mm256_sub_pd(_avx23,a._avx23);
			_avx24=  _mm256_sub_pd(_avx24,a._avx24);
			_avx25=  _mm256_sub_pd(_avx25,a._avx25);
			_avx26=  _mm256_sub_pd(_avx26,a._avx26);
			_avx27=  _mm256_sub_pd(_avx27,a._avx27);
			return *this;
		}

		VectorSIMD111 operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD111 result;
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
			result._avx18=  _mm256_mul_pd(this->_avx18,m1);
			result._avx19=  _mm256_mul_pd(this->_avx19,m1);
			result._avx20=  _mm256_mul_pd(this->_avx20,m1);
			result._avx21=  _mm256_mul_pd(this->_avx21,m1);
			result._avx22=  _mm256_mul_pd(this->_avx22,m1);
			result._avx23=  _mm256_mul_pd(this->_avx23,m1);
			result._avx24=  _mm256_mul_pd(this->_avx24,m1);
			result._avx25=  _mm256_mul_pd(this->_avx25,m1);
			result._avx26=  _mm256_mul_pd(this->_avx26,m1);
			result._avx27=  _mm256_mul_pd(this->_avx27,m1);
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
			_avx18 =  _mm256_loadu_pd(&a[72]);
			_avx19 =  _mm256_loadu_pd(&a[76]);
			_avx20 =  _mm256_loadu_pd(&a[80]);
			_avx21 =  _mm256_loadu_pd(&a[84]);
			_avx22 =  _mm256_loadu_pd(&a[88]);
			_avx23 =  _mm256_loadu_pd(&a[92]);
			_avx24 =  _mm256_loadu_pd(&a[96]);
			_avx25 =  _mm256_loadu_pd(&a[100]);
			_avx26 =  _mm256_loadu_pd(&a[104]);
			_avx27 =  _mm256_loadu_pd(&a[108]);
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
			_avx18 =  _mm256_load_pd(&a[72]);
			_avx19 =  _mm256_load_pd(&a[76]);
			_avx20 =  _mm256_load_pd(&a[80]);
			_avx21 =  _mm256_load_pd(&a[84]);
			_avx22 =  _mm256_load_pd(&a[88]);
			_avx23 =  _mm256_load_pd(&a[92]);
			_avx24 =  _mm256_load_pd(&a[96]);
			_avx25 =  _mm256_load_pd(&a[100]);
			_avx26 =  _mm256_load_pd(&a[104]);
			_avx27 =  _mm256_load_pd(&a[108]);
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
			_mm256_storeu_pd(&a[72],_avx18);
			_mm256_storeu_pd(&a[76],_avx19);
			_mm256_storeu_pd(&a[80],_avx20);
			_mm256_storeu_pd(&a[84],_avx21);
			_mm256_storeu_pd(&a[88],_avx22);
			_mm256_storeu_pd(&a[92],_avx23);
			_mm256_storeu_pd(&a[96],_avx24);
			_mm256_storeu_pd(&a[100],_avx25);
			_mm256_storeu_pd(&a[104],_avx26);
			_mm256_storeu_pd(&a[108],_avx27);
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
			_mm256_storeu_pd(&a[72],_avx18);
			_mm256_storeu_pd(&a[76],_avx19);
			_mm256_storeu_pd(&a[80],_avx20);
			_mm256_storeu_pd(&a[84],_avx21);
			_mm256_storeu_pd(&a[88],_avx22);
			_mm256_storeu_pd(&a[92],_avx23);
			_mm256_storeu_pd(&a[96],_avx24);
			_mm256_storeu_pd(&a[100],_avx25);
			_mm256_storeu_pd(&a[104],_avx26);
			_mm256_storeu_pd(&a[108],_avx27);
		}

	};


	inline VectorSIMD111 operator*(double a, VectorSIMD111 b){
		VectorSIMD111 c;
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
		c._avx18=  _mm256_mul_pd(_a, b._avx18);
		c._avx19=  _mm256_mul_pd(_a, b._avx19);
		c._avx20=  _mm256_mul_pd(_a, b._avx20);
		c._avx21=  _mm256_mul_pd(_a, b._avx21);
		c._avx22=  _mm256_mul_pd(_a, b._avx22);
		c._avx23=  _mm256_mul_pd(_a, b._avx23);
		c._avx24=  _mm256_mul_pd(_a, b._avx24);
		c._avx25=  _mm256_mul_pd(_a, b._avx25);
		c._avx26=  _mm256_mul_pd(_a, b._avx26);
		c._avx27=  _mm256_mul_pd(_a, b._avx27);
		return c;
	}


	inline VectorSIMD111 operator*(VectorSIMD111 a ,double b){
		VectorSIMD111 c;
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
		c._avx18=  _mm256_mul_pd(a._avx18, _b);
		c._avx19=  _mm256_mul_pd(a._avx19, _b);
		c._avx20=  _mm256_mul_pd(a._avx20, _b);
		c._avx21=  _mm256_mul_pd(a._avx21, _b);
		c._avx22=  _mm256_mul_pd(a._avx22, _b);
		c._avx23=  _mm256_mul_pd(a._avx23, _b);
		c._avx24=  _mm256_mul_pd(a._avx24, _b);
		c._avx25=  _mm256_mul_pd(a._avx25, _b);
		c._avx26=  _mm256_mul_pd(a._avx26, _b);
		c._avx27=  _mm256_mul_pd(a._avx27, _b);
		return c;
	}


	inline VectorSIMD111 operator*(int a, VectorSIMD111 b){
		if(a==1){return b;}
		VectorSIMD111 c;
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
		c._avx18=  _mm256_mul_pd(_a, b._avx18);
		c._avx19=  _mm256_mul_pd(_a, b._avx19);
		c._avx20=  _mm256_mul_pd(_a, b._avx20);
		c._avx21=  _mm256_mul_pd(_a, b._avx21);
		c._avx22=  _mm256_mul_pd(_a, b._avx22);
		c._avx23=  _mm256_mul_pd(_a, b._avx23);
		c._avx24=  _mm256_mul_pd(_a, b._avx24);
		c._avx25=  _mm256_mul_pd(_a, b._avx25);
		c._avx26=  _mm256_mul_pd(_a, b._avx26);
		c._avx27=  _mm256_mul_pd(_a, b._avx27);
		return c;
	}


	inline VectorSIMD111 operator*(VectorSIMD111 a, int b){
		if(b==1){return a;}
		VectorSIMD111 c;
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
		c._avx18=  _mm256_mul_pd(_b, a._avx18);
		c._avx19=  _mm256_mul_pd(_b, a._avx19);
		c._avx20=  _mm256_mul_pd(_b, a._avx20);
		c._avx21=  _mm256_mul_pd(_b, a._avx21);
		c._avx22=  _mm256_mul_pd(_b, a._avx22);
		c._avx23=  _mm256_mul_pd(_b, a._avx23);
		c._avx24=  _mm256_mul_pd(_b, a._avx24);
		c._avx25=  _mm256_mul_pd(_b, a._avx25);
		c._avx26=  _mm256_mul_pd(_b, a._avx26);
		c._avx27=  _mm256_mul_pd(_b, a._avx27);
		return c;
	}


	inline VectorSIMD111 operator*(VectorSIMD111 a, VectorSIMD111 b){
		VectorSIMD111 c;
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
		c._avx18=  _mm256_mul_pd(a._avx18, b._avx18);
		c._avx19=  _mm256_mul_pd(a._avx19, b._avx19);
		c._avx20=  _mm256_mul_pd(a._avx20, b._avx20);
		c._avx21=  _mm256_mul_pd(a._avx21, b._avx21);
		c._avx22=  _mm256_mul_pd(a._avx22, b._avx22);
		c._avx23=  _mm256_mul_pd(a._avx23, b._avx23);
		c._avx24=  _mm256_mul_pd(a._avx24, b._avx24);
		c._avx25=  _mm256_mul_pd(a._avx25, b._avx25);
		c._avx26=  _mm256_mul_pd(a._avx26, b._avx26);
		c._avx27=  _mm256_mul_pd(a._avx27, b._avx27);
		return c;
	}


	inline VectorSIMD111 operator+(VectorSIMD111 a, VectorSIMD111 b){
		VectorSIMD111 c;
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
		c._avx18=  _mm256_add_pd(a._avx18, b._avx18);
		c._avx19=  _mm256_add_pd(a._avx19, b._avx19);
		c._avx20=  _mm256_add_pd(a._avx20, b._avx20);
		c._avx21=  _mm256_add_pd(a._avx21, b._avx21);
		c._avx22=  _mm256_add_pd(a._avx22, b._avx22);
		c._avx23=  _mm256_add_pd(a._avx23, b._avx23);
		c._avx24=  _mm256_add_pd(a._avx24, b._avx24);
		c._avx25=  _mm256_add_pd(a._avx25, b._avx25);
		c._avx26=  _mm256_add_pd(a._avx26, b._avx26);
		c._avx27=  _mm256_add_pd(a._avx27, b._avx27);
		return c;
	}


	inline VectorSIMD111 operator-(VectorSIMD111 a, VectorSIMD111 b){
		VectorSIMD111 c;
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
		c._avx18=  _mm256_sub_pd(a._avx18, b._avx18);
		c._avx19=  _mm256_sub_pd(a._avx19, b._avx19);
		c._avx20=  _mm256_sub_pd(a._avx20, b._avx20);
		c._avx21=  _mm256_sub_pd(a._avx21, b._avx21);
		c._avx22=  _mm256_sub_pd(a._avx22, b._avx22);
		c._avx23=  _mm256_sub_pd(a._avx23, b._avx23);
		c._avx24=  _mm256_sub_pd(a._avx24, b._avx24);
		c._avx25=  _mm256_sub_pd(a._avx25, b._avx25);
		c._avx26=  _mm256_sub_pd(a._avx26, b._avx26);
		c._avx27=  _mm256_sub_pd(a._avx27, b._avx27);
		return c;
	}


	inline VectorSIMD111 operator/(VectorSIMD111 a, VectorSIMD111 b){
		VectorSIMD111 c;
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
		c._avx18=  _mm256_div_pd(a._avx18, b._avx18);
		c._avx19=  _mm256_div_pd(a._avx19, b._avx19);
		c._avx20=  _mm256_div_pd(a._avx20, b._avx20);
		c._avx21=  _mm256_div_pd(a._avx21, b._avx21);
		c._avx22=  _mm256_div_pd(a._avx22, b._avx22);
		c._avx23=  _mm256_div_pd(a._avx23, b._avx23);
		c._avx24=  _mm256_div_pd(a._avx24, b._avx24);
		c._avx25=  _mm256_div_pd(a._avx25, b._avx25);
		c._avx26=  _mm256_div_pd(a._avx26, b._avx26);
		c._avx27=  _mm256_div_pd(a._avx27, b._avx27);
		return c;
	}


	inline VectorSIMD111 exp(VectorSIMD111 a){
		double a_d[111]; a.convert(a_d);
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
		a_d[69] = std::exp(a_d[69]);
		a_d[70] = std::exp(a_d[70]);
		a_d[71] = std::exp(a_d[71]);
		a_d[72] = std::exp(a_d[72]);
		a_d[73] = std::exp(a_d[73]);
		a_d[74] = std::exp(a_d[74]);
		a_d[75] = std::exp(a_d[75]);
		a_d[76] = std::exp(a_d[76]);
		a_d[77] = std::exp(a_d[77]);
		a_d[78] = std::exp(a_d[78]);
		a_d[79] = std::exp(a_d[79]);
		a_d[80] = std::exp(a_d[80]);
		a_d[81] = std::exp(a_d[81]);
		a_d[82] = std::exp(a_d[82]);
		a_d[83] = std::exp(a_d[83]);
		a_d[84] = std::exp(a_d[84]);
		a_d[85] = std::exp(a_d[85]);
		a_d[86] = std::exp(a_d[86]);
		a_d[87] = std::exp(a_d[87]);
		a_d[88] = std::exp(a_d[88]);
		a_d[89] = std::exp(a_d[89]);
		a_d[90] = std::exp(a_d[90]);
		a_d[91] = std::exp(a_d[91]);
		a_d[92] = std::exp(a_d[92]);
		a_d[93] = std::exp(a_d[93]);
		a_d[94] = std::exp(a_d[94]);
		a_d[95] = std::exp(a_d[95]);
		a_d[96] = std::exp(a_d[96]);
		a_d[97] = std::exp(a_d[97]);
		a_d[98] = std::exp(a_d[98]);
		a_d[99] = std::exp(a_d[99]);
		a_d[100] = std::exp(a_d[100]);
		a_d[101] = std::exp(a_d[101]);
		a_d[102] = std::exp(a_d[102]);
		a_d[103] = std::exp(a_d[103]);
		a_d[104] = std::exp(a_d[104]);
		a_d[105] = std::exp(a_d[105]);
		a_d[106] = std::exp(a_d[106]);
		a_d[107] = std::exp(a_d[107]);
		a_d[108] = std::exp(a_d[108]);
		a_d[109] = std::exp(a_d[109]);
		a_d[110] = std::exp(a_d[110]);
		VectorSIMD111 r(a_d);
		return r;
	}

	inline VectorSIMD111 sqrt(VectorSIMD111 a){
		double a_d[111]; a.convert(a_d);
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
		a_d[69] = std::sqrt(a_d[69]);
		a_d[70] = std::sqrt(a_d[70]);
		a_d[71] = std::sqrt(a_d[71]);
		a_d[72] = std::sqrt(a_d[72]);
		a_d[73] = std::sqrt(a_d[73]);
		a_d[74] = std::sqrt(a_d[74]);
		a_d[75] = std::sqrt(a_d[75]);
		a_d[76] = std::sqrt(a_d[76]);
		a_d[77] = std::sqrt(a_d[77]);
		a_d[78] = std::sqrt(a_d[78]);
		a_d[79] = std::sqrt(a_d[79]);
		a_d[80] = std::sqrt(a_d[80]);
		a_d[81] = std::sqrt(a_d[81]);
		a_d[82] = std::sqrt(a_d[82]);
		a_d[83] = std::sqrt(a_d[83]);
		a_d[84] = std::sqrt(a_d[84]);
		a_d[85] = std::sqrt(a_d[85]);
		a_d[86] = std::sqrt(a_d[86]);
		a_d[87] = std::sqrt(a_d[87]);
		a_d[88] = std::sqrt(a_d[88]);
		a_d[89] = std::sqrt(a_d[89]);
		a_d[90] = std::sqrt(a_d[90]);
		a_d[91] = std::sqrt(a_d[91]);
		a_d[92] = std::sqrt(a_d[92]);
		a_d[93] = std::sqrt(a_d[93]);
		a_d[94] = std::sqrt(a_d[94]);
		a_d[95] = std::sqrt(a_d[95]);
		a_d[96] = std::sqrt(a_d[96]);
		a_d[97] = std::sqrt(a_d[97]);
		a_d[98] = std::sqrt(a_d[98]);
		a_d[99] = std::sqrt(a_d[99]);
		a_d[100] = std::sqrt(a_d[100]);
		a_d[101] = std::sqrt(a_d[101]);
		a_d[102] = std::sqrt(a_d[102]);
		a_d[103] = std::sqrt(a_d[103]);
		a_d[104] = std::sqrt(a_d[104]);
		a_d[105] = std::sqrt(a_d[105]);
		a_d[106] = std::sqrt(a_d[106]);
		a_d[107] = std::sqrt(a_d[107]);
		a_d[108] = std::sqrt(a_d[108]);
		a_d[109] = std::sqrt(a_d[109]);
		a_d[110] = std::sqrt(a_d[110]);
		VectorSIMD111 r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD111 a){ 
		double ad[111];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << ","  << ad[10] << ","  << ad[11] << ","  << ad[12] << ","  << ad[13] << ","  << ad[14] << ","  << ad[15] << ","  << ad[16] << ","  << ad[17] << ","  << ad[18] << ","  << ad[19] << ","  << ad[20] << ","  << ad[21] << ","  << ad[22] << ","  << ad[23] << ","  << ad[24] << ","  << ad[25] << ","  << ad[26] << ","  << ad[27] << ","  << ad[28] << ","  << ad[29] << ","  << ad[30] << ","  << ad[31] << ","  << ad[32] << ","  << ad[33] << ","  << ad[34] << ","  << ad[35] << ","  << ad[36] << ","  << ad[37] << ","  << ad[38] << ","  << ad[39] << ","  << ad[40] << ","  << ad[41] << ","  << ad[42] << ","  << ad[43] << ","  << ad[44] << ","  << ad[45] << ","  << ad[46] << ","  << ad[47] << ","  << ad[48] << ","  << ad[49] << ","  << ad[50] << ","  << ad[51] << ","  << ad[52] << ","  << ad[53] << ","  << ad[54] << ","  << ad[55] << ","  << ad[56] << ","  << ad[57] << ","  << ad[58] << ","  << ad[59] << ","  << ad[60] << ","  << ad[61] << ","  << ad[62] << ","  << ad[63] << ","  << ad[64] << ","  << ad[65] << ","  << ad[66] << ","  << ad[67] << ","  << ad[68] << ","  << ad[69] << ","  << ad[70] << ","  << ad[71] << ","  << ad[72] << ","  << ad[73] << ","  << ad[74] << ","  << ad[75] << ","  << ad[76] << ","  << ad[77] << ","  << ad[78] << ","  << ad[79] << ","  << ad[80] << ","  << ad[81] << ","  << ad[82] << ","  << ad[83] << ","  << ad[84] << ","  << ad[85] << ","  << ad[86] << ","  << ad[87] << ","  << ad[88] << ","  << ad[89] << ","  << ad[90] << ","  << ad[91] << ","  << ad[92] << ","  << ad[93] << ","  << ad[94] << ","  << ad[95] << ","  << ad[96] << ","  << ad[97] << ","  << ad[98] << ","  << ad[99] << ","  << ad[100] << ","  << ad[101] << ","  << ad[102] << ","  << ad[103] << ","  << ad[104] << ","  << ad[105] << ","  << ad[106] << ","  << ad[107] << ","  << ad[108] << ","  << ad[109] << ","  << ad[110] << "}";
		return os;
		}




//Name: Jonathan Dullea 
//jdullea@umass.edu
//This header was generatef by generate_vector.cpp

#include <iostream>
#include <x86intrin.h>
#include "immintrin.h"
#include <cstring>
#include <cmath>
using namespace std;

template <typename Real, unsigned int n>
class VectorSIMD{
	VectorSIMD(){};
	VectorSIMD(Real a) {}};

template <typename Real>
class VectorSIMD<Real,2>{
public:
		__m128d _sse0;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_sse0 = _mm_set_pd(a,a);
		}

		VectorSIMD(Real (&a)[2]){
			_sse0 = _mm_set_pd(a[1],a[0]);		}

		VectorSIMD(Real _0,Real _1){
			_sse0 =_mm_set_pd(_1,_0);
		}

		VectorSIMD(__m128d c){
			_sse0 = c;
		}

		VectorSIMD& operator=(Real a){
			_sse0 = _mm_set_pd(a,a);
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,2> a){
			_sse0 = _mm_add_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,2> a){
			_sse0 = _mm_sub_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			const static __m128d m1s = _mm_set_pd(-1.0, -1.0);
			VectorSIMD<double,2> result;
			result._sse0 = _mm_mul_pd(this->_sse0, m1s);
			return result;
		}

		void load(Real const* a){
			_sse0 = _mm_loadu_pd(&a[0]);
		}

		void load_aligned(Real const* a){
			_sse0 = _mm_load_pd(&a[0]);
		}

		void convert(Real *a) const {
		_mm_storeu_pd(&a[0], _sse0);
		}

		void convert_aligned(Real *a) const {
		_mm_store_pd(&a[0], _sse0);
		}

	};


	inline VectorSIMD<double,2> operator*(double a, VectorSIMD<double,2> b){
		VectorSIMD<double,2> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		__m128d _a_s = _mm_set_pd(a,a);		c._sse0 = _mm_mul_pd(_a_s, b._sse0);
		return c;
	}


	inline VectorSIMD<double,2> operator*(VectorSIMD<double,2> a ,double b){
		VectorSIMD<double,2> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		__m128d _b_s =  _mm_set_pd(b,b);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		return c;
	}


	inline VectorSIMD<double,2> operator*(int a, VectorSIMD<double,2> b){
		if(a==1){return b;}
		VectorSIMD<double,2> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		__m128d _a_s = _mm_set_pd(q,q);
		c._sse0 = _mm_mul_pd(_a_s,b._sse0);
		return c;
	}


	inline VectorSIMD<double,2> operator*(VectorSIMD<double,2> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,2> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		__m128d _b_s = _mm_set_pd(q,q);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		return c;
	}


	inline VectorSIMD<double,2> operator*(VectorSIMD<double,2> a, VectorSIMD<double,2> b){
		VectorSIMD<double,2> c;
		c._sse0 = _mm_mul_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,2> operator+(VectorSIMD<double,2> a, VectorSIMD<double,2> b){
		VectorSIMD<double,2> c;
		c._sse0 = _mm_add_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,2> operator-(VectorSIMD<double,2> a, VectorSIMD<double,2> b){
		VectorSIMD<double,2> c;
		c._sse0 = _mm_sub_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,2> operator/(VectorSIMD<double,2> a, VectorSIMD<double,2> b){
		VectorSIMD<double,2> c;
		c._sse0 = _mm_div_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,2> exp(VectorSIMD<double,2> a){
		double a_d[2]; a.convert(a_d);
		a_d[0] = std::exp(a_d[0]);
		a_d[1] = std::exp(a_d[1]);
		VectorSIMD<double,2> r(a_d);
		return r;
	}

	inline VectorSIMD<double,2> sqrt(VectorSIMD<double,2> a){
		double a_d[2]; a.convert(a_d);
		a_d[0] = std::sqrt(a_d[0]);
		a_d[1] = std::sqrt(a_d[1]);
		VectorSIMD<double,2> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,2> a){ 
		double ad[2];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << "}";
		return os;
		}


template <typename Real>
class VectorSIMD<Real,3>{
public:
		__m256d _avx0;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(0,a,a,a);
		}

		VectorSIMD(Real (&a)[3]){
			_avx0=_mm256_set_pd(0,a[2],a[1],a[0]);
		}

		VectorSIMD(Real _0,Real _1,Real _2){
			_avx0=_mm256_set_pd( 0,_2,_1,_0);
		}

		VectorSIMD(__m256d _0){
			_avx0= _0;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,3> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,3> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD<double,3> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
		}

	};


	inline VectorSIMD<double,3> operator*(double a, VectorSIMD<double,3> b){
		VectorSIMD<double,3> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		return c;
	}


	inline VectorSIMD<double,3> operator*(VectorSIMD<double,3> a ,double b){
		VectorSIMD<double,3> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		return c;
	}


	inline VectorSIMD<double,3> operator*(int a, VectorSIMD<double,3> b){
		if(a==1){return b;}
		VectorSIMD<double,3> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		return c;
	}


	inline VectorSIMD<double,3> operator*(VectorSIMD<double,3> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,3> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		return c;
	}


	inline VectorSIMD<double,3> operator*(VectorSIMD<double,3> a, VectorSIMD<double,3> b){
		VectorSIMD<double,3> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD<double,3> operator+(VectorSIMD<double,3> a, VectorSIMD<double,3> b){
		VectorSIMD<double,3> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD<double,3> operator-(VectorSIMD<double,3> a, VectorSIMD<double,3> b){
		VectorSIMD<double,3> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD<double,3> operator/(VectorSIMD<double,3> a, VectorSIMD<double,3> b){
		VectorSIMD<double,3> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD<double,3> exp(VectorSIMD<double,3> a){
		double a_d[3]; a.convert(a_d);
		a_d[0] = std::exp(a_d[0]);
		a_d[1] = std::exp(a_d[1]);
		a_d[2] = std::exp(a_d[2]);
		VectorSIMD<double,3> r(a_d);
		return r;
	}

	inline VectorSIMD<double,3> sqrt(VectorSIMD<double,3> a){
		double a_d[3]; a.convert(a_d);
		a_d[0] = std::sqrt(a_d[0]);
		a_d[1] = std::sqrt(a_d[1]);
		a_d[2] = std::sqrt(a_d[2]);
		VectorSIMD<double,3> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,3> a){ 
		double ad[3];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << "}";
		return os;
		}



template <typename Real>
class VectorSIMD<Real,4>{
public:
		__m256d _avx0;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
		}

		VectorSIMD(Real (&a)[4]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
		}

		VectorSIMD(__m256d _0){
			_avx0= _0;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,4> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,4> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD<double,4> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
		}

	};


	inline VectorSIMD<double,4> operator*(double a, VectorSIMD<double,4> b){
		VectorSIMD<double,4> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		return c;
	}


	inline VectorSIMD<double,4> operator*(VectorSIMD<double,4> a ,double b){
		VectorSIMD<double,4> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		return c;
	}


	inline VectorSIMD<double,4> operator*(int a, VectorSIMD<double,4> b){
		if(a==1){return b;}
		VectorSIMD<double,4> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		return c;
	}


	inline VectorSIMD<double,4> operator*(VectorSIMD<double,4> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,4> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		return c;
	}


	inline VectorSIMD<double,4> operator*(VectorSIMD<double,4> a, VectorSIMD<double,4> b){
		VectorSIMD<double,4> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD<double,4> operator+(VectorSIMD<double,4> a, VectorSIMD<double,4> b){
		VectorSIMD<double,4> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD<double,4> operator-(VectorSIMD<double,4> a, VectorSIMD<double,4> b){
		VectorSIMD<double,4> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD<double,4> operator/(VectorSIMD<double,4> a, VectorSIMD<double,4> b){
		VectorSIMD<double,4> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		return c;
	}


	inline VectorSIMD<double,4> exp(VectorSIMD<double,4> a){
		double a_d[4]; a.convert(a_d);
		a_d[0] = std::exp(a_d[0]);
		a_d[1] = std::exp(a_d[1]);
		a_d[2] = std::exp(a_d[2]);
		a_d[3] = std::exp(a_d[3]);
		VectorSIMD<double,4> r(a_d);
		return r;
	}

	inline VectorSIMD<double,4> sqrt(VectorSIMD<double,4> a){
		double a_d[4]; a.convert(a_d);
		a_d[0] = std::sqrt(a_d[0]);
		a_d[1] = std::sqrt(a_d[1]);
		a_d[2] = std::sqrt(a_d[2]);
		a_d[3] = std::sqrt(a_d[3]);
		VectorSIMD<double,4> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,4> a){ 
		double ad[4];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << "}";
		return os;
		}template <typename Real>
class VectorSIMD<Real,5>{
public:
		__m256d _avx0;
		Real _d;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_d = a;
		}

		VectorSIMD(Real (&a)[5]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_d = a[4];		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_d = _4;
		}

		VectorSIMD(__m256d _0,double c){
			_avx0= _0;
			_d = c;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_d = a;
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,5> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_d = _d, a._d;
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,5> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_d = _d - a._d;
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD<double,5> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._d = this->_d*(-1);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_d = a[4];
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_d = a[4];
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
		a[4] =  _d;
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
		a[4] = _d;
		}

	};


	inline VectorSIMD<double,5> operator*(double a, VectorSIMD<double,5> b){
		VectorSIMD<double,5> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._d = a * b._d;
		return c;
	}


	inline VectorSIMD<double,5> operator*(VectorSIMD<double,5> a ,double b){
		VectorSIMD<double,5> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
c._d = a._d * b;
		return c;
	}


	inline VectorSIMD<double,5> operator*(int a, VectorSIMD<double,5> b){
		if(a==1){return b;}
		VectorSIMD<double,5> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._d = q*b._d;
		return c;
	}


	inline VectorSIMD<double,5> operator*(VectorSIMD<double,5> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,5> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
c._d = a._d * q;
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		return c;
	}


	inline VectorSIMD<double,5> operator*(VectorSIMD<double,5> a, VectorSIMD<double,5> b){
		VectorSIMD<double,5> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._d = a._d*b._d;
		return c;
	}


	inline VectorSIMD<double,5> operator+(VectorSIMD<double,5> a, VectorSIMD<double,5> b){
		VectorSIMD<double,5> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._d = (a._d + b._d);
		return c;
	}


	inline VectorSIMD<double,5> operator-(VectorSIMD<double,5> a, VectorSIMD<double,5> b){
		VectorSIMD<double,5> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._d = (a._d-b._d);
		return c;
	}


	inline VectorSIMD<double,5> operator/(VectorSIMD<double,5> a, VectorSIMD<double,5> b){
		VectorSIMD<double,5> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._d = (a._d/b._d);
		return c;
	}


	inline VectorSIMD<double,5> exp(VectorSIMD<double,5> a){
		double a_d[5]; a.convert(a_d);
		a_d[0] = std::exp(a_d[0]);
		a_d[1] = std::exp(a_d[1]);
		a_d[2] = std::exp(a_d[2]);
		a_d[3] = std::exp(a_d[3]);
		a_d[4] = std::exp(a_d[4]);
		VectorSIMD<double,5> r(a_d);
		return r;
	}

	inline VectorSIMD<double,5> sqrt(VectorSIMD<double,5> a){
		double a_d[5]; a.convert(a_d);
		a_d[0] = std::sqrt(a_d[0]);
		a_d[1] = std::sqrt(a_d[1]);
		a_d[2] = std::sqrt(a_d[2]);
		a_d[3] = std::sqrt(a_d[3]);
		a_d[4] = std::sqrt(a_d[4]);
		VectorSIMD<double,5> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,5> a){ 
		double ad[5];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << "}";
		return os;
		}


template <typename Real>
class VectorSIMD<Real,6>{
public:
		__m256d _avx0;
		__m128d _sse0;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_sse0 = _mm_set_pd(a,a);
		}

		VectorSIMD(Real (&a)[6]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_sse0 = _mm_set_pd(a[5],a[4]);		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4,Real _5){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_sse0 =_mm_set_pd(_5,_4);
		}

		VectorSIMD(__m256d _0,__m128d c){
			_avx0= _0;
			_sse0 = c;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_sse0 = _mm_set_pd(a,a);
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,6> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_sse0 = _mm_add_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,6> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_sse0 = _mm_sub_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			const static __m128d m1s = _mm_set_pd(-1.0, -1.0);
			VectorSIMD<double,6> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._sse0 = _mm_mul_pd(this->_sse0, m1s);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_sse0 = _mm_loadu_pd(&a[4]);
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_sse0 = _mm_load_pd(&a[4]);
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
		_mm_storeu_pd(&a[4], _sse0);
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
		_mm_store_pd(&a[4], _sse0);
		}

	};


	inline VectorSIMD<double,6> operator*(double a, VectorSIMD<double,6> b){
		VectorSIMD<double,6> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		__m128d _a_s = _mm_set_pd(a,a);		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._sse0 = _mm_mul_pd(_a_s, b._sse0);
		return c;
	}


	inline VectorSIMD<double,6> operator*(VectorSIMD<double,6> a ,double b){
		VectorSIMD<double,6> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		__m128d _b_s =  _mm_set_pd(b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		return c;
	}


	inline VectorSIMD<double,6> operator*(int a, VectorSIMD<double,6> b){
		if(a==1){return b;}
		VectorSIMD<double,6> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		__m128d _a_s = _mm_set_pd(q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._sse0 = _mm_mul_pd(_a_s,b._sse0);
		return c;
	}


	inline VectorSIMD<double,6> operator*(VectorSIMD<double,6> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,6> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		__m128d _b_s = _mm_set_pd(q,q);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		return c;
	}


	inline VectorSIMD<double,6> operator*(VectorSIMD<double,6> a, VectorSIMD<double,6> b){
		VectorSIMD<double,6> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._sse0 = _mm_mul_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,6> operator+(VectorSIMD<double,6> a, VectorSIMD<double,6> b){
		VectorSIMD<double,6> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._sse0 = _mm_add_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,6> operator-(VectorSIMD<double,6> a, VectorSIMD<double,6> b){
		VectorSIMD<double,6> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._sse0 = _mm_sub_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,6> operator/(VectorSIMD<double,6> a, VectorSIMD<double,6> b){
		VectorSIMD<double,6> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._sse0 = _mm_div_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,6> exp(VectorSIMD<double,6> a){
		double a_d[6]; a.convert(a_d);
		a_d[0] = std::exp(a_d[0]);
		a_d[1] = std::exp(a_d[1]);
		a_d[2] = std::exp(a_d[2]);
		a_d[3] = std::exp(a_d[3]);
		a_d[4] = std::exp(a_d[4]);
		a_d[5] = std::exp(a_d[5]);
		VectorSIMD<double,6> r(a_d);
		return r;
	}

	inline VectorSIMD<double,6> sqrt(VectorSIMD<double,6> a){
		double a_d[6]; a.convert(a_d);
		a_d[0] = std::sqrt(a_d[0]);
		a_d[1] = std::sqrt(a_d[1]);
		a_d[2] = std::sqrt(a_d[2]);
		a_d[3] = std::sqrt(a_d[3]);
		a_d[4] = std::sqrt(a_d[4]);
		a_d[5] = std::sqrt(a_d[5]);
		VectorSIMD<double,6> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,6> a){ 
		double ad[6];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << "}";
		return os;
		}


template <typename Real>
class VectorSIMD<Real,7>{
public:
		__m256d _avx0;
		__m256d _avx1;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(0,a,a,a);
		}

		VectorSIMD(Real (&a)[7]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(0,a[6],a[5],a[4]);
		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4,Real _5,Real _6){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd( 0,_6,_5,_4);
		}

		VectorSIMD(__m256d _0,__m256d _1){
			_avx0= _0;
			_avx1= _1;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,7> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,7> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD<double,7> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
		}

	};


	inline VectorSIMD<double,7> operator*(double a, VectorSIMD<double,7> b){
		VectorSIMD<double,7> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		return c;
	}


	inline VectorSIMD<double,7> operator*(VectorSIMD<double,7> a ,double b){
		VectorSIMD<double,7> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		return c;
	}


	inline VectorSIMD<double,7> operator*(int a, VectorSIMD<double,7> b){
		if(a==1){return b;}
		VectorSIMD<double,7> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		return c;
	}


	inline VectorSIMD<double,7> operator*(VectorSIMD<double,7> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,7> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		return c;
	}


	inline VectorSIMD<double,7> operator*(VectorSIMD<double,7> a, VectorSIMD<double,7> b){
		VectorSIMD<double,7> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		return c;
	}


	inline VectorSIMD<double,7> operator+(VectorSIMD<double,7> a, VectorSIMD<double,7> b){
		VectorSIMD<double,7> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		return c;
	}


	inline VectorSIMD<double,7> operator-(VectorSIMD<double,7> a, VectorSIMD<double,7> b){
		VectorSIMD<double,7> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		return c;
	}


	inline VectorSIMD<double,7> operator/(VectorSIMD<double,7> a, VectorSIMD<double,7> b){
		VectorSIMD<double,7> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		return c;
	}


	inline VectorSIMD<double,7> exp(VectorSIMD<double,7> a){
		double a_d[7]; a.convert(a_d);
		a_d[0] = std::exp(a_d[0]);
		a_d[1] = std::exp(a_d[1]);
		a_d[2] = std::exp(a_d[2]);
		a_d[3] = std::exp(a_d[3]);
		a_d[4] = std::exp(a_d[4]);
		a_d[5] = std::exp(a_d[5]);
		a_d[6] = std::exp(a_d[6]);
		VectorSIMD<double,7> r(a_d);
		return r;
	}

	inline VectorSIMD<double,7> sqrt(VectorSIMD<double,7> a){
		double a_d[7]; a.convert(a_d);
		a_d[0] = std::sqrt(a_d[0]);
		a_d[1] = std::sqrt(a_d[1]);
		a_d[2] = std::sqrt(a_d[2]);
		a_d[3] = std::sqrt(a_d[3]);
		a_d[4] = std::sqrt(a_d[4]);
		a_d[5] = std::sqrt(a_d[5]);
		a_d[6] = std::sqrt(a_d[6]);
		VectorSIMD<double,7> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,7> a){ 
		double ad[7];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << "}";
		return os;
		}



template <typename Real>
class VectorSIMD<Real,8>{
public:
		__m256d _avx0;
		__m256d _avx1;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
		}

		VectorSIMD(Real (&a)[8]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4,Real _5,Real _6,Real _7){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
		}

		VectorSIMD(__m256d _0,__m256d _1){
			_avx0= _0;
			_avx1= _1;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,8> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,8> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD<double,8> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
		}

	};


	inline VectorSIMD<double,8> operator*(double a, VectorSIMD<double,8> b){
		VectorSIMD<double,8> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		return c;
	}


	inline VectorSIMD<double,8> operator*(VectorSIMD<double,8> a ,double b){
		VectorSIMD<double,8> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		return c;
	}


	inline VectorSIMD<double,8> operator*(int a, VectorSIMD<double,8> b){
		if(a==1){return b;}
		VectorSIMD<double,8> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		return c;
	}


	inline VectorSIMD<double,8> operator*(VectorSIMD<double,8> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,8> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		return c;
	}


	inline VectorSIMD<double,8> operator*(VectorSIMD<double,8> a, VectorSIMD<double,8> b){
		VectorSIMD<double,8> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		return c;
	}


	inline VectorSIMD<double,8> operator+(VectorSIMD<double,8> a, VectorSIMD<double,8> b){
		VectorSIMD<double,8> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		return c;
	}


	inline VectorSIMD<double,8> operator-(VectorSIMD<double,8> a, VectorSIMD<double,8> b){
		VectorSIMD<double,8> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		return c;
	}


	inline VectorSIMD<double,8> operator/(VectorSIMD<double,8> a, VectorSIMD<double,8> b){
		VectorSIMD<double,8> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		return c;
	}


	inline VectorSIMD<double,8> exp(VectorSIMD<double,8> a){
		double a_d[8]; a.convert(a_d);
		a_d[0] = std::exp(a_d[0]);
		a_d[1] = std::exp(a_d[1]);
		a_d[2] = std::exp(a_d[2]);
		a_d[3] = std::exp(a_d[3]);
		a_d[4] = std::exp(a_d[4]);
		a_d[5] = std::exp(a_d[5]);
		a_d[6] = std::exp(a_d[6]);
		a_d[7] = std::exp(a_d[7]);
		VectorSIMD<double,8> r(a_d);
		return r;
	}

	inline VectorSIMD<double,8> sqrt(VectorSIMD<double,8> a){
		double a_d[8]; a.convert(a_d);
		a_d[0] = std::sqrt(a_d[0]);
		a_d[1] = std::sqrt(a_d[1]);
		a_d[2] = std::sqrt(a_d[2]);
		a_d[3] = std::sqrt(a_d[3]);
		a_d[4] = std::sqrt(a_d[4]);
		a_d[5] = std::sqrt(a_d[5]);
		a_d[6] = std::sqrt(a_d[6]);
		a_d[7] = std::sqrt(a_d[7]);
		VectorSIMD<double,8> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,8> a){ 
		double ad[8];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << "}";
		return os;
		}template <typename Real>
class VectorSIMD<Real,9>{
public:
		__m256d _avx0;
		__m256d _avx1;
		Real _d;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_d = a;
		}

		VectorSIMD(Real (&a)[9]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_d = a[8];		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4,Real _5,Real _6,Real _7,Real _8){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_d = _8;
		}

		VectorSIMD(__m256d _0,__m256d _1,double c){
			_avx0= _0;
			_avx1= _1;
			_d = c;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_d = a;
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,9> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_d = _d, a._d;
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,9> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_d = _d - a._d;
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD<double,9> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._d = this->_d*(-1);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
			_d = a[8];
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
			_d = a[8];
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
		a[8] =  _d;
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
		a[8] = _d;
		}

	};


	inline VectorSIMD<double,9> operator*(double a, VectorSIMD<double,9> b){
		VectorSIMD<double,9> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._d = a * b._d;
		return c;
	}


	inline VectorSIMD<double,9> operator*(VectorSIMD<double,9> a ,double b){
		VectorSIMD<double,9> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
c._d = a._d * b;
		return c;
	}


	inline VectorSIMD<double,9> operator*(int a, VectorSIMD<double,9> b){
		if(a==1){return b;}
		VectorSIMD<double,9> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._d = q*b._d;
		return c;
	}


	inline VectorSIMD<double,9> operator*(VectorSIMD<double,9> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,9> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
c._d = a._d * q;
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		return c;
	}


	inline VectorSIMD<double,9> operator*(VectorSIMD<double,9> a, VectorSIMD<double,9> b){
		VectorSIMD<double,9> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._d = a._d*b._d;
		return c;
	}


	inline VectorSIMD<double,9> operator+(VectorSIMD<double,9> a, VectorSIMD<double,9> b){
		VectorSIMD<double,9> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._d = (a._d + b._d);
		return c;
	}


	inline VectorSIMD<double,9> operator-(VectorSIMD<double,9> a, VectorSIMD<double,9> b){
		VectorSIMD<double,9> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._d = (a._d-b._d);
		return c;
	}


	inline VectorSIMD<double,9> operator/(VectorSIMD<double,9> a, VectorSIMD<double,9> b){
		VectorSIMD<double,9> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._d = (a._d/b._d);
		return c;
	}


	inline VectorSIMD<double,9> exp(VectorSIMD<double,9> a){
		double a_d[9]; a.convert(a_d);
		a_d[0] = std::exp(a_d[0]);
		a_d[1] = std::exp(a_d[1]);
		a_d[2] = std::exp(a_d[2]);
		a_d[3] = std::exp(a_d[3]);
		a_d[4] = std::exp(a_d[4]);
		a_d[5] = std::exp(a_d[5]);
		a_d[6] = std::exp(a_d[6]);
		a_d[7] = std::exp(a_d[7]);
		a_d[8] = std::exp(a_d[8]);
		VectorSIMD<double,9> r(a_d);
		return r;
	}

	inline VectorSIMD<double,9> sqrt(VectorSIMD<double,9> a){
		double a_d[9]; a.convert(a_d);
		a_d[0] = std::sqrt(a_d[0]);
		a_d[1] = std::sqrt(a_d[1]);
		a_d[2] = std::sqrt(a_d[2]);
		a_d[3] = std::sqrt(a_d[3]);
		a_d[4] = std::sqrt(a_d[4]);
		a_d[5] = std::sqrt(a_d[5]);
		a_d[6] = std::sqrt(a_d[6]);
		a_d[7] = std::sqrt(a_d[7]);
		a_d[8] = std::sqrt(a_d[8]);
		VectorSIMD<double,9> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,9> a){ 
		double ad[9];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << "}";
		return os;
		}


template <typename Real>
class VectorSIMD<Real,10>{
public:
		__m256d _avx0;
		__m256d _avx1;
		__m128d _sse0;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_sse0 = _mm_set_pd(a,a);
		}

		VectorSIMD(Real (&a)[10]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_sse0 = _mm_set_pd(a[9],a[8]);		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4,Real _5,Real _6,Real _7,Real _8,Real _9){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_sse0 =_mm_set_pd(_9,_8);
		}

		VectorSIMD(__m256d _0,__m256d _1,__m128d c){
			_avx0= _0;
			_avx1= _1;
			_sse0 = c;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_sse0 = _mm_set_pd(a,a);
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,10> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_sse0 = _mm_add_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,10> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_sse0 = _mm_sub_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			const static __m128d m1s = _mm_set_pd(-1.0, -1.0);
			VectorSIMD<double,10> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._sse0 = _mm_mul_pd(this->_sse0, m1s);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
			_sse0 = _mm_loadu_pd(&a[8]);
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
			_sse0 = _mm_load_pd(&a[8]);
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
		_mm_storeu_pd(&a[8], _sse0);
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
		_mm_store_pd(&a[8], _sse0);
		}

	};


	inline VectorSIMD<double,10> operator*(double a, VectorSIMD<double,10> b){
		VectorSIMD<double,10> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		__m128d _a_s = _mm_set_pd(a,a);		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._sse0 = _mm_mul_pd(_a_s, b._sse0);
		return c;
	}


	inline VectorSIMD<double,10> operator*(VectorSIMD<double,10> a ,double b){
		VectorSIMD<double,10> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		__m128d _b_s =  _mm_set_pd(b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		return c;
	}


	inline VectorSIMD<double,10> operator*(int a, VectorSIMD<double,10> b){
		if(a==1){return b;}
		VectorSIMD<double,10> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		__m128d _a_s = _mm_set_pd(q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._sse0 = _mm_mul_pd(_a_s,b._sse0);
		return c;
	}


	inline VectorSIMD<double,10> operator*(VectorSIMD<double,10> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,10> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		__m128d _b_s = _mm_set_pd(q,q);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		return c;
	}


	inline VectorSIMD<double,10> operator*(VectorSIMD<double,10> a, VectorSIMD<double,10> b){
		VectorSIMD<double,10> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._sse0 = _mm_mul_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,10> operator+(VectorSIMD<double,10> a, VectorSIMD<double,10> b){
		VectorSIMD<double,10> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._sse0 = _mm_add_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,10> operator-(VectorSIMD<double,10> a, VectorSIMD<double,10> b){
		VectorSIMD<double,10> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._sse0 = _mm_sub_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,10> operator/(VectorSIMD<double,10> a, VectorSIMD<double,10> b){
		VectorSIMD<double,10> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._sse0 = _mm_div_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,10> exp(VectorSIMD<double,10> a){
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
		VectorSIMD<double,10> r(a_d);
		return r;
	}

	inline VectorSIMD<double,10> sqrt(VectorSIMD<double,10> a){
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
		VectorSIMD<double,10> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,10> a){ 
		double ad[10];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << "}";
		return os;
		}


template <typename Real>
class VectorSIMD<Real,11>{
public:
		__m256d _avx0;
		__m256d _avx1;
		__m256d _avx2;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(0,a,a,a);
		}

		VectorSIMD(Real (&a)[11]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_avx2=_mm256_set_pd(0,a[10],a[9],a[8]);
		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4,Real _5,Real _6,Real _7,Real _8,Real _9,Real _10){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_avx2=_mm256_set_pd( 0,_10,_9,_8);
		}

		VectorSIMD(__m256d _0,__m256d _1,__m256d _2){
			_avx0= _0;
			_avx1= _1;
			_avx2= _2;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,11> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_avx2=  _mm256_add_pd(_avx2,a._avx2);
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,11> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_avx2=  _mm256_sub_pd(_avx2,a._avx2);
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD<double,11> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._avx2=  _mm256_mul_pd(this->_avx2,m1);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
			_avx2 =  _mm256_loadu_pd(&a[8]);
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
			_avx2 =  _mm256_load_pd(&a[8]);
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
		}

	};


	inline VectorSIMD<double,11> operator*(double a, VectorSIMD<double,11> b){
		VectorSIMD<double,11> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		return c;
	}


	inline VectorSIMD<double,11> operator*(VectorSIMD<double,11> a ,double b){
		VectorSIMD<double,11> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		c._avx2=  _mm256_mul_pd(a._avx2, _b);
		return c;
	}


	inline VectorSIMD<double,11> operator*(int a, VectorSIMD<double,11> b){
		if(a==1){return b;}
		VectorSIMD<double,11> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		return c;
	}


	inline VectorSIMD<double,11> operator*(VectorSIMD<double,11> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,11> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		c._avx2=  _mm256_mul_pd(_b, a._avx2);
		return c;
	}


	inline VectorSIMD<double,11> operator*(VectorSIMD<double,11> a, VectorSIMD<double,11> b){
		VectorSIMD<double,11> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_mul_pd(a._avx2, b._avx2);
		return c;
	}


	inline VectorSIMD<double,11> operator+(VectorSIMD<double,11> a, VectorSIMD<double,11> b){
		VectorSIMD<double,11> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_add_pd(a._avx2, b._avx2);
		return c;
	}


	inline VectorSIMD<double,11> operator-(VectorSIMD<double,11> a, VectorSIMD<double,11> b){
		VectorSIMD<double,11> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_sub_pd(a._avx2, b._avx2);
		return c;
	}


	inline VectorSIMD<double,11> operator/(VectorSIMD<double,11> a, VectorSIMD<double,11> b){
		VectorSIMD<double,11> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_div_pd(a._avx2, b._avx2);
		return c;
	}


	inline VectorSIMD<double,11> exp(VectorSIMD<double,11> a){
		double a_d[11]; a.convert(a_d);
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
		VectorSIMD<double,11> r(a_d);
		return r;
	}

	inline VectorSIMD<double,11> sqrt(VectorSIMD<double,11> a){
		double a_d[11]; a.convert(a_d);
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
		VectorSIMD<double,11> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,11> a){ 
		double ad[11];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << ","  << ad[10] << "}";
		return os;
		}



template <typename Real>
class VectorSIMD<Real,12>{
public:
		__m256d _avx0;
		__m256d _avx1;
		__m256d _avx2;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
		}

		VectorSIMD(Real (&a)[12]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_avx2=_mm256_set_pd(a[11],a[10],a[9],a[8]);
		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4,Real _5,Real _6,Real _7,Real _8,Real _9,Real _10,Real _11){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_avx2=_mm256_set_pd(_11,_10,_9,_8);
		}

		VectorSIMD(__m256d _0,__m256d _1,__m256d _2){
			_avx0= _0;
			_avx1= _1;
			_avx2= _2;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,12> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_avx2=  _mm256_add_pd(_avx2,a._avx2);
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,12> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_avx2=  _mm256_sub_pd(_avx2,a._avx2);
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD<double,12> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._avx2=  _mm256_mul_pd(this->_avx2,m1);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
			_avx2 =  _mm256_loadu_pd(&a[8]);
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
			_avx2 =  _mm256_load_pd(&a[8]);
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
		}

	};


	inline VectorSIMD<double,12> operator*(double a, VectorSIMD<double,12> b){
		VectorSIMD<double,12> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		return c;
	}


	inline VectorSIMD<double,12> operator*(VectorSIMD<double,12> a ,double b){
		VectorSIMD<double,12> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		c._avx2=  _mm256_mul_pd(a._avx2, _b);
		return c;
	}


	inline VectorSIMD<double,12> operator*(int a, VectorSIMD<double,12> b){
		if(a==1){return b;}
		VectorSIMD<double,12> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		return c;
	}


	inline VectorSIMD<double,12> operator*(VectorSIMD<double,12> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,12> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		c._avx2=  _mm256_mul_pd(_b, a._avx2);
		return c;
	}


	inline VectorSIMD<double,12> operator*(VectorSIMD<double,12> a, VectorSIMD<double,12> b){
		VectorSIMD<double,12> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_mul_pd(a._avx2, b._avx2);
		return c;
	}


	inline VectorSIMD<double,12> operator+(VectorSIMD<double,12> a, VectorSIMD<double,12> b){
		VectorSIMD<double,12> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_add_pd(a._avx2, b._avx2);
		return c;
	}


	inline VectorSIMD<double,12> operator-(VectorSIMD<double,12> a, VectorSIMD<double,12> b){
		VectorSIMD<double,12> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_sub_pd(a._avx2, b._avx2);
		return c;
	}


	inline VectorSIMD<double,12> operator/(VectorSIMD<double,12> a, VectorSIMD<double,12> b){
		VectorSIMD<double,12> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_div_pd(a._avx2, b._avx2);
		return c;
	}


	inline VectorSIMD<double,12> exp(VectorSIMD<double,12> a){
		double a_d[12]; a.convert(a_d);
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
		VectorSIMD<double,12> r(a_d);
		return r;
	}

	inline VectorSIMD<double,12> sqrt(VectorSIMD<double,12> a){
		double a_d[12]; a.convert(a_d);
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
		VectorSIMD<double,12> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,12> a){ 
		double ad[12];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << ","  << ad[10] << ","  << ad[11] << "}";
		return os;
		}template <typename Real>
class VectorSIMD<Real,13>{
public:
		__m256d _avx0;
		__m256d _avx1;
		__m256d _avx2;
		Real _d;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_d = a;
		}

		VectorSIMD(Real (&a)[13]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_avx2=_mm256_set_pd(a[11],a[10],a[9],a[8]);
			_d = a[12];		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4,Real _5,Real _6,Real _7,Real _8,Real _9,Real _10,Real _11,Real _12){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_avx2=_mm256_set_pd(_11,_10,_9,_8);
			_d = _12;
		}

		VectorSIMD(__m256d _0,__m256d _1,__m256d _2,double c){
			_avx0= _0;
			_avx1= _1;
			_avx2= _2;
			_d = c;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_d = a;
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,13> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_avx2=  _mm256_add_pd(_avx2,a._avx2);
			_d = _d, a._d;
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,13> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_avx2=  _mm256_sub_pd(_avx2,a._avx2);
			_d = _d - a._d;
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD<double,13> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._avx2=  _mm256_mul_pd(this->_avx2,m1);
			result._d = this->_d*(-1);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
			_avx2 =  _mm256_loadu_pd(&a[8]);
			_d = a[12];
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
			_avx2 =  _mm256_load_pd(&a[8]);
			_d = a[12];
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
		a[12] =  _d;
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
		a[12] = _d;
		}

	};


	inline VectorSIMD<double,13> operator*(double a, VectorSIMD<double,13> b){
		VectorSIMD<double,13> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._d = a * b._d;
		return c;
	}


	inline VectorSIMD<double,13> operator*(VectorSIMD<double,13> a ,double b){
		VectorSIMD<double,13> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		c._avx2=  _mm256_mul_pd(a._avx2, _b);
c._d = a._d * b;
		return c;
	}


	inline VectorSIMD<double,13> operator*(int a, VectorSIMD<double,13> b){
		if(a==1){return b;}
		VectorSIMD<double,13> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._d = q*b._d;
		return c;
	}


	inline VectorSIMD<double,13> operator*(VectorSIMD<double,13> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,13> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
c._d = a._d * q;
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		c._avx2=  _mm256_mul_pd(_b, a._avx2);
		return c;
	}


	inline VectorSIMD<double,13> operator*(VectorSIMD<double,13> a, VectorSIMD<double,13> b){
		VectorSIMD<double,13> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_mul_pd(a._avx2, b._avx2);
		c._d = a._d*b._d;
		return c;
	}


	inline VectorSIMD<double,13> operator+(VectorSIMD<double,13> a, VectorSIMD<double,13> b){
		VectorSIMD<double,13> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_add_pd(a._avx2, b._avx2);
		c._d = (a._d + b._d);
		return c;
	}


	inline VectorSIMD<double,13> operator-(VectorSIMD<double,13> a, VectorSIMD<double,13> b){
		VectorSIMD<double,13> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_sub_pd(a._avx2, b._avx2);
		c._d = (a._d-b._d);
		return c;
	}


	inline VectorSIMD<double,13> operator/(VectorSIMD<double,13> a, VectorSIMD<double,13> b){
		VectorSIMD<double,13> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_div_pd(a._avx2, b._avx2);
		c._d = (a._d/b._d);
		return c;
	}


	inline VectorSIMD<double,13> exp(VectorSIMD<double,13> a){
		double a_d[13]; a.convert(a_d);
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
		VectorSIMD<double,13> r(a_d);
		return r;
	}

	inline VectorSIMD<double,13> sqrt(VectorSIMD<double,13> a){
		double a_d[13]; a.convert(a_d);
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
		VectorSIMD<double,13> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,13> a){ 
		double ad[13];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << ","  << ad[10] << ","  << ad[11] << ","  << ad[12] << "}";
		return os;
		}


template <typename Real>
class VectorSIMD<Real,14>{
public:
		__m256d _avx0;
		__m256d _avx1;
		__m256d _avx2;
		__m128d _sse0;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_sse0 = _mm_set_pd(a,a);
		}

		VectorSIMD(Real (&a)[14]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_avx2=_mm256_set_pd(a[11],a[10],a[9],a[8]);
			_sse0 = _mm_set_pd(a[13],a[12]);		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4,Real _5,Real _6,Real _7,Real _8,Real _9,Real _10,Real _11,Real _12,Real _13){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_avx2=_mm256_set_pd(_11,_10,_9,_8);
			_sse0 =_mm_set_pd(_13,_12);
		}

		VectorSIMD(__m256d _0,__m256d _1,__m256d _2,__m128d c){
			_avx0= _0;
			_avx1= _1;
			_avx2= _2;
			_sse0 = c;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_sse0 = _mm_set_pd(a,a);
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,14> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_avx2=  _mm256_add_pd(_avx2,a._avx2);
			_sse0 = _mm_add_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,14> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_avx2=  _mm256_sub_pd(_avx2,a._avx2);
			_sse0 = _mm_sub_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			const static __m128d m1s = _mm_set_pd(-1.0, -1.0);
			VectorSIMD<double,14> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._avx2=  _mm256_mul_pd(this->_avx2,m1);
			result._sse0 = _mm_mul_pd(this->_sse0, m1s);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
			_avx2 =  _mm256_loadu_pd(&a[8]);
			_sse0 = _mm_loadu_pd(&a[12]);
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
			_avx2 =  _mm256_load_pd(&a[8]);
			_sse0 = _mm_load_pd(&a[12]);
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
		_mm_storeu_pd(&a[12], _sse0);
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
		_mm_store_pd(&a[12], _sse0);
		}

	};


	inline VectorSIMD<double,14> operator*(double a, VectorSIMD<double,14> b){
		VectorSIMD<double,14> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		__m128d _a_s = _mm_set_pd(a,a);		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._sse0 = _mm_mul_pd(_a_s, b._sse0);
		return c;
	}


	inline VectorSIMD<double,14> operator*(VectorSIMD<double,14> a ,double b){
		VectorSIMD<double,14> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		__m128d _b_s =  _mm_set_pd(b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		c._avx2=  _mm256_mul_pd(a._avx2, _b);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		return c;
	}


	inline VectorSIMD<double,14> operator*(int a, VectorSIMD<double,14> b){
		if(a==1){return b;}
		VectorSIMD<double,14> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		__m128d _a_s = _mm_set_pd(q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._sse0 = _mm_mul_pd(_a_s,b._sse0);
		return c;
	}


	inline VectorSIMD<double,14> operator*(VectorSIMD<double,14> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,14> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		__m128d _b_s = _mm_set_pd(q,q);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		c._avx2=  _mm256_mul_pd(_b, a._avx2);
		return c;
	}


	inline VectorSIMD<double,14> operator*(VectorSIMD<double,14> a, VectorSIMD<double,14> b){
		VectorSIMD<double,14> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_mul_pd(a._avx2, b._avx2);
		c._sse0 = _mm_mul_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,14> operator+(VectorSIMD<double,14> a, VectorSIMD<double,14> b){
		VectorSIMD<double,14> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_add_pd(a._avx2, b._avx2);
		c._sse0 = _mm_add_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,14> operator-(VectorSIMD<double,14> a, VectorSIMD<double,14> b){
		VectorSIMD<double,14> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_sub_pd(a._avx2, b._avx2);
		c._sse0 = _mm_sub_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,14> operator/(VectorSIMD<double,14> a, VectorSIMD<double,14> b){
		VectorSIMD<double,14> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_div_pd(a._avx2, b._avx2);
		c._sse0 = _mm_div_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,14> exp(VectorSIMD<double,14> a){
		double a_d[14]; a.convert(a_d);
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
		VectorSIMD<double,14> r(a_d);
		return r;
	}

	inline VectorSIMD<double,14> sqrt(VectorSIMD<double,14> a){
		double a_d[14]; a.convert(a_d);
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
		VectorSIMD<double,14> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,14> a){ 
		double ad[14];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << ","  << ad[10] << ","  << ad[11] << ","  << ad[12] << ","  << ad[13] << "}";
		return os;
		}


template <typename Real>
class VectorSIMD<Real,15>{
public:
		__m256d _avx0;
		__m256d _avx1;
		__m256d _avx2;
		__m256d _avx3;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_avx3=_mm256_set_pd(0,a,a,a);
		}

		VectorSIMD(Real (&a)[15]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_avx2=_mm256_set_pd(a[11],a[10],a[9],a[8]);
			_avx3=_mm256_set_pd(0,a[14],a[13],a[12]);
		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4,Real _5,Real _6,Real _7,Real _8,Real _9,Real _10,Real _11,Real _12,Real _13,Real _14){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_avx2=_mm256_set_pd(_11,_10,_9,_8);
			_avx3=_mm256_set_pd( 0,_14,_13,_12);
		}

		VectorSIMD(__m256d _0,__m256d _1,__m256d _2,__m256d _3){
			_avx0= _0;
			_avx1= _1;
			_avx2= _2;
			_avx3= _3;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_avx3=_mm256_set_pd(a,a,a,a);
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,15> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_avx2=  _mm256_add_pd(_avx2,a._avx2);
			_avx3=  _mm256_add_pd(_avx3,a._avx3);
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,15> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_avx2=  _mm256_sub_pd(_avx2,a._avx2);
			_avx3=  _mm256_sub_pd(_avx3,a._avx3);
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD<double,15> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._avx2=  _mm256_mul_pd(this->_avx2,m1);
			result._avx3=  _mm256_mul_pd(this->_avx3,m1);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
			_avx2 =  _mm256_loadu_pd(&a[8]);
			_avx3 =  _mm256_loadu_pd(&a[12]);
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
			_avx2 =  _mm256_load_pd(&a[8]);
			_avx3 =  _mm256_load_pd(&a[12]);
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
		}

	};


	inline VectorSIMD<double,15> operator*(double a, VectorSIMD<double,15> b){
		VectorSIMD<double,15> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		return c;
	}


	inline VectorSIMD<double,15> operator*(VectorSIMD<double,15> a ,double b){
		VectorSIMD<double,15> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		c._avx2=  _mm256_mul_pd(a._avx2, _b);
		c._avx3=  _mm256_mul_pd(a._avx3, _b);
		return c;
	}


	inline VectorSIMD<double,15> operator*(int a, VectorSIMD<double,15> b){
		if(a==1){return b;}
		VectorSIMD<double,15> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		return c;
	}


	inline VectorSIMD<double,15> operator*(VectorSIMD<double,15> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,15> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		c._avx2=  _mm256_mul_pd(_b, a._avx2);
		c._avx3=  _mm256_mul_pd(_b, a._avx3);
		return c;
	}


	inline VectorSIMD<double,15> operator*(VectorSIMD<double,15> a, VectorSIMD<double,15> b){
		VectorSIMD<double,15> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_mul_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_mul_pd(a._avx3, b._avx3);
		return c;
	}


	inline VectorSIMD<double,15> operator+(VectorSIMD<double,15> a, VectorSIMD<double,15> b){
		VectorSIMD<double,15> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_add_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_add_pd(a._avx3, b._avx3);
		return c;
	}


	inline VectorSIMD<double,15> operator-(VectorSIMD<double,15> a, VectorSIMD<double,15> b){
		VectorSIMD<double,15> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_sub_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_sub_pd(a._avx3, b._avx3);
		return c;
	}


	inline VectorSIMD<double,15> operator/(VectorSIMD<double,15> a, VectorSIMD<double,15> b){
		VectorSIMD<double,15> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_div_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_div_pd(a._avx3, b._avx3);
		return c;
	}


	inline VectorSIMD<double,15> exp(VectorSIMD<double,15> a){
		double a_d[15]; a.convert(a_d);
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
		VectorSIMD<double,15> r(a_d);
		return r;
	}

	inline VectorSIMD<double,15> sqrt(VectorSIMD<double,15> a){
		double a_d[15]; a.convert(a_d);
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
		VectorSIMD<double,15> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,15> a){ 
		double ad[15];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << ","  << ad[10] << ","  << ad[11] << ","  << ad[12] << ","  << ad[13] << ","  << ad[14] << "}";
		return os;
		}



template <typename Real>
class VectorSIMD<Real,16>{
public:
		__m256d _avx0;
		__m256d _avx1;
		__m256d _avx2;
		__m256d _avx3;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_avx3=_mm256_set_pd(a,a,a,a);
		}

		VectorSIMD(Real (&a)[16]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_avx2=_mm256_set_pd(a[11],a[10],a[9],a[8]);
			_avx3=_mm256_set_pd(a[15],a[14],a[13],a[12]);
		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4,Real _5,Real _6,Real _7,Real _8,Real _9,Real _10,Real _11,Real _12,Real _13,Real _14,Real _15){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_avx2=_mm256_set_pd(_11,_10,_9,_8);
			_avx3=_mm256_set_pd(_15,_14,_13,_12);
		}

		VectorSIMD(__m256d _0,__m256d _1,__m256d _2,__m256d _3){
			_avx0= _0;
			_avx1= _1;
			_avx2= _2;
			_avx3= _3;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_avx3=_mm256_set_pd(a,a,a,a);
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,16> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_avx2=  _mm256_add_pd(_avx2,a._avx2);
			_avx3=  _mm256_add_pd(_avx3,a._avx3);
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,16> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_avx2=  _mm256_sub_pd(_avx2,a._avx2);
			_avx3=  _mm256_sub_pd(_avx3,a._avx3);
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD<double,16> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._avx2=  _mm256_mul_pd(this->_avx2,m1);
			result._avx3=  _mm256_mul_pd(this->_avx3,m1);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
			_avx2 =  _mm256_loadu_pd(&a[8]);
			_avx3 =  _mm256_loadu_pd(&a[12]);
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
			_avx2 =  _mm256_load_pd(&a[8]);
			_avx3 =  _mm256_load_pd(&a[12]);
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
		}

	};


	inline VectorSIMD<double,16> operator*(double a, VectorSIMD<double,16> b){
		VectorSIMD<double,16> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		return c;
	}


	inline VectorSIMD<double,16> operator*(VectorSIMD<double,16> a ,double b){
		VectorSIMD<double,16> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		c._avx2=  _mm256_mul_pd(a._avx2, _b);
		c._avx3=  _mm256_mul_pd(a._avx3, _b);
		return c;
	}


	inline VectorSIMD<double,16> operator*(int a, VectorSIMD<double,16> b){
		if(a==1){return b;}
		VectorSIMD<double,16> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		return c;
	}


	inline VectorSIMD<double,16> operator*(VectorSIMD<double,16> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,16> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		c._avx2=  _mm256_mul_pd(_b, a._avx2);
		c._avx3=  _mm256_mul_pd(_b, a._avx3);
		return c;
	}


	inline VectorSIMD<double,16> operator*(VectorSIMD<double,16> a, VectorSIMD<double,16> b){
		VectorSIMD<double,16> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_mul_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_mul_pd(a._avx3, b._avx3);
		return c;
	}


	inline VectorSIMD<double,16> operator+(VectorSIMD<double,16> a, VectorSIMD<double,16> b){
		VectorSIMD<double,16> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_add_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_add_pd(a._avx3, b._avx3);
		return c;
	}


	inline VectorSIMD<double,16> operator-(VectorSIMD<double,16> a, VectorSIMD<double,16> b){
		VectorSIMD<double,16> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_sub_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_sub_pd(a._avx3, b._avx3);
		return c;
	}


	inline VectorSIMD<double,16> operator/(VectorSIMD<double,16> a, VectorSIMD<double,16> b){
		VectorSIMD<double,16> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_div_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_div_pd(a._avx3, b._avx3);
		return c;
	}


	inline VectorSIMD<double,16> exp(VectorSIMD<double,16> a){
		double a_d[16]; a.convert(a_d);
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
		VectorSIMD<double,16> r(a_d);
		return r;
	}

	inline VectorSIMD<double,16> sqrt(VectorSIMD<double,16> a){
		double a_d[16]; a.convert(a_d);
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
		VectorSIMD<double,16> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,16> a){ 
		double ad[16];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << ","  << ad[10] << ","  << ad[11] << ","  << ad[12] << ","  << ad[13] << ","  << ad[14] << ","  << ad[15] << "}";
		return os;
		}template <typename Real>
class VectorSIMD<Real,17>{
public:
		__m256d _avx0;
		__m256d _avx1;
		__m256d _avx2;
		__m256d _avx3;
		Real _d;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_avx3=_mm256_set_pd(a,a,a,a);
			_d = a;
		}

		VectorSIMD(Real (&a)[17]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_avx2=_mm256_set_pd(a[11],a[10],a[9],a[8]);
			_avx3=_mm256_set_pd(a[15],a[14],a[13],a[12]);
			_d = a[16];		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4,Real _5,Real _6,Real _7,Real _8,Real _9,Real _10,Real _11,Real _12,Real _13,Real _14,Real _15,Real _16){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_avx2=_mm256_set_pd(_11,_10,_9,_8);
			_avx3=_mm256_set_pd(_15,_14,_13,_12);
			_d = _16;
		}

		VectorSIMD(__m256d _0,__m256d _1,__m256d _2,__m256d _3,double c){
			_avx0= _0;
			_avx1= _1;
			_avx2= _2;
			_avx3= _3;
			_d = c;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_avx3=_mm256_set_pd(a,a,a,a);
			_d = a;
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,17> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_avx2=  _mm256_add_pd(_avx2,a._avx2);
			_avx3=  _mm256_add_pd(_avx3,a._avx3);
			_d = _d, a._d;
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,17> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_avx2=  _mm256_sub_pd(_avx2,a._avx2);
			_avx3=  _mm256_sub_pd(_avx3,a._avx3);
			_d = _d - a._d;
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD<double,17> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._avx2=  _mm256_mul_pd(this->_avx2,m1);
			result._avx3=  _mm256_mul_pd(this->_avx3,m1);
			result._d = this->_d*(-1);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
			_avx2 =  _mm256_loadu_pd(&a[8]);
			_avx3 =  _mm256_loadu_pd(&a[12]);
			_d = a[16];
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
			_avx2 =  _mm256_load_pd(&a[8]);
			_avx3 =  _mm256_load_pd(&a[12]);
			_d = a[16];
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
		a[16] =  _d;
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
		a[16] = _d;
		}

	};


	inline VectorSIMD<double,17> operator*(double a, VectorSIMD<double,17> b){
		VectorSIMD<double,17> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		c._d = a * b._d;
		return c;
	}


	inline VectorSIMD<double,17> operator*(VectorSIMD<double,17> a ,double b){
		VectorSIMD<double,17> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		c._avx2=  _mm256_mul_pd(a._avx2, _b);
		c._avx3=  _mm256_mul_pd(a._avx3, _b);
c._d = a._d * b;
		return c;
	}


	inline VectorSIMD<double,17> operator*(int a, VectorSIMD<double,17> b){
		if(a==1){return b;}
		VectorSIMD<double,17> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		c._d = q*b._d;
		return c;
	}


	inline VectorSIMD<double,17> operator*(VectorSIMD<double,17> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,17> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
c._d = a._d * q;
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		c._avx2=  _mm256_mul_pd(_b, a._avx2);
		c._avx3=  _mm256_mul_pd(_b, a._avx3);
		return c;
	}


	inline VectorSIMD<double,17> operator*(VectorSIMD<double,17> a, VectorSIMD<double,17> b){
		VectorSIMD<double,17> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_mul_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_mul_pd(a._avx3, b._avx3);
		c._d = a._d*b._d;
		return c;
	}


	inline VectorSIMD<double,17> operator+(VectorSIMD<double,17> a, VectorSIMD<double,17> b){
		VectorSIMD<double,17> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_add_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_add_pd(a._avx3, b._avx3);
		c._d = (a._d + b._d);
		return c;
	}


	inline VectorSIMD<double,17> operator-(VectorSIMD<double,17> a, VectorSIMD<double,17> b){
		VectorSIMD<double,17> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_sub_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_sub_pd(a._avx3, b._avx3);
		c._d = (a._d-b._d);
		return c;
	}


	inline VectorSIMD<double,17> operator/(VectorSIMD<double,17> a, VectorSIMD<double,17> b){
		VectorSIMD<double,17> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_div_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_div_pd(a._avx3, b._avx3);
		c._d = (a._d/b._d);
		return c;
	}


	inline VectorSIMD<double,17> exp(VectorSIMD<double,17> a){
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
		VectorSIMD<double,17> r(a_d);
		return r;
	}

	inline VectorSIMD<double,17> sqrt(VectorSIMD<double,17> a){
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
		VectorSIMD<double,17> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,17> a){ 
		double ad[17];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << ","  << ad[10] << ","  << ad[11] << ","  << ad[12] << ","  << ad[13] << ","  << ad[14] << ","  << ad[15] << ","  << ad[16] << "}";
		return os;
		}


template <typename Real>
class VectorSIMD<Real,18>{
public:
		__m256d _avx0;
		__m256d _avx1;
		__m256d _avx2;
		__m256d _avx3;
		__m128d _sse0;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_avx3=_mm256_set_pd(a,a,a,a);
			_sse0 = _mm_set_pd(a,a);
		}

		VectorSIMD(Real (&a)[18]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_avx2=_mm256_set_pd(a[11],a[10],a[9],a[8]);
			_avx3=_mm256_set_pd(a[15],a[14],a[13],a[12]);
			_sse0 = _mm_set_pd(a[17],a[16]);		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4,Real _5,Real _6,Real _7,Real _8,Real _9,Real _10,Real _11,Real _12,Real _13,Real _14,Real _15,Real _16,Real _17){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_avx2=_mm256_set_pd(_11,_10,_9,_8);
			_avx3=_mm256_set_pd(_15,_14,_13,_12);
			_sse0 =_mm_set_pd(_17,_16);
		}

		VectorSIMD(__m256d _0,__m256d _1,__m256d _2,__m256d _3,__m128d c){
			_avx0= _0;
			_avx1= _1;
			_avx2= _2;
			_avx3= _3;
			_sse0 = c;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_avx3=_mm256_set_pd(a,a,a,a);
			_sse0 = _mm_set_pd(a,a);
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,18> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_avx2=  _mm256_add_pd(_avx2,a._avx2);
			_avx3=  _mm256_add_pd(_avx3,a._avx3);
			_sse0 = _mm_add_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,18> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_avx2=  _mm256_sub_pd(_avx2,a._avx2);
			_avx3=  _mm256_sub_pd(_avx3,a._avx3);
			_sse0 = _mm_sub_pd(_sse0, a._sse0);
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			const static __m128d m1s = _mm_set_pd(-1.0, -1.0);
			VectorSIMD<double,18> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._avx2=  _mm256_mul_pd(this->_avx2,m1);
			result._avx3=  _mm256_mul_pd(this->_avx3,m1);
			result._sse0 = _mm_mul_pd(this->_sse0, m1s);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
			_avx2 =  _mm256_loadu_pd(&a[8]);
			_avx3 =  _mm256_loadu_pd(&a[12]);
			_sse0 = _mm_loadu_pd(&a[16]);
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
			_avx2 =  _mm256_load_pd(&a[8]);
			_avx3 =  _mm256_load_pd(&a[12]);
			_sse0 = _mm_load_pd(&a[16]);
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
		_mm_storeu_pd(&a[16], _sse0);
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
		_mm_store_pd(&a[16], _sse0);
		}

	};


	inline VectorSIMD<double,18> operator*(double a, VectorSIMD<double,18> b){
		VectorSIMD<double,18> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		__m128d _a_s = _mm_set_pd(a,a);		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		c._sse0 = _mm_mul_pd(_a_s, b._sse0);
		return c;
	}


	inline VectorSIMD<double,18> operator*(VectorSIMD<double,18> a ,double b){
		VectorSIMD<double,18> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		__m128d _b_s =  _mm_set_pd(b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		c._avx2=  _mm256_mul_pd(a._avx2, _b);
		c._avx3=  _mm256_mul_pd(a._avx3, _b);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		return c;
	}


	inline VectorSIMD<double,18> operator*(int a, VectorSIMD<double,18> b){
		if(a==1){return b;}
		VectorSIMD<double,18> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		__m128d _a_s = _mm_set_pd(q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		c._sse0 = _mm_mul_pd(_a_s,b._sse0);
		return c;
	}


	inline VectorSIMD<double,18> operator*(VectorSIMD<double,18> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,18> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		__m128d _b_s = _mm_set_pd(q,q);
c._sse0 = _mm_mul_pd(a._sse0, _b_s);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		c._avx2=  _mm256_mul_pd(_b, a._avx2);
		c._avx3=  _mm256_mul_pd(_b, a._avx3);
		return c;
	}


	inline VectorSIMD<double,18> operator*(VectorSIMD<double,18> a, VectorSIMD<double,18> b){
		VectorSIMD<double,18> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_mul_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_mul_pd(a._avx3, b._avx3);
		c._sse0 = _mm_mul_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,18> operator+(VectorSIMD<double,18> a, VectorSIMD<double,18> b){
		VectorSIMD<double,18> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_add_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_add_pd(a._avx3, b._avx3);
		c._sse0 = _mm_add_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,18> operator-(VectorSIMD<double,18> a, VectorSIMD<double,18> b){
		VectorSIMD<double,18> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_sub_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_sub_pd(a._avx3, b._avx3);
		c._sse0 = _mm_sub_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,18> operator/(VectorSIMD<double,18> a, VectorSIMD<double,18> b){
		VectorSIMD<double,18> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_div_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_div_pd(a._avx3, b._avx3);
		c._sse0 = _mm_div_pd(a._sse0,b._sse0);
		return c;
	}


	inline VectorSIMD<double,18> exp(VectorSIMD<double,18> a){
		double a_d[18]; a.convert(a_d);
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
		VectorSIMD<double,18> r(a_d);
		return r;
	}

	inline VectorSIMD<double,18> sqrt(VectorSIMD<double,18> a){
		double a_d[18]; a.convert(a_d);
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
		VectorSIMD<double,18> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,18> a){ 
		double ad[18];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << ","  << ad[10] << ","  << ad[11] << ","  << ad[12] << ","  << ad[13] << ","  << ad[14] << ","  << ad[15] << ","  << ad[16] << ","  << ad[17] << "}";
		return os;
		}


template <typename Real>
class VectorSIMD<Real,19>{
public:
		__m256d _avx0;
		__m256d _avx1;
		__m256d _avx2;
		__m256d _avx3;
		__m256d _avx4;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_avx3=_mm256_set_pd(a,a,a,a);
			_avx4=_mm256_set_pd(0,a,a,a);
		}

		VectorSIMD(Real (&a)[19]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_avx2=_mm256_set_pd(a[11],a[10],a[9],a[8]);
			_avx3=_mm256_set_pd(a[15],a[14],a[13],a[12]);
			_avx4=_mm256_set_pd(0,a[18],a[17],a[16]);
		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4,Real _5,Real _6,Real _7,Real _8,Real _9,Real _10,Real _11,Real _12,Real _13,Real _14,Real _15,Real _16,Real _17,Real _18){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_avx2=_mm256_set_pd(_11,_10,_9,_8);
			_avx3=_mm256_set_pd(_15,_14,_13,_12);
			_avx4=_mm256_set_pd( 0,_18,_17,_16);
		}

		VectorSIMD(__m256d _0,__m256d _1,__m256d _2,__m256d _3,__m256d _4){
			_avx0= _0;
			_avx1= _1;
			_avx2= _2;
			_avx3= _3;
			_avx4= _4;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_avx3=_mm256_set_pd(a,a,a,a);
			_avx4=_mm256_set_pd(a,a,a,a);
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,19> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_avx2=  _mm256_add_pd(_avx2,a._avx2);
			_avx3=  _mm256_add_pd(_avx3,a._avx3);
			_avx4=  _mm256_add_pd(_avx4,a._avx4);
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,19> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_avx2=  _mm256_sub_pd(_avx2,a._avx2);
			_avx3=  _mm256_sub_pd(_avx3,a._avx3);
			_avx4=  _mm256_sub_pd(_avx4,a._avx4);
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD<double,19> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._avx2=  _mm256_mul_pd(this->_avx2,m1);
			result._avx3=  _mm256_mul_pd(this->_avx3,m1);
			result._avx4=  _mm256_mul_pd(this->_avx4,m1);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
			_avx2 =  _mm256_loadu_pd(&a[8]);
			_avx3 =  _mm256_loadu_pd(&a[12]);
			_avx4 =  _mm256_loadu_pd(&a[16]);
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
			_avx2 =  _mm256_load_pd(&a[8]);
			_avx3 =  _mm256_load_pd(&a[12]);
			_avx4 =  _mm256_load_pd(&a[16]);
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
			_mm256_storeu_pd(&a[16],_avx4);
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
			_mm256_storeu_pd(&a[16],_avx4);
		}

	};


	inline VectorSIMD<double,19> operator*(double a, VectorSIMD<double,19> b){
		VectorSIMD<double,19> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		c._avx4=  _mm256_mul_pd(_a, b._avx4);
		return c;
	}


	inline VectorSIMD<double,19> operator*(VectorSIMD<double,19> a ,double b){
		VectorSIMD<double,19> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		c._avx2=  _mm256_mul_pd(a._avx2, _b);
		c._avx3=  _mm256_mul_pd(a._avx3, _b);
		c._avx4=  _mm256_mul_pd(a._avx4, _b);
		return c;
	}


	inline VectorSIMD<double,19> operator*(int a, VectorSIMD<double,19> b){
		if(a==1){return b;}
		VectorSIMD<double,19> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		c._avx4=  _mm256_mul_pd(_a, b._avx4);
		return c;
	}


	inline VectorSIMD<double,19> operator*(VectorSIMD<double,19> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,19> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		c._avx2=  _mm256_mul_pd(_b, a._avx2);
		c._avx3=  _mm256_mul_pd(_b, a._avx3);
		c._avx4=  _mm256_mul_pd(_b, a._avx4);
		return c;
	}


	inline VectorSIMD<double,19> operator*(VectorSIMD<double,19> a, VectorSIMD<double,19> b){
		VectorSIMD<double,19> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_mul_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_mul_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_mul_pd(a._avx4, b._avx4);
		return c;
	}


	inline VectorSIMD<double,19> operator+(VectorSIMD<double,19> a, VectorSIMD<double,19> b){
		VectorSIMD<double,19> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_add_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_add_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_add_pd(a._avx4, b._avx4);
		return c;
	}


	inline VectorSIMD<double,19> operator-(VectorSIMD<double,19> a, VectorSIMD<double,19> b){
		VectorSIMD<double,19> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_sub_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_sub_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_sub_pd(a._avx4, b._avx4);
		return c;
	}


	inline VectorSIMD<double,19> operator/(VectorSIMD<double,19> a, VectorSIMD<double,19> b){
		VectorSIMD<double,19> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_div_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_div_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_div_pd(a._avx4, b._avx4);
		return c;
	}


	inline VectorSIMD<double,19> exp(VectorSIMD<double,19> a){
		double a_d[19]; a.convert(a_d);
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
		VectorSIMD<double,19> r(a_d);
		return r;
	}

	inline VectorSIMD<double,19> sqrt(VectorSIMD<double,19> a){
		double a_d[19]; a.convert(a_d);
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
		VectorSIMD<double,19> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,19> a){ 
		double ad[19];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << ","  << ad[10] << ","  << ad[11] << ","  << ad[12] << ","  << ad[13] << ","  << ad[14] << ","  << ad[15] << ","  << ad[16] << ","  << ad[17] << ","  << ad[18] << "}";
		return os;
		}



template <typename Real>
class VectorSIMD<Real,20>{
public:
		__m256d _avx0;
		__m256d _avx1;
		__m256d _avx2;
		__m256d _avx3;
		__m256d _avx4;
		VectorSIMD(){};
		VectorSIMD(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_avx3=_mm256_set_pd(a,a,a,a);
			_avx4=_mm256_set_pd(a,a,a,a);
		}

		VectorSIMD(Real (&a)[20]){
			_avx0=_mm256_set_pd(a[3],a[2],a[1],a[0]);
			_avx1=_mm256_set_pd(a[7],a[6],a[5],a[4]);
			_avx2=_mm256_set_pd(a[11],a[10],a[9],a[8]);
			_avx3=_mm256_set_pd(a[15],a[14],a[13],a[12]);
			_avx4=_mm256_set_pd(a[19],a[18],a[17],a[16]);
		}

		VectorSIMD(Real _0,Real _1,Real _2,Real _3,Real _4,Real _5,Real _6,Real _7,Real _8,Real _9,Real _10,Real _11,Real _12,Real _13,Real _14,Real _15,Real _16,Real _17,Real _18,Real _19){
			_avx0=_mm256_set_pd(_3,_2,_1,_0);
			_avx1=_mm256_set_pd(_7,_6,_5,_4);
			_avx2=_mm256_set_pd(_11,_10,_9,_8);
			_avx3=_mm256_set_pd(_15,_14,_13,_12);
			_avx4=_mm256_set_pd(_19,_18,_17,_16);
		}

		VectorSIMD(__m256d _0,__m256d _1,__m256d _2,__m256d _3,__m256d _4){
			_avx0= _0;
			_avx1= _1;
			_avx2= _2;
			_avx3= _3;
			_avx4= _4;
		}

		VectorSIMD& operator=(Real a){
			_avx0=_mm256_set_pd(a,a,a,a);
			_avx1=_mm256_set_pd(a,a,a,a);
			_avx2=_mm256_set_pd(a,a,a,a);
			_avx3=_mm256_set_pd(a,a,a,a);
			_avx4=_mm256_set_pd(a,a,a,a);
			return *this;
		}

		VectorSIMD& operator += (VectorSIMD<Real,20> a){
			_avx0=  _mm256_add_pd(_avx0,a._avx0);
			_avx1=  _mm256_add_pd(_avx1,a._avx1);
			_avx2=  _mm256_add_pd(_avx2,a._avx2);
			_avx3=  _mm256_add_pd(_avx3,a._avx3);
			_avx4=  _mm256_add_pd(_avx4,a._avx4);
			return *this;
		}

		VectorSIMD& operator -= (VectorSIMD<Real,20> a){
			_avx0=  _mm256_sub_pd(_avx0,a._avx0);
			_avx1=  _mm256_sub_pd(_avx1,a._avx1);
			_avx2=  _mm256_sub_pd(_avx2,a._avx2);
			_avx3=  _mm256_sub_pd(_avx3,a._avx3);
			_avx4=  _mm256_sub_pd(_avx4,a._avx4);
			return *this;
		}

		VectorSIMD operator -() const{
			const static __m256d m1 = _mm256_set_pd(-1.0,-1.0,-1.0,-1.0);
			VectorSIMD<double,20> result;
			result._avx0=  _mm256_mul_pd(this->_avx0,m1);
			result._avx1=  _mm256_mul_pd(this->_avx1,m1);
			result._avx2=  _mm256_mul_pd(this->_avx2,m1);
			result._avx3=  _mm256_mul_pd(this->_avx3,m1);
			result._avx4=  _mm256_mul_pd(this->_avx4,m1);
			return result;
		}

		void load(Real const* a){
			_avx0 =  _mm256_loadu_pd(&a[0]);
			_avx1 =  _mm256_loadu_pd(&a[4]);
			_avx2 =  _mm256_loadu_pd(&a[8]);
			_avx3 =  _mm256_loadu_pd(&a[12]);
			_avx4 =  _mm256_loadu_pd(&a[16]);
		}

		void load_aligned(Real const* a){
			_avx0 =  _mm256_load_pd(&a[0]);
			_avx1 =  _mm256_load_pd(&a[4]);
			_avx2 =  _mm256_load_pd(&a[8]);
			_avx3 =  _mm256_load_pd(&a[12]);
			_avx4 =  _mm256_load_pd(&a[16]);
		}

		void convert(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
			_mm256_storeu_pd(&a[16],_avx4);
		}

		void convert_aligned(Real *a) const {
			_mm256_storeu_pd(&a[0],_avx0);
			_mm256_storeu_pd(&a[4],_avx1);
			_mm256_storeu_pd(&a[8],_avx2);
			_mm256_storeu_pd(&a[12],_avx3);
			_mm256_storeu_pd(&a[16],_avx4);
		}

	};


	inline VectorSIMD<double,20> operator*(double a, VectorSIMD<double,20> b){
		VectorSIMD<double,20> c;
		__m256d _a =  _mm256_set_pd(a,a,a,a);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		c._avx4=  _mm256_mul_pd(_a, b._avx4);
		return c;
	}


	inline VectorSIMD<double,20> operator*(VectorSIMD<double,20> a ,double b){
		VectorSIMD<double,20> c;
		__m256d _b =  _mm256_set_pd(b,b,b,b);
		c._avx0=  _mm256_mul_pd(a._avx0, _b);
		c._avx1=  _mm256_mul_pd(a._avx1, _b);
		c._avx2=  _mm256_mul_pd(a._avx2, _b);
		c._avx3=  _mm256_mul_pd(a._avx3, _b);
		c._avx4=  _mm256_mul_pd(a._avx4, _b);
		return c;
	}


	inline VectorSIMD<double,20> operator*(int a, VectorSIMD<double,20> b){
		if(a==1){return b;}
		VectorSIMD<double,20> c;
		double q = static_cast<double>(a);
		__m256d _a =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_a, b._avx0);
		c._avx1=  _mm256_mul_pd(_a, b._avx1);
		c._avx2=  _mm256_mul_pd(_a, b._avx2);
		c._avx3=  _mm256_mul_pd(_a, b._avx3);
		c._avx4=  _mm256_mul_pd(_a, b._avx4);
		return c;
	}


	inline VectorSIMD<double,20> operator*(VectorSIMD<double,20> a, int b){
		if(b==1){return a;}
		VectorSIMD<double,20> c;
		double q = static_cast<double>(b);
		__m256d _b =  _mm256_set_pd(q,q,q,q);
		c._avx0=  _mm256_mul_pd(_b, a._avx0);
		c._avx1=  _mm256_mul_pd(_b, a._avx1);
		c._avx2=  _mm256_mul_pd(_b, a._avx2);
		c._avx3=  _mm256_mul_pd(_b, a._avx3);
		c._avx4=  _mm256_mul_pd(_b, a._avx4);
		return c;
	}


	inline VectorSIMD<double,20> operator*(VectorSIMD<double,20> a, VectorSIMD<double,20> b){
		VectorSIMD<double,20> c;
		c._avx0=  _mm256_mul_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_mul_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_mul_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_mul_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_mul_pd(a._avx4, b._avx4);
		return c;
	}


	inline VectorSIMD<double,20> operator+(VectorSIMD<double,20> a, VectorSIMD<double,20> b){
		VectorSIMD<double,20> c;
		c._avx0=  _mm256_add_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_add_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_add_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_add_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_add_pd(a._avx4, b._avx4);
		return c;
	}


	inline VectorSIMD<double,20> operator-(VectorSIMD<double,20> a, VectorSIMD<double,20> b){
		VectorSIMD<double,20> c;
		c._avx0=  _mm256_sub_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_sub_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_sub_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_sub_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_sub_pd(a._avx4, b._avx4);
		return c;
	}


	inline VectorSIMD<double,20> operator/(VectorSIMD<double,20> a, VectorSIMD<double,20> b){
		VectorSIMD<double,20> c;
		c._avx0=  _mm256_div_pd(a._avx0, b._avx0);
		c._avx1=  _mm256_div_pd(a._avx1, b._avx1);
		c._avx2=  _mm256_div_pd(a._avx2, b._avx2);
		c._avx3=  _mm256_div_pd(a._avx3, b._avx3);
		c._avx4=  _mm256_div_pd(a._avx4, b._avx4);
		return c;
	}


	inline VectorSIMD<double,20> exp(VectorSIMD<double,20> a){
		double a_d[20]; a.convert(a_d);
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
		VectorSIMD<double,20> r(a_d);
		return r;
	}

	inline VectorSIMD<double,20> sqrt(VectorSIMD<double,20> a){
		double a_d[20]; a.convert(a_d);
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
		VectorSIMD<double,20> r(a_d);
		return r;
	}

	inline std::ostream& operator<<(std::ostream& os, VectorSIMD<double,20> a){ 
		double ad[20];
		a.convert(ad);
		os << "{" << ad[0] << ","  << ad[1] << ","  << ad[2] << ","  << ad[3] << ","  << ad[4] << ","  << ad[5] << ","  << ad[6] << ","  << ad[7] << ","  << ad[8] << ","  << ad[9] << ","  << ad[10] << ","  << ad[11] << ","  << ad[12] << ","  << ad[13] << ","  << ad[14] << ","  << ad[15] << ","  << ad[16] << ","  << ad[17] << ","  << ad[18] << ","  << ad[19] << "}";
		return os;
		}

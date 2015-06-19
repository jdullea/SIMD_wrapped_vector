#include <iostream>
#include "simd_wrapped_vectors.hpp"

int main(){




	//Some tests

	//First test n = 2
	{

		cout<<"================================================="<<endl;
		cout<<"***************Testing with n = 2****************"<<endl;
		cout<<"================================================="<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tAssingments"<<endl;
		cout<<"=========================================="<<endl;
		VectorSIMD2 a(2.0);

		cout<<"\tset 'a' with single double"<<endl;
		cout<<"\t{2,2} == " <<a<<endl<<endl;

		double _b[2] = {1.0, 2.0};
		VectorSIMD2 b(_b);

		cout<<"\tset 'b' with double* "<<endl;
		cout<<"\t{1,2} == " << b <<endl<<endl;

		VectorSIMD2 c(3.0, 4.0);
		cout<<"\tset 'c' with 2 doubles"<<endl;
		cout<<"\t{3,4} == " <<c<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ttesting addition and assingment"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tc = a + b"<<endl;
		c = a + b;
		cout<<"\t{3,4} == "<<c<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\ttesting subtraction"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta - b"<<endl;
		cout<<"\t{1,0} == "<< (a - b)<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting scalar mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tdouble first"<<endl;
		cout<<"\t1.5*b"<<endl;
		cout<<"\t{1.5,3.0} == "<<1.5*b<<endl<<endl;
		cout<<"\tdouble second"<<endl;
		cout<<"\tb*1.5"<<endl;
		cout<<"\t{1.5,3.0} == "<<b*1.5<<endl<<endl;
		cout<<"\tinteger first"<<endl;
		cout<<"\t2*b"<<endl;
		cout<<"\t{2,4} == "<<2*b<<endl<<endl;
		cout<<"\tinteger second"<<endl;
		cout<<"\tb*2"<<endl;
		cout<<"\t{2,4} == "<<b*2<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta*b"<<endl;
		cout<<"\t{2,4} == "<<a*b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt div"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta/b"<<endl;
		cout<<"\t{2,1} == "<<a/b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting negation"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\t-b"<<endl;
		cout<<"\t{-1,-2} == "<<-b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting +="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb+=b"<<endl;
		b+=b;
		cout<<"\t{2,4} == "<<b<<endl;
		cout<<"\tvalue of b reset to {1,2} using load"<<endl;
		b.load(_b);
		cout<<"\tb = "<<b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting -="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb-=b"<<endl;
		b-=b;
		cout<<"\t{0,0} == "<<b<<endl;
		cout<<"\tb is again reset"<<endl<<endl<<endl<<endl;
		b.load(_b);


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting exp"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\texp(b)"<<endl;
		cout<<"\t{2.71828,7.38905} == "<<exp(b)<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting sqrt"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tsqrt(b)"<<endl;
		cout<<"\t{1,1.41421} == "<<sqrt(b)<<endl<<endl<<endl;

	}


	//test n = 3
	{

		cout<<"============================================================================"<<endl;
		cout<<"*****************************Testing with n = 3*****************************"<<endl;
		cout<<"============================================================================"<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tAssingments"<<endl;
		cout<<"=========================================="<<endl;
		VectorSIMD3 a(2.0);

		cout<<"\tset 'a' with single double"<<endl;
		cout<<"\t{2,2,2} == " <<a<<endl<<endl;

		double _b[3] = {1.0, 2.0, 3.0};
		VectorSIMD3 b(_b);

		cout<<"\tset 'b' with double* "<<endl;
		cout<<"\t{1,2,3} == " << b <<endl<<endl;

		VectorSIMD3 c(3.0, 4.0,5.0);
		cout<<"\tset 'c' with 2 doubles"<<endl;
		cout<<"\t{3,4,5} == " <<c<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ttesting addition and assingment"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tc = a + b"<<endl;
		c = a + b;
		cout<<"\t{3,4,5} == "<<c<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\ttesting subtraction"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta - b"<<endl;
		cout<<"\t{1,0, -1} == "<< (a - b)<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting scalar mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tdouble first"<<endl;
		cout<<"\t1.5*b"<<endl;
		cout<<"\t{1.5,3.0,4.5} == "<<1.5*b<<endl<<endl;
		cout<<"\tdouble second"<<endl;
		cout<<"\tb*1.5"<<endl;
		cout<<"\t{1.5,3.0, 4.5} == "<<b*1.5<<endl<<endl;
		cout<<"\tinteger first"<<endl;
		cout<<"\t2*b"<<endl;
		cout<<"\t{2,4,6} == "<<2*b<<endl<<endl;
		cout<<"\tinteger second"<<endl;
		cout<<"\tb*2"<<endl;
		cout<<"\t{2,4,6} == "<<b*2<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta*b"<<endl;
		cout<<"\t{2,4,6} == "<<a*b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt div"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta/b"<<endl;
		cout<<"\t{2,1,0.666667} == "<<a/b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting negation"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\t-b"<<endl;
		cout<<"\t{-1,-2,-3} == "<<-b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting +="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb+=b"<<endl;
		b+=b;
		cout<<"\t{2,4,6} == "<<b<<endl;
		cout<<"\tvalue of b reset to {1,2,3} using load"<<endl;
		b.load(_b);
		cout<<"\tb = "<<b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting -="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb-=b"<<endl;
		b-=b;
		cout<<"\t{0,0,0} == "<<b<<endl;
		cout<<"\tb is again reset"<<endl<<endl<<endl<<endl;
		b.load(_b);


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting exp"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\texp(b)"<<endl;
		cout<<"\t{2.71828,7.38905,20.0855} == "<<exp(b)<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting sqrt"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tsqrt(b)"<<endl;
		cout<<"\t{1,1.41421,1.7321} == "<<sqrt(b)<<endl<<endl<<endl;

	}



	//test n = 4
	{

		cout<<"============================================================================"<<endl;
		cout<<"*****************************Testing with n = 4*****************************"<<endl;
		cout<<"============================================================================"<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tAssingments"<<endl;
		cout<<"=========================================="<<endl;
		VectorSIMD4 a(2.0);

		cout<<"\tset 'a' with single double"<<endl;
		cout<<"\t{2,2,2,2} == " <<a<<endl<<endl;

		double _b[4] = {1.0, 2.0, 3.0,4.0};
		VectorSIMD4 b(_b);

		cout<<"\tset 'b' with double* "<<endl;
		cout<<"\t{1,2,3,4} == " << b <<endl<<endl;

		VectorSIMD4 c(3.0, 4.0,5.0,6.0);
		cout<<"\tset 'c' with 2 doubles"<<endl;
		cout<<"\t{3,4,5,6} == " <<c<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ttesting addition and assingment"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tc = a + b"<<endl;
		c = a + b;
		cout<<"\t{3,4,5,6} == "<<c<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\ttesting subtraction"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta - b"<<endl;
		cout<<"\t{1,0, -1,-2} == "<< (a - b)<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting scalar mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tdouble first"<<endl;
		cout<<"\t1.5*b"<<endl;
		cout<<"\t{1.5,3.0, 4.5, 6} == "<<1.5*b<<endl<<endl;
		cout<<"\tdouble second"<<endl;
		cout<<"\tb*1.5"<<endl;
		cout<<"\t{1.5,3.0, 4.5,6} == "<<b*1.5<<endl<<endl;
		cout<<"\tinteger first"<<endl;
		cout<<"\t2*b"<<endl;
		cout<<"\t{2,4,6,8} == "<<2*b<<endl<<endl;
		cout<<"\tinteger second"<<endl;
		cout<<"\tb*2"<<endl;
		cout<<"\t{2,4,6,8} == "<<b*2<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta*b"<<endl;
		cout<<"\t{2,4,6,8} == "<<a*b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt div"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta/b"<<endl;
		cout<<"\t{2,1,0.666667,0.5} == "<<a/b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting negation"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\t-b"<<endl;
		cout<<"\t{-1,-2,-3, -4} == "<<-b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting +="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb+=b"<<endl;
		b+=b;
		cout<<"\t{2,4,6,8} == "<<b<<endl;
		cout<<"\tvalue of b reset to {1,2,3,4} using load"<<endl;
		b.load(_b);
		cout<<"\tb = "<<b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting -="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb-=b"<<endl;
		b-=b;
		cout<<"\t{0,0,0,0} == "<<b<<endl;
		cout<<"\tb is again reset"<<endl<<endl<<endl<<endl;
		b.load(_b);


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting exp"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\texp(b)"<<endl;
		cout<<"\t{2.71828,7.38905,20.0855,54.5981} == "<<exp(b)<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting sqrt"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tsqrt(b)"<<endl;
		cout<<"\t{1,1.41421,1.7321,2} == "<<sqrt(b)<<endl<<endl<<endl;

	}

	//test n = 5
	{

		cout<<"============================================================================"<<endl;
		cout<<"*****************************Testing with n = 5*****************************"<<endl;
		cout<<"============================================================================"<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tAssingments"<<endl;
		cout<<"=========================================="<<endl;
		VectorSIMD5 a(2.0);

		cout<<"\tset 'a' with single double"<<endl;
		cout<<"\t{2,2,2,2,2} == " <<a<<endl<<endl;

		double _b[5] = {1.0, 2.0, 3.0,4.0,5.0};
		VectorSIMD5 b(_b);

		cout<<"\tset 'b' with double* "<<endl;
		cout<<"\t{1,2,3,4,5} == " << b <<endl<<endl;

		VectorSIMD5 c(3.0, 4.0,5.0,6.0,7.0);
		cout<<"\tset 'c' with 5 doubles"<<endl;
		cout<<"\t{3,4,5,6,7} == " <<c<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ttesting addition and assingment"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tc = a + b"<<endl;
		c = a + b;
		cout<<"\t{3,4,5,6,7} == "<<c<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\ttesting subtraction"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta - b"<<endl;
		cout<<"\t{1,0, -1,-2,-3} == "<< (a - b)<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting scalar mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tdouble first"<<endl;
		cout<<"\t1.5*b"<<endl;
		cout<<"\t{1.5,3.0, 4.5, 6, 7.5} == "<<1.5*b<<endl<<endl;
		cout<<"\tdouble second"<<endl;
		cout<<"\tb*1.5"<<endl;
		cout<<"\t{1.5,3.0, 4.5,6,7.5} == "<<b*1.5<<endl<<endl;
		cout<<"\tinteger first"<<endl;
		cout<<"\t2*b"<<endl;
		cout<<"\t{2,4,6,8,10} == "<<2*b<<endl<<endl;
		cout<<"\tinteger second"<<endl;
		cout<<"\tb*2"<<endl;
		cout<<"\t{2,4,6,8,10} == "<<b*2<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta*b"<<endl;
		cout<<"\t{2,4,6,8,10} == "<<a*b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt div"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta/b"<<endl;
		cout<<"\t{2,1,0.666667,0.5,0.4} == "<<a/b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting negation"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\t-b"<<endl;
		cout<<"\t{-1,-2,-3, -4, -5} == "<<-b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting +="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb+=b"<<endl;
		b+=b;
		cout<<"\t{2,4,6,8,10} == "<<b<<endl;
		cout<<"\tvalue of b reset to {1,2,3,4,5} using load"<<endl;
		b.load(_b);
		cout<<"\tb = "<<b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting -="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb-=b"<<endl;
		b-=b;
		cout<<"\t{0,0,0,0,0} == "<<b<<endl;
		cout<<"\tb is again reset"<<endl<<endl<<endl<<endl;
		b.load(_b);


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting exp"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\texp(b)"<<endl;
		cout<<"\t{2.71828,7.38905,20.0855,54.5981,148.4132} == "<<exp(b)<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting sqrt"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tsqrt(b)"<<endl;
		cout<<"\t{1,1.41421,1.7321,2,2.2361} == "<<sqrt(b)<<endl<<endl<<endl;

	}

	//test n = 6
	{

		cout<<"============================================================================"<<endl;
		cout<<"*****************************Testing with n = 6*****************************"<<endl;
		cout<<"============================================================================"<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tAssingments"<<endl;
		cout<<"=========================================="<<endl;
		VectorSIMD6 a(2.0);

		cout<<"\tset 'a' with single double"<<endl;
		cout<<"\t{2,2,2,2,2,2} == " <<a<<endl<<endl;

		double _b[6] = {1.0, 2.0, 3.0,4.0,5.0,6.0};
		VectorSIMD6 b(_b);

		cout<<"\tset 'b' with double* "<<endl;
		cout<<"\t{1,2,3,4,5,6} == " << b <<endl<<endl;

		VectorSIMD6 c(3.0, 4.0,5.0,6.0,7.0,8.0);
		cout<<"\tset 'c' with 5 doubles"<<endl;
		cout<<"\t{3,4,5,6,7,8} == " <<c<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ttesting addition and assingment"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tc = a + b"<<endl;
		c = a + b;
		cout<<"\t{3,4,5,6,7,8} == "<<c<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\ttesting subtraction"<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ta - b"<<endl;
		cout<<"\t{1,0, -1,-2,-3,-4} == "<< (a - b)<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting scalar mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tdouble first"<<endl;
		cout<<"\t1.5*b"<<endl;
		cout<<"\t{1.5,3.0, 4.5, 6, 7.5,9} == "<<1.5*b<<endl<<endl;
		cout<<"\tdouble second"<<endl;
		cout<<"\tb*1.5"<<endl;
		cout<<"\t{1.5,3.0, 4.5,6,7.5,9} == "<<b*1.5<<endl<<endl;
		cout<<"\tinteger first"<<endl;
		cout<<"\t2*b"<<endl;
		cout<<"\t{2,4,6,8,10,12} == "<<2*b<<endl<<endl;
		cout<<"\tinteger second"<<endl;
		cout<<"\tb*2"<<endl;
		cout<<"\t{2,4,6,8,10,12} == "<<b*2<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta*b"<<endl;
		cout<<"\t{2,4,6,8,10,12} == "<<a*b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt div"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta/b"<<endl;
		cout<<"\t{2,1,0.666667,0.5,0.4,0.33333} == "<<a/b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting negation"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\t-b"<<endl;
		cout<<"\t{-1,-2,-3, -4, -5, -6} == "<<-b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting +="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb+=b"<<endl;
		b+=b;
		cout<<"\t{2,4,6,8,10,12} == "<<b<<endl;
		cout<<"\tvalue of b reset to {1,2,3,4,5,6} using load"<<endl;
		b.load(_b);
		cout<<"\tb = "<<b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting -="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb-=b"<<endl;
		b-=b;
		cout<<"\t{0,0,0,0,0,0} == "<<b<<endl;
		cout<<"\tb is again reset"<<endl<<endl<<endl<<endl;
		b.load(_b);


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting exp"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\texp(b)"<<endl;
		cout<<"\t{2.71828,7.38905,20.0855,54.5981,148.4132,403.4288} == "<<endl<<"\t"<<exp(b)<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting sqrt"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tsqrt(b)"<<endl;
		cout<<"\t{1,1.41421,1.73205,2,2.23607,2.44949} == "<<endl<<"\t"<<sqrt(b)<<endl<<endl<<endl;

	}

	//test n = 7
	{

		cout<<"============================================================================"<<endl;
		cout<<"*****************************Testing with n = 7*****************************"<<endl;
		cout<<"============================================================================"<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tAssingments"<<endl;
		cout<<"=========================================="<<endl;
		VectorSIMD7 a(2.0);

		cout<<"\tset 'a' with single double"<<endl;
		cout<<"\t{2,2,2,2,2,2,2} == " <<a<<endl<<endl;

		double _b[7] = {1.0, 2.0, 3.0,4.0,5.0,6.0,7.0};
		VectorSIMD7 b(_b);

		cout<<"\tset 'b' with double* "<<endl;
		cout<<"\t{1,2,3,4,5,6,7} == " << b <<endl<<endl;

		VectorSIMD7 c(3.0, 4.0,5.0,6.0,7.0,8.0,9.0);
		cout<<"\tset 'c' with 5 doubles"<<endl;
		cout<<"\t{3,4,5,6,7,8,9} == " <<c<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ttesting addition and assingment"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tc = a + b"<<endl;
		c = a + b;
		cout<<"\t{3,4,5,6,7,8,9} == "<<c<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\ttesting subtraction"<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ta - b"<<endl;
		cout<<"\t{1,0, -1,-2,-3,-4,-5} == "<< (a - b)<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting scalar mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tdouble first"<<endl;
		cout<<"\t1.5*b"<<endl;
		cout<<"\t{1.5,3.0, 4.5, 6, 7.5,9,10.5} == "<<1.5*b<<endl<<endl;
		cout<<"\tdouble second"<<endl;
		cout<<"\tb*1.5"<<endl;
		cout<<"\t{1.5,3.0, 4.5,6,7.5,9,10.5} == "<<b*1.5<<endl<<endl;
		cout<<"\tinteger first"<<endl;
		cout<<"\t2*b"<<endl;
		cout<<"\t{2,4,6,8,10,12,14} == "<<2*b<<endl<<endl;
		cout<<"\tinteger second"<<endl;
		cout<<"\tb*2"<<endl;
		cout<<"\t{2,4,6,8,10,12,14} == "<<b*2<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta*b"<<endl;
		cout<<"\t{2,4,6,8,10,12,14} == "<<a*b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt div"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta/b"<<endl;
		cout<<"\t{2,1,0.666667,0.5,0.4,0.33333,0.2857} == "<<a/b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting negation"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\t-b"<<endl;
		cout<<"\t{-1,-2,-3, -4, -5, -6,-7} == "<<-b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting +="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb+=b"<<endl;
		b+=b;
		cout<<"\t{2,4,6,8,10,12,14} == "<<b<<endl;
		cout<<"\tvalue of b reset to {1,2,3,4,5,6,7} using load"<<endl;
		b.load(_b);
		cout<<"\tb = "<<b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting -="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb-=b"<<endl;
		b-=b;
		cout<<"\t{0,0,0,0,0,0,0} == "<<b<<endl;
		cout<<"\tb is again reset"<<endl<<endl<<endl<<endl;
		b.load(_b);


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting exp"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\texp(b)"<<endl;
		cout<<"\t{2.71828,7.38905,20.0855,54.5981,148.413,403.429,1096.63} == "<<endl<<"\t"<<exp(b)<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting sqrt"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tsqrt(b)"<<endl;
		cout<<"\t{1,1.41421,1.73205,2,2.23607,2.44949,2.64575} == "<<endl<<"\t"<<sqrt(b)<<endl<<endl<<endl;

	}

	//test n = 8
	{

		cout<<"============================================================================"<<endl;
		cout<<"*****************************Testing with n = 8*****************************"<<endl;
		cout<<"============================================================================"<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tAssingments"<<endl;
		cout<<"=========================================="<<endl;
		VectorSIMD8 a(2.0);

		cout<<"\tset 'a' with single double"<<endl;
		cout<<"\t{2,2,2,2,2,2,2,2} == " <<a<<endl<<endl;

		double _b[8] = {1.0, 2.0, 3.0,4.0,5.0,6.0,7.0,8.0};
		VectorSIMD8 b(_b);

		cout<<"\tset 'b' with double* "<<endl;
		cout<<"\t{1,2,3,4,5,6,7,8} == " << b <<endl<<endl;

		VectorSIMD8 c(3.0, 4.0,5.0,6.0,7.0,8.0,9.0,10.0);
		cout<<"\tset 'c' with 8 doubles"<<endl;
		cout<<"\t{3,4,5,6,7,8,9,10} == " <<c<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ttesting addition and assingment"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tc = a + b"<<endl;
		c = a + b;
		cout<<"\t{3,4,5,6,7,8,9,10} == "<<c<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\ttesting subtraction"<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ta - b"<<endl;
		cout<<"\t{1,0, -1,-2,-3,-4,-5,-6} == "<< (a - b)<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting scalar mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tdouble first"<<endl;
		cout<<"\t1.5*b"<<endl;
		cout<<"\t{1.5,3.0, 4.5, 6, 7.5,9,10.5,12} == "<<1.5*b<<endl<<endl;
		cout<<"\tdouble second"<<endl;
		cout<<"\tb*1.5"<<endl;
		cout<<"\t{1.5,3.0, 4.5,6,7.5,9,10.5,12} == "<<b*1.5<<endl<<endl;
		cout<<"\tinteger first"<<endl;
		cout<<"\t2*b"<<endl;
		cout<<"\t{2,4,6,8,10,12,14,16} == "<<2*b<<endl<<endl;
		cout<<"\tinteger second"<<endl;
		cout<<"\tb*2"<<endl;
		cout<<"\t{2,4,6,8,10,12,14,16} == "<<b*2<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta*b"<<endl;
		cout<<"\t{2,4,6,8,10,12,14,16} == "<<a*b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt div"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta/b"<<endl;
		cout<<"\t{2,1,0.666667,0.5,0.4,0.33333,0.2857,0.2500} == "<<a/b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting negation"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\t-b"<<endl;
		cout<<"\t{-1,-2,-3, -4, -5, -6,-7,-8} == "<<-b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting +="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb+=b"<<endl;
		b+=b;
		cout<<"\t{2,4,6,8,10,12,14,16} == "<<b<<endl;
		cout<<"\tvalue of b reset to {1,2,3,4,5,6,7,8} using load"<<endl;
		b.load(_b);
		cout<<"\tb = "<<b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting -="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb-=b"<<endl;
		b-=b;
		cout<<"\t{0,0,0,0,0,0,0,0} == "<<b<<endl;
		cout<<"\tb is again reset"<<endl<<endl<<endl<<endl;
		b.load(_b);


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting exp"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\texp(b)"<<endl;
		cout<<"\t{2.71828,7.38905,20.0855,54.5981,148.413,403.429,1096.63,2980.96} == "<<endl<<"\t"<<exp(b)<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting sqrt"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tsqrt(b)"<<endl;
		cout<<"\t{1,1.41421,1.73205,2,2.23607,2.44949,2.64575,2.8284} == "<<endl<<"\t"<<sqrt(b)<<endl<<endl<<endl;

	}


	//test n = 9
	{

		cout<<"============================================================================"<<endl;
		cout<<"*****************************Testing with n = 9*****************************"<<endl;
		cout<<"============================================================================"<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tAssingments"<<endl;
		cout<<"=========================================="<<endl;
		VectorSIMD9 a(2.0);

		cout<<"\tset 'a' with single double"<<endl;
		cout<<"\t{2,2,2,2,2,2,2,2,2} == " <<a<<endl<<endl;

		double _b[9] = {1.0, 2.0, 3.0,4.0,5.0,6.0,7.0,8.0,9.0};
		VectorSIMD9 b(_b);

		cout<<"\tset 'b' with double* "<<endl;
		cout<<"\t{1,2,3,4,5,6,7,8,9} == " << b <<endl<<endl;

		VectorSIMD9 c(3.0, 4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0);
		cout<<"\tset 'c' with 8 doubles"<<endl;
		cout<<"\t{3,4,5,6,7,8,9,10,11} == " <<c<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ttesting addition and assingment"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tc = a + b"<<endl;
		c = a + b;
		cout<<"\t{3,4,5,6,7,8,9,10,11} == "<<c<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\ttesting subtraction"<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ta - b"<<endl;
		cout<<"\t{1,0, -1,-2,-3,-4,-5,-6,-7} == "<< (a - b)<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting scalar mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tdouble first"<<endl;
		cout<<"\t1.5*b"<<endl;
		cout<<"\t{1.5,3.0, 4.5, 6, 7.5,9,10.5,12,13.5} == "<<1.5*b<<endl<<endl;
		cout<<"\tdouble second"<<endl;
		cout<<"\tb*1.5"<<endl;
		cout<<"\t{1.5,3.0, 4.5,6,7.5,9,10.5,12,13.5} == "<<b*1.5<<endl<<endl;
		cout<<"\tinteger first"<<endl;
		cout<<"\t2*b"<<endl;
		cout<<"\t{2,4,6,8,10,12,14,16,18} == "<<2*b<<endl<<endl;
		cout<<"\tinteger second"<<endl;
		cout<<"\tb*2"<<endl;
		cout<<"\t{2,4,6,8,10,12,14,16,18} == "<<b*2<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta*b"<<endl;
		cout<<"\t{2,4,6,8,10,12,14,16,18} == "<<a*b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt div"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta/b"<<endl;
		cout<<"\t{2,1,0.666667,0.5,0.4,0.33333,0.2857,0.25,0.2222} == "<<a/b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting negation"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\t-b"<<endl;
		cout<<"\t{-1,-2,-3, -4, -5, -6,-7,-8,-9} == "<<-b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting +="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb+=b"<<endl;
		b+=b;
		cout<<"\t{2,4,6,8,10,12,14,16,18} == "<<b<<endl;
		cout<<"\tvalue of b reset to {1,2,3,4,5,6,7,8,9} using load"<<endl;
		b.load(_b);
		cout<<"\tb = "<<b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting -="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb-=b"<<endl;
		b-=b;
		cout<<"\t{0,0,0,0,0,0,0,0,0} == "<<b<<endl;
		cout<<"\tb is again reset"<<endl<<endl<<endl<<endl;
		b.load(_b);


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting exp"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\texp(b)"<<endl;
		cout<<"\t{2.71828,7.38905,20.0855,54.5981,141.813,403.429,1096.63,2980.96,8109.08} == "<<endl<<"\t"<<exp(b)<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting sqrt"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tsqrt(b)"<<endl;
		cout<<"\t{1,1.41421,1.73205,2,2.23607,2.44949,2.64575,2.8284,3.0} == "<<endl<<"\t"<<sqrt(b)<<endl<<endl<<endl;

	}


	//test n = 10
	{

		cout<<"============================================================================"<<endl;
		cout<<"*****************************Testing with n = 10*****************************"<<endl;
		cout<<"============================================================================"<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tAssingments"<<endl;
		cout<<"=========================================="<<endl;
		VectorSIMD10 a(2.0);

		cout<<"\tset 'a' with single double"<<endl;
		cout<<"\t{2,2,2,2,2,2,2,2,2,2} == \n\t" <<a<<endl<<endl;

		double _b[10] = {1.0, 2.0, 3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};
		VectorSIMD10 b(_b);

		cout<<"\tset 'b' with double* "<<endl;
		cout<<"\t{1,2,3,4,5,6,7,8,9,10} == \n\t" << b <<endl<<endl;

		VectorSIMD10 c(3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0,12.0);
		cout<<"\tset 'c' with 10 doubles"<<endl;
		cout<<"\t{3,4,5,6,7,8,9,10,11,12} == \n\t" <<c<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ttesting addition and assingment"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tc = a + b"<<endl;
		c = a + b;
		cout<<"\t{3,4,5,6,7,8,9,10,11,12} == \n\t"<<c<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\ttesting subtraction"<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ta - b"<<endl;
		cout<<"\t{1,0, -1,-2,-3,-4,-5,-6,-7,-8,-9} == \n\t"<< (a - b)<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting scalar mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tdouble first"<<endl;
		cout<<"\t1.5*b"<<endl;
		cout<<"\t{1.5,3.0,4.5,6,7.5,9,10.5,12,13.5,15} ==\n\t "<<1.5*b<<endl<<endl;
		cout<<"\tdouble second"<<endl;
		cout<<"\tb*1.5"<<endl;
		cout<<"\t{1.5,3.0, 4.5,6,7.5,9,10.5,12,13.5,15} == \n\t"<<b*1.5<<endl<<endl;
		cout<<"\tinteger first"<<endl;
		cout<<"\t2*b"<<endl;
		cout<<"\t{2,4,6,8,10,12,14,16,18,20} == \n\t"<<2*b<<endl<<endl;
		cout<<"\tinteger second"<<endl;
		cout<<"\tb*2"<<endl;
		cout<<"\t{2,4,6,8,10,12,14,16,18,20} == \n\t"<<b*2<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta*b"<<endl;
		cout<<"\t{2,4,6,8,10,12,14,16,18,20} == \n\t"<<a*b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt div"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta/b"<<endl;
		cout<<"\t{2,1,0.666667,0.5,0.4,0.33333,0.2857,0.25,0.2222,0.2} == \n\t"<<a/b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting negation"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\t-b"<<endl;
		cout<<"\t{-1,-2,-3,-4,-5,-6,-7,-8,-9,-10} == \n\t"<<-b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting +="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb+=b"<<endl;
		b+=b;
		cout<<"\t{2,4,6,8,10,12,14,16,18,20} == \n\t"<<b<<endl;
		cout<<"\n\tvalue of b reset to {1,2,3,4,5,6,7,8,9} using load"<<endl;
		b.load(_b);
		cout<<"\tb = "<<b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting -="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb-=b"<<endl;
		b-=b;
		cout<<"\t{0,0,0,0,0,0,0,0,0,0} == \n\t"<<b<<endl;
		cout<<"\tb is again reset"<<endl<<endl<<endl<<endl;
		b.load(_b);


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting exp"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\texp(b)"<<endl;
		cout<<"\t{2.71828,7.38905,20.0855,54.5981,148.413,403.429,1096.63,2980.96,8109.08,22026.5} == "<<endl<<"\t"<<exp(b)<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting sqrt"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tsqrt(b)"<<endl;
		cout<<"\t{1,1.41421,1.73205,2,2.23607,2.44949,2.64575,2.8284,3.0,3.16228} == "<<endl<<"\t"<<sqrt(b)<<endl<<endl<<endl;

	}



	//test n = 11
	{

		cout<<"============================================================================"<<endl;
		cout<<"*****************************Testing with n = 11*****************************"<<endl;
		cout<<"============================================================================"<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tAssingments"<<endl;
		cout<<"=========================================="<<endl;
		VectorSIMD11 a(2.0);

		cout<<"\tset 'a' with single double"<<endl;
		cout<<"\t{2,2,2,2,2,2,2,2,2,2,2} == \n\t" <<a<<endl<<endl;

		double _b[11] = {1.0, 2.0, 3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0};
		VectorSIMD11 b(_b);

		cout<<"\tset 'b' with double* "<<endl;
		cout<<"\t{1,2,3,4,5,6,7,8,9,10,11} == \n\t" << b <<endl<<endl;

		VectorSIMD11 c(3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0,12.0,13.0);
		cout<<"\tset 'c' with 11 doubles"<<endl;
		cout<<"\t{3,4,5,6,7,8,9,10,11,12,13} == \n\t" <<c<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ttesting addition and assingment"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tc = a + b"<<endl;
		c = a + b;
		cout<<"\t{3,4,5,6,7,8,9,10,11,12,13} == \n\t"<<c<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\ttesting subtraction"<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ta - b"<<endl;
		cout<<"\t{1,0, -1,-2,-3,-4,-5,-6,-7,-8,-9} == \n\t"<< (a - b)<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting scalar mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tdouble first"<<endl;
		cout<<"\t1.5*b"<<endl;
		cout<<"\t{1.5,3.0,4.5,6,7.5,9,10.5,12,13.5,15,16.5} ==\n\t"<<1.5*b<<endl<<endl;
		cout<<"\tdouble second"<<endl;
		cout<<"\tb*1.5"<<endl;
		cout<<"\t{1.5,3.0, 4.5,6,7.5,9,10.5,12,13.5,15,16.5} == \n\t"<<b*1.5<<endl<<endl;
		cout<<"\tinteger first"<<endl;
		cout<<"\t2*b"<<endl;
		cout<<"\t{2,4,6,8,10,12,14,16,18,20,22} == \n\t"<<2*b<<endl<<endl;
		cout<<"\tinteger second"<<endl;
		cout<<"\tb*2"<<endl;
		cout<<"\t{2,4,6,8,10,12,14,16,18,20,22} == \n\t"<<b*2<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta*b"<<endl;
		cout<<"\t{2,4,6,8,10,12,14,16,18,20,22} == \n\t"<<a*b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt div"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta/b"<<endl;
		cout<<"\t{2,1,0.666667,0.5,0.4,0.33333,0.2857,0.25,0.2222,0.2,18182} == \n\t"<<a/b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting negation"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\t-b"<<endl;
		cout<<"\t{-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11} == \n\t"<<-b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting +="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb+=b"<<endl;
		b+=b;
		cout<<"\t{2,4,6,8,10,12,14,16,18,20,22} == \n\t"<<b<<endl;
		cout<<"\n\tvalue of b reset to {1,2,3,4,5,6,7,8,9,10,11} using load"<<endl;
		b.load(_b);
		cout<<"\tb = "<<b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting -="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb-=b"<<endl;
		b-=b;
		cout<<"\t{0,0,0,0,0,0,0,0,0,0,0} == \n\t"<<b<<endl;
		cout<<"\tb is again reset"<<endl<<endl<<endl<<endl;
		b.load(_b);


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting exp"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\texp(b)"<<endl;
		cout<<"\t{2.71828,7.38905,20.0855,54.5981,148.413,403.429,1096.63,2980.96,8109.08,22026.5,59874.1} == "<<endl<<"\t"<<exp(b)<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting sqrt"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tsqrt(b)"<<endl;
		cout<<"\t{1,1.41421,1.73205,2,2.23607,2.44949,2.64575,2.8284,3.0,3.16228,3.3166} == "<<endl<<"\t"<<sqrt(b)<<endl<<endl<<endl;

	}

	//test n = 12
	{

		cout<<"============================================================================"<<endl;
		cout<<"*****************************Testing with n = 12*****************************"<<endl;
		cout<<"============================================================================"<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tAssingments"<<endl;
		cout<<"=========================================="<<endl;
		VectorSIMD12 a(2.0);

		cout<<"\tset 'a' with single double"<<endl;
		cout<<"\t{2,2,2,2,2,2,2,2,2,2,2,2} == \n\t" <<a<<endl<<endl;

		double _b[12] = {1.0, 2.0, 3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0,12.0};
		VectorSIMD12 b(_b);

		cout<<"\tset 'b' with double* "<<endl;
		cout<<"\t{1,2,3,4,5,6,7,8,9,10,11,12} == \n\t" << b <<endl<<endl;

		VectorSIMD12 c(3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0,12.0,13.0,14.0);
		cout<<"\tset 'c' with 12 doubles"<<endl;
		cout<<"\t{3,4,5,6,7,8,9,10,11,12,13,14} == \n\t" <<c<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ttesting addition and assingment"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tc = a + b"<<endl;
		c = a + b;
		cout<<"\t{3,4,5,6,7,8,9,10,11,12,13,14} == \n\t"<<c<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\ttesting subtraction"<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\ta - b"<<endl;
		cout<<"\t{1,0, -1,-2,-3,-4,-5,-6,-7,-8,-9,-10} == \n\t"<< (a - b)<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting scalar mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tdouble first"<<endl;
		cout<<"\t1.5*b"<<endl;
		cout<<"\t{1.5,3.0,4.5,6,7.5,9,10.5,12,13.5,15,16.5,18} ==\n\t"<<1.5*b<<endl<<endl;
		cout<<"\tdouble second"<<endl;
		cout<<"\tb*1.5"<<endl;
		cout<<"\t{1.5,3.0, 4.5,6,7.5,9,10.5,12,13.5,15,16.5,18} == \n\t"<<b*1.5<<endl<<endl;
		cout<<"\tinteger first"<<endl;
		cout<<"\t2*b"<<endl;
		cout<<"\t{2,4,6,8,10,12,14,16,18,20,22,24} == \n\t"<<2*b<<endl<<endl;
		cout<<"\tinteger second"<<endl;
		cout<<"\tb*2"<<endl;
		cout<<"\t{2,4,6,8,10,12,14,16,18,20,22,24} == \n\t"<<b*2<<endl<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt mult"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta*b"<<endl;
		cout<<"\t{2,4,6,8,10,12,14,16,18,20,22,24} == \n\t"<<a*b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting elt div"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\ta/b"<<endl;
		cout<<"\t{2,1,0.666667,0.5,0.4,0.33333,0.2857,0.25,0.2222,0.2,18182,0.16666} == \n\t"<<a/b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting negation"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\t-b"<<endl;
		cout<<"\t{-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-12} == \n\t"<<-b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting +="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb+=b"<<endl;
		b+=b;
		cout<<"\t{2,4,6,8,10,12,14,16,18,20,22,24} == \n\t"<<b<<endl;
		cout<<"\n\tvalue of b reset to {1,2,3,4,5,6,7,8,9,10,11,12} using load"<<endl;
		b.load(_b);
		cout<<"\tb = "<<b<<endl<<endl<<endl<<endl;

		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting -="<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tb-=b"<<endl;
		b-=b;
		cout<<"\t{0,0,0,0,0,0,0,0,0,0,0,0} == \n\t"<<b<<endl;
		cout<<"\tb is again reset"<<endl<<endl<<endl<<endl;
		b.load(_b);


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting exp"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\texp(b)"<<endl;
		cout<<"\t{2.71828,7.38905,20.0855,54.5981,148.413,403.429,1096.63,2980.96,8109.08,22026.5,59874.1,162754.79} == "<<endl<<"\t"<<exp(b)<<endl<<endl<<endl;


		cout<<"=========================================="<<endl;
		cout<<"\t\tTesting sqrt"<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\tsqrt(b)"<<endl;
		cout<<"\t{1,1.41421,1.73205,2,2.23607,2.44949,2.64575,2.8284,3.0,3.16228,3.3166,3.46410} == "<<endl<<"\t"<<sqrt(b)<<endl<<endl<<endl;

	}







return 0;


}

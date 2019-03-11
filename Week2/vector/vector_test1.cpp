// vector_test1.cpp

#include <vector>
#include <iostream>


void PrintVector() {

}


auto main() -> int {

	const int func1();
	const int& func2();
	int i;

	struct X { double d; };
	const X* x = new X();

	
	//	Declaring	const	int	variable
	//	using	func1()	type
	decltype(func1()) f1;

	//	Declaring	const	int&	variable
	//	using	func2()	type
	decltype(func2()) f2;

	//	Declaring	int	variable
	//	using	i	type
	decltype(i) i1;

	//	Declaring	double	variable
	//	using	struct	X	type
	decltype(x -> d) d1; //	type	is	double
	decltype((x -> d)) d2; //	type	is	const	double&


	return 0;
}
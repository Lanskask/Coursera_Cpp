// const2.cpp

#include <iostream>
#include <vector>
#include <string>

using namespace std;


auto main() -> int {
	const std::vector<string> w = {"hellow"};
	// w[0][0] = 'H';
	std::cout << w[0];
	return 0;
}
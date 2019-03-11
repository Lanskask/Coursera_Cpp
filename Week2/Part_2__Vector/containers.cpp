// containers.cpp

#include <iostream>
#include <vector>

using namespace std;

void PrintVector(const std::vector<string>& v) {
	for (string s : v) {
		cout << s << " ";
	}
	std::cout <<  endl;
}


int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	
	// vector<string> v(n);
	vector<string> v;
	
	// for (string& s: v) {
	// 	cin >> s;
	// }

	int i = 0;
	while (i < n) {
		string s;
		cin >> s;
		v.push_back(s);
		cout << "Vector size: " << v.size() << endl;
		++i;
	}


	PrintVector(v);

	return 0;
}
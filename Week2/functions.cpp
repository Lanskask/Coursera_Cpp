#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


bool Contains(vector<string> words, string w) {
	for (auto s : words) {
		if (s == w) {
			return true;
		}
	}
	return false;
}

int Sum(int a, int b) {
	return a + b;
}

int ChangeInt(int x) {
	x = 42;
}


void Swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void Sort(vector<int>& v) {
	sort(begin(v), end(v));
}


int main(int argc, char **argv) {
	// --------
	// int a, b;
	// cin >> a >> b;
	// cout << Sum(a, b) << endl;   
	
	// --------
    // cout << Contains({"air", "water", "fire"}, "fire") << endl; 
    // cout << Contains({"air", "water", "fire"}, "animal") << endl; 

	// --------
	// int a = 5;
	// ChangeInt(a);
	// cout << a << endl;

	// --------
	// int a = 1; int b = 2;
	// Swap(a, b);

	// cout << "a = " << a << endl; // a = 2
	// cout << "b = " << b << endl; // b = 1

	vector<int> nums = {3,6,1,2,0,2};

	// sort(begin(nums), end(nums));
	Sort(nums);
	for (auto x : nums) {
		cout << x << " ";
	}

	return 0;
}

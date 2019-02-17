#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
	vector<int> nums = {3,1,2,5,3,4,5};
	int quality = count(begin(nums), end(nums), 5);

	// int quality = 0;
	// for (auto x : nums) {
	// 	if (x == 5) {
	// 		quality += 1;
	// 	}
	// }
	cout << "There are " 
		<< quality << " fives";

	sort(begin(nums), end(nums));
	
	cout << endl;
	for (auto x : nums) {
		cout << x << ", ";		
	}
	cout << endl;


	vector<string> nums2 = {"hello", "world", "beautiful"};
	sort(begin(nums2), end(nums2));
	
	for (auto x : nums2) {
		cout << x << ", ";		
	}


	return 0;
}

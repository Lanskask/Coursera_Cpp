// vector2.cpp

#include <iostream>
#include <vector>

using namespace std;


template <typename T> 
void print_with_space(T x){
  std::cout << x << ' ';
}

// std::for_each(beg, end, [](const typename T::value_type& value) {
//     print_with_space(value);
// });

// template<typename t>
// 	void PrintVector(const std::vector<t>& v) {
// 	for (auto s : v) {
// 		cout << s << " ";
// 	}
// 	std::cout <<  endl;
// }

void PrintVector(const std::vector<bool>& v) {
	int i = 0;
	for (auto s : v) {
		cout << i << ": " << s << endl;
		i++;
	}
	std::cout <<  endl;
}

bool ifLeap() {
	return true;
}

int main(int argc, char const *argv[]) {
	vector<int> days_in_months = {31, 28, 31, 30, 31};

	if (ifLeap()) {
		++days_in_months[1];
	}
	// PrintVector(days_in_months);

	std::vector<bool> is_holiday(28, false);
	is_holiday[22] = true;

	// PrintVector(is_holiday);

	// is_holiday.resize(31);
	is_holiday.assign(31, false);
	is_holiday[7] = true;
	PrintVector(is_holiday);

	is_holiday.clear();
	PrintVector(is_holiday);
	
	return 0;
}
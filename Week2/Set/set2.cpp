// set2.cpp

#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

void PrintSet(set<string>& s) {
	cout << "Size = " << s.size() << endl;
	for (const auto& item : s) {
		cout << item << endl;
	}
	std::cout << endl;
}

int main(int argc, char const *argv[])
{
	set<string> famous_persons;

	famous_persons.insert("Stroustrup");
	famous_persons.insert("Ritchie");

	PrintSet(famous_persons);

	famous_persons.insert("Anton");
	PrintSet(famous_persons);

	famous_persons.erase("Anton");
	PrintSet(famous_persons);


	set<string> month_names = {"January", "March", "February", "March"};
	set <string> other_month_names = {"March", "January", "February"};

	std::cout << month_names.count("January") << endl;

	map<string, int> months = {{"January", 1}, {"February", 2}};
	cout << "month_names.count(\"January\"): " << month_names.count("January") << endl;

	vector<string> v = {"a", "b", "c", "a"};
	set<string> s(begin(v), end(v));

	PrintSet(s);

	return 0;
}
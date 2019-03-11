// set1.cpp

#include <iostream>
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

	return 0;
}
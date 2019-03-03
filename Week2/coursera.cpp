#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;

struct Person {
	string name;
	string surname;
	int age;
};

// vector<Person> GetMoscowPopulation();
vector<Person> GetMoscowPopulation() {
	vector<Person> staff;
	staff.push_back({"Ivan", "Ivanov", 25});

	return staff;
}


void PrintPopulationSize(std::vector<Person> p) {
	cout << "There are " << p.size() << " people ein Moscow" << endl;
}

int main(int argc, char const *argv[]) {
	vector<Person> staff;
	staff.push_back({"Ivan", "Ivanov", 25});

	auto start = steady_clo
	vector<Person> people = GetMoscowPopulation();
	PrintPopulationSize(people);

	return 0;
}
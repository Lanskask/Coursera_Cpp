// map1.cpp

#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> BuildReversedMap(const map<int, string>& m) {
	map<string, int> res;
	for(auto item : m) {
		res[item.second] = item.first;
	}
	return res;
}


void PrintMap(const map<int, string>& m) {
	cout << "Size: " << m.size() << endl;
	for (auto item : m ) {
		cout << item.first << ": " << item.second << endl;
	}
	std::cout << endl;
}

void PrintReversedMap(const map<string, int>& m) {
	cout << "Size: " << m.size() << endl;
	for (auto item : m ) {
		cout << item.first << ": " << item.second << endl;
	}
	std::cout << endl;
}


int main(int argc, char const *argv[]) {
	map<int, string> events;
	events[1950] = "Bjarne Straustrup's birth";
	events[1941] = "Dennis Ritchie's birth";
	events[1970] = "UNIX epoch start";

	PrintMap(events);

	cout << events[1970] << endl;

	events.erase(1970);
	PrintMap(events);


	map<string, int> res = BuildReversedMap(events);
	PrintReversedMap(res);

	cout << res["Bjarne Straustrup's birth"] << endl;
	return 0;
}

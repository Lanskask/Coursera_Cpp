// map2.cpp

#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;


void PrintMap(const map<string, int>& m) {
	cout << "Size: " << m.size() << endl;
	for (const auto& item : m ) {
		cout << item.first << ": " << item.second << endl;
	}
	std::cout << endl;
}

void PrintMapCharVector(const map<char, vector<string>>& m) {
	for (const auto& item : m) {
		cout << item.first << endl;
		for (const auto& it: item.second) {
			cout << it << " ";
		}
		cout << endl;
	}
	std::cout << endl;
}

void PrintMap17(const map<string, int>& m) {
	cout << "Size: " << m.size() << endl;
	for (const auto& [key, value] : m ) {
		cout << key << ": " << value << endl;
	}
	std::cout << endl;
}


int main(int argc, char const *argv[]) {
	map<string, int> m = {{"one", 1}, {"two", 2}, {"three", 3}};
	PrintMap17(m);
	
	// PrintMap(m);

	// m.erase("three");
	// PrintMap(m);

	vector<string> words = {"one", "two", "one"};
	map<string, int> counter;

	for (const string& word : words) {
		// PrintMap(counter);
		// if(counter.count(word) == 0) {
		// 	counter[word] = 1;
		// } else {
		// 	counter[word]++;
		// }
 		counter[word]++;
	}

	// PrintMap(counter);


	vector<string> words2 = {"one", "two", "three"};
	map<char, vector<string>> grouped_words;
	for (const auto& word : words2) {
		grouped_words[word[0]].push_back(word);
	} 


	PrintMapCharVector(grouped_words);



	return 0;
}

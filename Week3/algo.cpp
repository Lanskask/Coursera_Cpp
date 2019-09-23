#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>

using namespace std;



void PrintVector(const vector<int>& v) {
  cout << "Size: " << v.size() << endl;
  // for (auto item : v ) { 
  for (const auto& item : v ) { 
    cout << item << ", ";
  }
  cout << endl;
}  

bool Lt2(int x) {
  if (x < 2) {
    return true;
  }
  return false;
}



int main(int argc, char **argv) {

  vector<int> v {1,1,5,8,3,6,4,9};

  int thr = 3;
  // cin >> thr;

  // cout << count_if(begin(v), end(v), [](int x) {
  cout << count_if(begin(v), end(v), [thr](int x) {
    if (x > thr) {
      return true;
    }
    return false;
  });
  cout << endl;    

  PrintVector(v);

  // =========
  for (int i = 0; i < v.size(); ++i) {
    ++v[i];
  }
  PrintVector(v);

  // с & мы получаем напрямую доступ к объет=ктам по кот. мы итерируемся, а не получаем копию
  // for (auto elem : v) { 
  for (auto& elem : v) { 
    ++elem;
  }

  PrintVector(v);
	return 0;
}

// copy_if_example.cpp
// copy_if example
#include <iostream>     // std::cout
#include <algorithm>    // std::copy_if, std::distance
#include <vector>       // std::vector


std::vector<int> filterEven(std::vector<int>& foo) {
  std::vector<int> bar (foo.size());

  auto it = std::copy_if (
    foo.begin(), 
    foo.end(), 
    bar.begin(), 
    [](int i) {
      return i % 2 == 0;
    } 
  );
  bar.resize(std::distance(bar.begin(),it));  // shrink container to new size
  return bar;
};

void printArrayContent(std::vector<int>& array) {
  std::cout << "array contains:";
  for (int& x: array) std::cout << ' ' << x;
  std::cout << std::endl;
}

int main () {
  std::vector<int> foo = {25,15,5,-5,-15,2,4,8,6, -8, -6};

  std::vector<int> bar = filterEven(foo);


  printArrayContent(foo);
  printArrayContent(bar);

  return 0;
}

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>

using namespace std;

void PrintInt() {
  int x;
  cout << x << endl;
}

void PrintDouble() {
  double x = 3.14;
  cout << x << endl;
}

void PrintParity(int x) {
  string parity = (x % 2 == 0) ? "even" : "odd";
  
  // string parity;
  // if (x % 2 == 0) {
  //   parity = "even";
  // } else {
  //   parity = "odd";
  // }

  cout << x << " is " << parity << endl;
}

string GetPositivity(int x) {
  if (x > 0) {
    return "positive";
  } else if (x < 0) {
    return "negative";
  } else {
    return "zero";
  }
}

void PrintPositivity(int x) {
  string answ = GetPositivity(x);
  // string answ = (x > 0) ? "even" : "odd";

  // if (x > 0) {
  //   answ = "positive";
  // } else if (x < 0) {
  //   answ = "negative";
  // } else {
  //   answ = "zero";
  // } 


  cout << x << " is " << answ << endl;
}



int main(int argc, char **argv) {
  // PrintInt();
  // PrintDouble();
  // PrintInt();

  PrintParity(5);
  PrintPositivity(-5);

  return 0;
}

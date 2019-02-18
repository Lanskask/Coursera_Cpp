#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    
   // int x = 4;
   // int y = 5;

   // if (x == y) {
   //    cout << "equals";
   // } else {
   //    cout << "not equals";
   // }

   int n = 5;
   int sum = 0;
   for (int i = 0; i <= n; ++i) {
      sum += i;
   }
   cout << sum;

   int n2 = 5;
   int sum2 = 0;
   int i2 = 1;
   while ( i2 <= n) {
      sum2 += i2;
      i2 += 1;
   }
   cout << sum2;


   return 0;
}

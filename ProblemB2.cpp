/*
   This program performs arithmetic calculations
   on declared integers and output the result
*/

#include <iostream>
using namespace std;

int main()
{
   int a = 4;
   int b = 2;
   int c = 2;

   c += b;
   c = b + (a * c);

   cout << "result: " << c << endl;

   return 0;
}

/* Execution results:
   result: 18
*/
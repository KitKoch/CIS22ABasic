/*
   This program generates 3 random int between
   0 and 9, calculation then prints each number
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
   int ranNum1 = rand() % 10;
   double sqrtNum1 = sqrt(static_cast<double>(ranNum1));
   cout << "Random Number 1: " << ranNum1 << " | Square Root Random Number 1: " << sqrtNum1 << endl;

   int ranNum2 = rand() % 10;
   double sqrtNum2 = sqrt(static_cast<double>(ranNum2));
   cout << "Random Number 2: " << ranNum2 << " | Square Root Random Number 2: " << sqrtNum2 << endl;

   int ranNum3 = rand() % 10;
   double sqrtNum3 = sqrt(static_cast<double>(ranNum3));
   cout << "Random Number 3: " << ranNum3 << " | Square Root Random Number 3: " << sqrtNum3 << endl;

   return 0;
}

/* Execution Results:
   Random Number 1: 1 | Square Root Random Number 1: 1
   Random Number 2: 7 | Square Root Random Number 2: 2.64575
   Random Number 3: 4 | Square Root Random Number 3: 2
*/
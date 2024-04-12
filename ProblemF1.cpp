/*
   This program allows user to enter
   a series of + ints, terminates
   with a - int, it identifies smallest
   + int entereds
*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
   int smallestNum = INT_MAX, numInput;

   cout << "Please enter a series of positive integers, stop with a negative integer : " << endl;

   while (true)
   {
      cin >> numInput;

      if (numInput < 0)
      {
         break;
      }

      if (numInput > 0 && numInput < smallestNum)
      {
         smallestNum = numInput;
      }
   }

   if (smallestNum == INT_MAX)
   {
      cout << "No input" << endl;
   }
   else
   {
      cout << "Smallest positive integer entered : " << smallestNum << endl;
   }

   return 0;
}

/* Execution Results:
   Test Case 1:
   Please enter a series of positive integers, stop with a negative integer :
   65
   21
   12
   99
   -1
   Smallest positive integer entered : 12

   Test Case 2:
   Please enter a series of positive integers, stop with a negative integer :
   -1
   No input

   Test Case 3:
   Please enter a series of positive integers, stop with a negative integer :
   99
   155
   42
   105
   -100
   Smallest positive integer entered : 42
*/
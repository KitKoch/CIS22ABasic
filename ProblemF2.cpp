/*
   This program allows user to enter
   2 ints range 1 to 20, second int
   >= first. Then prints a table
   and shows the ints and their square
   roots
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   int firstNum, secondNum;

   while (true)
   {
      cout << "Please enter first of 2 integers (at least 1 and not larger than 20) : ";
      cin >> firstNum;
      cout << "Please enter second of 2 integers (at least 1, not larger than 20 and larger/equal to previous number) : ";
      cin >> secondNum;

      if (firstNum >= 1 && firstNum <= 20 && secondNum >= 1 && secondNum <= 20 && secondNum >= firstNum)
      {
         break;
      }
      else
      {
         cout << "Error. Invalid input. Please try again" << endl;
      }
   }

   cout << setw(7) << "INTEGER" << setw(13) << "SQUARE ROOT" << endl;
   for (int i = firstNum; i <= secondNum; ++i)
   {
      cout << fixed << setprecision(4) << setw(7) << i << setw(13) << sqrt(i) << endl;
   }

   return 0;
}

/* Execution Results:
   Test Case 1:
   Please enter first of 2 integers (at least 1 and not larger than 20) : 2
   Please enter second of 2 integers (at least 1, not larger than 20 and larger/equal to previous number) : 0
   Error. Invalid input. Please try again
   Please enter first of 2 integers (at least 1 and not larger than 20) : 2
   Please enter second of 2 integers (at least 1, not larger than 20 and larger/equal to previous number : 4
   INTEGER  SQUARE ROOT
         2       1.4142
         3       1.7321
         4       2.0000

   Test Case 2:
   Please enter first of 2 integers (at least 1 and not larger than 20) : 21
   Please enter second of 2 integers (at least 1, not larger than 20 and larger/equal to previous number) : 5
   Error. Invalid input. Please try again
   Please enter first of 2 integers (at least 1 and not larger than 20) : 5
   Please enter second of 2 integers (at least 1, not larger than 20 and larger/equal to previous number) : 5
   INTEGER  SQUARE ROOT
         5       2.2361
*/
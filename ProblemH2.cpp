/*
   This program asks for 2 inputs after
   each pair is entered, as long as they
   are equal, if not will print them one
   time then exit
*/

#include <iostream>
using namespace std;

int main()
{
   double first, second;

   do
   {
      cout << "Enter first double number : ";
      cin >> first;

      cout << "Enter second double number : ";
      cin >> second;

      cout << "First double : " << first << ", Second double : " << second << endl;
   } while (first == second);

   return 0;
}

/* Execution Results:
   Test Case :
   Enter first double number : 3.1
   Enter second double number : 3.1
   First double : 3.1, Second double : 3.1
   Enter first double number : 5.7
   Enter second double number : 5.7
   First double : 5.7, Second double : 5.7
   Enter first double number : 7.2
   Enter second double number : 7.8
   First double : 7.2, Second double : 7.8
*/
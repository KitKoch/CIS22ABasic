/*
   This program asks user to input set of
   real numbers into a vector, then print
   these numbers
*/

#include <iostream>
#include <vector>
using namespace std;

//****************************************
// Ask the user desired amount of numbers to enter & read into vector
// No parameter
// Return a vector of numbers entered by user
vector<double> input();

//****************************************
// Print numbers from vector
// 1 parameter, a double vector
// No return value, simply prints
void output(const vector<double> &numbers);

int main()
{
   vector<double> data;

   data = input();
   output(data);
   data = input();
   output(data);

   return 0;
}

vector<double> input()
{
   int count;
   cout << "Total of numbers you want to enter : ";
   cin >> count;

   vector<double> numbers(count);
   for (int i = 0; i < count; ++i)
   {
      cout << "Enter number " << i + 1 << " : ";
      cin >> numbers[i];
   }

   return numbers;
}

void output(const vector<double> &numbers)
{
   for (int i = 0; i < numbers.size(); ++i)
   {
      cout << numbers[i];
      if (i < numbers.size() - 1)
      {
         cout << "  ";
      }
   }
   cout << endl;
}

/* Execution Results:
   Test Case :
   Total of numbers you want to enter : 3
   Enter number 1 : 1.1
   Enter number 2 : 2.2
   Enter number 3 : 3.3
   1.1  2.2  3.3
   Total of numbers you want to enter : 5
   Enter number 1 : 5.1
   Enter number 2 : 6.1
   Enter number 3 : 7.1
   Enter number 4 : 8.1
   Enter number 5 : 9.1
   5.1  6.1  7.1  8.1  9.1
*/
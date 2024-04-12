/*
   This program asks user to enter 3 ints,
   calculates total and print all 3 ints and
   total int.
*/

#include <iostream>
using namespace std;

//****************************************
// Get input from user
// No parameter
// Return value read form user
int getData();

//****************************************
// Compute total of 3 integers
// 3 integers as parameters
// Return total of 3 integers parameter
int computeTotal(int first, int second, int third);

//****************************************
// Print 3 input integers and their total
// Parameters: 3 input integers and the total int
// No return value, simply prints
void printAll(int first, int second, int third, int total);

int main()
{
   int first, second, third, total;

   cout << "Please enter first integer : ";
   first = getData();

   cout << "Please enter second integer : ";
   second = getData();

   cout << "Please enter third integer : ";
   third = getData();

   total = computeTotal(first, second, third);
   printAll(first, second, third, total);

   return 0;
}

int getData()
{
   int inputNum;
   cin >> inputNum;
   return inputNum;
}

int computeTotal(int first, int second, int third)
{
   int result = first + second + third;
   return result;
}

void printAll(int first, int second, int third, int total)
{
   cout << first << " + " << second << " + " << third << " = " << total << endl;
}

/* Execution Results:
   Test Case :
   Please enter first integer : 4
   Please enter second integer : 5
   Please enter third integer : 6
   4 + 5 + 6 = 15
*/
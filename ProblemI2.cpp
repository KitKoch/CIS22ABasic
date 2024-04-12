/*
   This program asks user to enter 3 ints,
   calculates total and print all 3 ints and
   total int.
*/

#include <iostream>
using namespace std;

//****************************************
// Get 3 inputs from user
// 3 integers (first, second and third)
// No return value
void getData(int &first, int &second, int &third);

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

   getData(first, second, third);

   total = computeTotal(first, second, third);

   printAll(first, second, third, total);

   return 0;
}

void getData(int &first, int &second, int &third)
{
   cout << "Please enter first integer : ";
   cin >> first;
   cout << "Please enter second integer : ";
   cin >> second;
   cout << "Please enter third integer : ";
   cin >> third;
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
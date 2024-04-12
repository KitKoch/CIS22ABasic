/*
   This program takes input of first
   and last name, separated by space
   then outputs full name
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
   string fullName;

   cout << "Please enter your first and last name, separated by one space: ";
   getline(cin, fullName);

   cout << "Your full name: " << fullName << endl;

   return 0;
}

/* Execution Results:
   Test 1:
   Please enter your first and last name, separated by one space: George Washington
   Your full name: George Washington

   Test 2:
   Please enter your first and last name, separated by one space: Franklin Delano Roosevelt
   Your full name: Franklin Delano Roosevelt
*/
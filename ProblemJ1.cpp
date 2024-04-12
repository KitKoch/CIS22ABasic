/*
   This program search an int vector of
   user specificed target, asks user for
   target number, searches this number within
   the vector then prints result offset of
   target if found or not
*/

#include <iostream>
#include <vector>
using namespace std;

//****************************************
// Get 3 inputs from user
// 1 parameter, target int variable
// No return value
void getTarget(int &target);

//****************************************
// Conduct linear search on a sorted int vector for target int
// 2 parameters, reference to const int vector and int target
// Return offset where target was located, or -1 if cannot be found
int linearSearch(const vector<int> &v, int target);

//****************************************
// Print result of the search
// 1 parameter, int result
// No return value, simply prints
void printResult(int result);

int main()
{
   vector<int> vector = {2, 3, 5, 8, 13, 21, 34};
   int target;

   getTarget(target);

   int result = linearSearch(vector, target);

   printResult(result);

   return 0;
}

void getTarget(int &target)
{
   cout << "Please enter target value : ";
   cin >> target;
}

int linearSearch(const vector<int> &v, int target)
{
   for (int i = 0; i < v.size(); ++i)
   {
      if (v[i] == target)
      {
         return i;
      }
      if (v[i] > target)
      {
         break;
      }
   }
   return -1;
}

void printResult(int result)
{
   if (result != -1)
   {
      cout << "Target located at offset : " << result << endl;
   }
   else
   {
      cout << "Could not locate target." << endl;
   }
}

/* Execution Results:
   Test Case 1:
   Please enter target value : 5
   Target located at offset : 2

   Test Case 2:
   Please enter target value : 7
   Could not locate target.
*/
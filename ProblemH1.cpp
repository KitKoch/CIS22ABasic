/*
   This program asks for a target value
   then for 5 numbers to populate the array.
   Then performs linear search to find target value.
   Prints the offset of target.
*/

#include <iostream>
using namespace std;

int main(void)

{
   const int SIZE = 5;
   int array[SIZE];
   int target;
   int result = -1;

   cout << "Please enter the target value : ";
   cin >> target;

   for (int j = 0; j < SIZE; j++)
   {
      cout << "Enter the next value : ";
      cin >> array[j];
   }

   for (int i = 0; i < SIZE; i++)
   {
      if (array[i] == target)
      {
         result = i;
         break;
      }
      else if (array[i] > target)
      {
         break;
      }
   }

   if (result != -1)
   {
      cout << "Target value located at offset : " << result << endl;
   }
   else
   {
      cout << "Could not locate target." << endl;
   }

   return 0;
}

/* Execution Results:
   Test Case 1:
   Please enter the target value : 5
   Enter the next value : 1
   Enter the next value : 3
   Enter the next value : 3
   Enter the next value : 6
   Enter the next value : 7
   Could not locate target.

   Test Case 2:
   Please enter the target value : 5
   Enter the next value : 1
   Enter the next value : 2
   Enter the next value : 3
   Enter the next value : 5
   Enter the next value : 9
   Target value located at offset : 3
*/
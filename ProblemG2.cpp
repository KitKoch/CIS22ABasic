/*
   This program allows user to
   enter an int and draws a pattern
   depends on users selection
*/

#include <iostream>
using namespace std;

void squarePattern(int size)
{
   for (int j = 0; j < size; ++j)
   {
      for (int i = 0; i < size; ++i)
      {
         cout << size;
      }
      cout << endl;
   }
}

void trianglePattern(int size)
{
   for (int j = 1; j <= size; ++j)
   {
      for (int i = 0; i < j; ++i)
      {
         cout << size;
      }
      cout << endl;
   }
}

void diagonalPattern(int size)
{
   for (int j = 0; j < size; ++j)
   {
      for (int i = 0; i < size; ++i)
      {
         if (i == j)
         {
            cout << size;
         }
         else
         {
            cout << "*";
         }
      }
      cout << endl;
   }
}

void reverseDiagonalPattern(int size)
{
   for (int j = 0; j < size; ++j)
   {
      for (int i = 0; i < size; ++i)
      {
         if (j == size - i - 1)
         {
            cout << size;
         }
         else
         {
            cout << "*";
         }
      }
      cout << endl;
   }
}

int main()
{
   int size, selection = 0;

   while (selection != 5)
   {
      cout << "Please select a pattern or quit:" << endl;
      cout << "1. Square   pattern" << endl;
      cout << "2. Triangle pattern" << endl;
      cout << "3. Diagonal pattern" << endl;
      cout << "4. Reverse diagonal pattern" << endl;
      cout << "5. Quit" << endl;

      cin >> selection;

      if (selection > 5 || selection < 1)
      {
         cout << "Invalid selection, please choose 1-4 for a pattern or 5 to quit" << endl;
         continue;
      }

      if (selection == 5)
      {
         break;
      }

      cout << "Please enter the size (1-9): ";
      cin >> size;
      while (size > 9 || size < 1)
      {
         cout << "Invalid size, please enter a size 1-9: ";
         cin >> size;
      }

      switch (selection)
      {
      case 1:
         squarePattern(size);
         break;
      case 2:
         trianglePattern(size);
         break;
      case 3:
         diagonalPattern(size);
         break;
      case 4:
         reverseDiagonalPattern(size);
         break;
      }
   }

   return 0;
}

/* Execution Results:
   Test Case:
   Please select a pattern or quit:
   1. Square   pattern
   2. Triangle pattern
   3. Diagonal pattern
   4. Reverse diagonal pattern
   5. Quit
   9
   Invalid selection, please choose 1-4 for a pattern or 5 to quit
   Please select a pattern or quit:
   1. Square   pattern
   2. Triangle pattern
   3. Diagonal pattern
   4. Reverse diagonal pattern
   5. Quit
   1
   Please enter the size (1-9): 11
   Invalid size, please enter a size 1-9: 3
   333
   333
   333
   Please select a pattern or quit:
   1. Square   pattern
   2. Triangle pattern
   3. Diagonal pattern
   4. Reverse diagonal pattern
   5. Quit
   2
   Please enter the size (1-9): 4
   4
   44
   444
   4444
   Please select a pattern or quit:
   1. Square   pattern
   2. Triangle pattern
   3. Diagonal pattern
   4. Reverse diagonal pattern
   5. Quit
   3
   Please enter the size (1-9): 5
   5****
   *5***
   **5**
   ***5*
   ****5
   Please select a pattern or quit:
   1. Square   pattern
   2. Triangle pattern
   3. Diagonal pattern
   4. Reverse diagonal pattern
   5. Quit
   4
   Please enter the size (1-9): 6
   *****6
   ****6*
   ***6**
   **6***
   *6****
   6*****
   Please select a pattern or quit:
   1. Square   pattern
   2. Triangle pattern
   3. Diagonal pattern
   4. Reverse diagonal pattern
   5. Quit
   5
*/
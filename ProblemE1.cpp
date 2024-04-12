/*
   This program calculates solutions to
   a quadratic equation of the form
   a*x^2 + b*x + c = 0, based on input
   values of a, b and c, it handles 6
   cases
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double a, b, c;
   cout << "Enter the value of a : ";
   cin >> a;
   cout << "Enter the value of b : ";
   cin >> b;
   cout << "Enter the value of c : ";
   cin >> c;

   if (a == 0 && b == 0 && c == 0)
   {
      cout << "Any value of x is a solution" << endl;
   }
   else if (a == 0 && b == 0 && c != 0)
   {
      cout << "No solution exists" << endl;
   }
   else if (a == 0 && b != 0)
   {
      double x = -c / b;
      cout << "The only solution is x = -c/b = " << x << endl;
   }
   else
   {
      double determinant = pow(b, 2) - 4 * a * c;

      if (determinant == 0)
      {
         double x = -b / (2 * a);
         cout << "The only solution is x = -b/2a = " << x << endl;
      }
      else if (determinant > 0)
      {
         double x1 = (-b + sqrt(determinant)) / (2 * a);
         double x2 = (-b - sqrt(determinant)) / (2 * a);
         cout << "The solutions are: x1 = " << x1 << ", and x2 = " << x2 << endl;
      }
      else
      {
         cout << "The solutions have an imaginary component" << endl;
      }
   }

   return 0;
}

/* Execution Results:
   Test Case 1: a = 0   b = 0   c = 0
   Enter the value of a : 0
   Enter the value of b : 0
   Enter the value of c : 0
   Any value of x is a solution

   Test Case 2: a = 0   b = 0   c = 4
   Enter the value of a : 0
   Enter the value of b : 0
   Enter the value of c : 4
   No solution exists

   Test Case 3: a = 0   b = 8   c = -12
   Enter the value of a : 0
   Enter the value of b : 8
   Enter the value of c : -12
   The only solution is x = -c/b = 1.5

   Test Case 4: a = 2   b = 4   c = 2
   Enter the value of a : 2
   Enter the value of b : 4
   Enter the value of c : 2
   The only solution is x = -b/2a = -1

   Test Case 5: a = 2   b = 2   c = 0
   Enter the value of a : 2
   Enter the value of b : 2
   Enter the value of c : 0
   The solutions are: x1 = 0, and x2 = -1

   Test Case 6: a = 100   b = 100   c = -11
   Enter the value of a : 100
   Enter the value of b : 100
   Enter the value of c : -11
   The solutions are: x1 = 0.1, and x2 = -1.1

   Test Case 7: a = 1   b = 1   c = 1
   Enter the value of a : 1
   Enter the value of b : 1
   Enter the value of c : 1
   The solutions have an imaginary component
*/
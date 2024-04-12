/*
   This program takes in Celcius and
   converts to Farenheit
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   const double C_TO_F_DIVIDE = 9.0 / 5.0;
   const double C_TO_F_PLUS = 32;

   double celsius;

   cout << "Enter Celsius Temperature: ";
   cin >> celsius;

   double fahrenheit = celsius * C_TO_F_DIVIDE + C_TO_F_PLUS;

   cout << fixed << setprecision(1);
   cout << "Celsius: " << celsius << " degrees Celsius" << endl;
   cout << "Fahrenheit: " << fahrenheit << " degrees Fahrenheit" << endl;

   return 0;
}

/* Execution Results:
   Test 1: 37.778
   Enter Celsius Temperature: 37.778
   Celsius: 37.8 degrees Celsius
   Fahrenheit: 100.0 degrees Fahrenheit

   Test 2: -40
   Enter Celsius Temperature: -40
   Celsius: -40.0 degrees Celsius
   Fahrenheit: -40.0 degrees Fahrenheit

   Test 3: 0
   Enter Celsius Temperature: 0
   Celsius: 0.0 degrees Celsius
   Fahrenheit: 32.0 degrees Fahrenheit
*/
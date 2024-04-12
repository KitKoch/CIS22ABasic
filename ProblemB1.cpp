/*
   This program reads two input integers from the
   user for cats and dogs variables, then add and
   prints total animals
*/

#include <iostream>
using namespace std;

int main()
{
   int cats;
   int dogs;
   int animals;

   cout << "Enter a value for cats: ";
   cin >> cats;
   cout << "Enter a value for dogs: ";
   cin >> dogs;
   animals = cats + dogs;

   cout << "cats: " << cats << endl;
   cout << "dogs: " << dogs << endl;
   cout << "animals: " << animals << endl;

   return 0;
}

/* Execution results:
   Enter a value for cats: 10
   Enter a value for dogs: 10
   cats: 10
   dogs: 10
   animals: 20
*/
/*
   This program reads the int in a
   text file and print count, sum,
   smallest, largest and average of
   integers
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   string testFile = "file1.txt";
   ifstream file(testFile);

   if (!file.is_open())
   {
      cout << "Cannot open file : " << testFile << endl;
      return 1;
   }

   int num, sum = 0, count = 0, smallestNum, largestNum;
   bool isFirstInteger = true;

   while (file >> num)
   {
      sum += num;
      ++count;

      if (isFirstInteger)
      {
         smallestNum = largestNum = num;
         isFirstInteger = false;
      }
      else
      {
         if (num < smallestNum)
         {
            smallestNum = num;
         }
         if (num > largestNum)
         {
            largestNum = num;
         }
      }
   }
   file.close();

   if (count == 0)
   {
      cout << "No integer can be read from file" << endl;
      return 1;
   }

   double average = static_cast<double>(sum) / count;

   cout << "The integer count: " << count << endl;
   cout << "The sum of the integers: " << sum << endl;
   cout << "The smallest integer: " << smallestNum << endl;
   cout << "The largest integer: " << largestNum << endl;
   cout << "The average of the integers: " << average << endl;

   return 0;
}

/* Execution Results:
   Test Case 1:
   The integer count: 7
   The sum of the integers: 141
   The smallest integer: 9
   The largest integer: 33
   The average of the integers: 20.1429

   Test Case 2:
   The integer count: 8
   The sum of the integers: 181
   The smallest integer: 9
   The largest integer: 40
   The average of the integers: 22.625
*/
/*
   This program alows input 3 test
   scores and calculates letter
   grade based on their average.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int test1, test2, test3;
   cout << "Enter the score of test 1 : ";
   cin >> test1;
   cout << "Enter the score of test 2 : ";
   cin >> test2;
   cout << "Enter the score of test 3 : ";
   cin >> test3;

   if (test1 < 0 || test1 > 100 || test2 < 0 || test2 > 100 || test3 < 0 || test3 > 100)
   {
      cout << "Invalid input, scores must be between 0 and 100." << endl;
      return 1;
   }

   double averageScore = (test1 + test2 + test3) / 3.0;
   char grade;

   if (averageScore >= 90)
   {
      grade = 'A';
   }
   else if (averageScore >= 80)
   {
      grade = 'B';
   }
   else if (averageScore >= 70)
   {
      grade = 'C';
   }
   else if (averageScore >= 60)
   {
      int turnedInAssignment, totalHW;
      cout << "Enter the number of homework assignments turned in : ";
      cin >> turnedInAssignment;
      cout << "Enter the total number of homework assignments : ";
      cin >> totalHW;

      double hwPercentage = static_cast<double>(turnedInAssignment) / totalHW * 100;
      if (hwPercentage > 80)
      {
         grade = 'D';
      }
      else
      {
         grade = 'F';
      }
   }
   else
   {
      grade = 'F';
   }

   cout << "The student's letter grade is : " << grade << endl;

   return 0;
}

/* Execution Results:
   Test Case 1:
   Enter the score of test 1 : 96
   Enter the score of test 2 : 84
   Enter the score of test 3 : 90
   The student's letter grade is : A

   Test Case 2:
   Enter the score of test 1 : 95
   Enter the score of test 2 : 83
   Enter the score of test 3 : 90
   The student's letter grade is : B

   Test Case 3:
   Enter the score of test 1 : 70
   Enter the score of test 2 : 59
   Enter the score of test 3 : 60
   Enter the number of homework assignments turned in : 5
   Enter the total number of homework assignments : 6
   The student's letter grade is : D

   Test Case 4:
   Enter the score of test 1 : 73
   Enter the score of test 2 : 58
   Enter the score of test 3 : 65
   Enter the number of homework assignments turned in : 8
   Enter the total number of homework assignments : 11
   The student's letter grade is : F
*/
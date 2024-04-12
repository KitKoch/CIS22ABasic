/*
   This program takes input of number of
   bead boxes the user needs on different
   sizes and outputs cost of each
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   const double SMALL_BEADS = 9.20;
   const double MEDIUM_BEADS = 8.52;
   const double LARGE_BEADS = 7.98;

   int smallBoxes, mediumBoxes, largeBoxes;

   cout << "Please enter the number of small beads boxes you need: ";
   cin >> smallBoxes;
   cout << "Please enter the number of medium beads boxes you need: ";
   cin >> mediumBoxes;
   cout << "Please enter the number of large beads boxes you need: ";
   cin >> largeBoxes;

   double totalSmall = smallBoxes * SMALL_BEADS;
   double totalMedium = mediumBoxes * MEDIUM_BEADS;
   double totalLarge = largeBoxes * LARGE_BEADS;
   double totalCost = totalSmall + totalMedium + totalLarge;

   cout << left << setw(14) << "SIZE" << setw(14) << "BOXES" << setw(15) << "COST PER BOX" << setw(10) << "TOTALS" << endl;
   cout << left << setw(18) << "Small" << setw(18) << smallBoxes << setw(8) << fixed << setprecision(2) << SMALL_BEADS << fixed << setprecision(2) << totalSmall << endl;
   cout << left << setw(18) << "Medium" << setw(18) << mediumBoxes << setw(8) << fixed << setprecision(2) << MEDIUM_BEADS << fixed << setprecision(2) << totalMedium << endl;
   cout << left << setw(18) << "Large" << setw(18) << largeBoxes << setw(8) << fixed << setprecision(2) << LARGE_BEADS << fixed << setprecision(2) << totalLarge << endl;
   cout << left << setw(43) << "TOTAL" << fixed << setprecision(2) << totalCost << endl;

   return 0;
}

/* Execution Results:
   Please enter the number of small beads boxes you need: 9
   Please enter the number of medium beads boxes you need: 8
   Please enter the number of large beads boxes you need: 7
   SIZE          BOXES         COST PER BOX   TOTALS
   Small             9                 9.20    82.80
   Medium            8                 8.52    68.16
   Large             7                 7.98    55.86
   TOTAL                                      206.82
*/
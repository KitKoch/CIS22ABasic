/*
   This program takes input of mass
   and velocity then outputs the
   mass, velocity, momentum and kinetic
   energy
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   double mass, velocity;

   cout << "Please enter the mass (kg): ";
   cin >> mass;
   cout << "Please enter the velocity (m/s): ";
   cin >> velocity;

   double momentum = mass * velocity;
   double kineticEnergy = mass * (pow(velocity, 2) * 0.5);

   cout << "input mass:     " << setw(11) << fixed << setprecision(2) << mass << " kilograms" << endl;
   cout << "input velocity: " << setw(11) << fixed << setprecision(2) << velocity << " meters per second" << endl;
   cout << "output mass:     " << setw(10) << fixed << setprecision(2) << mass << " kilograms" << endl;
   cout << "output velocity: " << setw(10) << fixed << setprecision(2) << velocity << " meters per second" << endl;
   cout << "momentum:        " << setw(10) << fixed << setprecision(2) << momentum << " kilograms meters per second" << endl;
   cout << "kinetic energy:  " << setw(10) << fixed << setprecision(2) << kineticEnergy << " joules" << endl;

   return 0;
}

/* Execution Results:
   Test 1:
   Please enter the mass (kg): 5
   Please enter the velocity (m/s): 4
   input mass:            5.00 kilograms
   input velocity:        4.00 meters per second
   output mass:           5.00 kilograms
   output velocity:       4.00 meters per second
   momentum:             20.00 kilograms meters per second
   kinetic energy:       40.00 joules

   Test 2:
   Please enter the mass (kg): 3.15
   Please enter the velocity (m/s): 10
   input mass:            3.15 kilograms
   input velocity:       10.00 meters per second
   output mass:           3.15 kilograms
   output velocity:      10.00 meters per second
   momentum:             31.50 kilograms meters per second
   kinetic energy:      157.50 joules
*/
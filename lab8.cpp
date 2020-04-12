#include<iostream>
#include<string>
#include"hybridAutoType.h"

using namespace std;

int main()
{
   hybridAutoType car1;

   car1.setProperties(1234, 6.25, 25.7);
   car1.setChargeLevel(4.3);
   car1.setChargeEfficiency(28);

   cout << "Car 1:" << endl;
   cout << car1.getInfoString() << endl;
   cout << "Charge = " << car1.getChargeLevel() << ", Efficiency = " << car1.getChargeEfficiency() << endl;

   cout << endl;

   cout << "Driving car 1 3 miles." << endl;

   cout << endl;

   car1.drive(3);

   cout << "Car 1:" << endl;
   cout << car1.getInfoString() << endl;
   cout << "Charge = " << car1.getChargeLevel() << ", Efficiency = " << car1.getChargeEfficiency() << endl;

   cout << endl;

   hybridAutoType car2(5678, 8.16, 30.0, 4.8, 29.0);

   cout << "Car 2:" << endl;
   cout << car2.getInfoString() << endl;
   cout << "Charge = " << car2.getChargeLevel() << ", Efficiency = " << car2.getChargeEfficiency() << endl;

   cout << endl;

   cout << "Driving car 2 100 miles." << endl;

   cout << endl;

   car2.drive(100);

   cout << "Car 2:" << endl;
   cout << car2.getInfoString() << endl;
   cout << "Charge = " << car2.getChargeLevel() << ", Efficiency = " << car2.getChargeEfficiency() << endl;
}

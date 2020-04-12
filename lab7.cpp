#include<iostream>
#include<string>
#include"automobileType.h"

using namespace std;

int main()
{
   automobileType car1;

   car1.setProperties(1234, 6.25, 25.7);

   cout << "Car 1:" << endl;
   cout << car1.getInfoString() << endl;

   cout << endl;

   cout << "Driving car 1 3 miles." << endl;

   cout << endl;

   car1.drive(3);

   cout << "Car 1:" << endl;
   cout << car1.getInfoString() << endl;

   cout << endl;

   automobileType car2;

   cout << "Car 2:" << endl;
   cout << car2.getInfoString() << endl;

   cout << endl;

   cout << "Driving car 2 100 miles." << endl;

   cout << endl;

   car2.drive(100);

   cout << "Car 2:" << endl;
   cout << car2.getInfoString() << endl;
}

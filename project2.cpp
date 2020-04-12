/*
Name: Nick Greiner
Class: CSC 1720-02
Date: 10/10/2019
Path: /home/students/ngreiner/csc1720/project2
*/
#include<iostream>
#include<string>
#include"automobileType.h"

using namespace std;

// Function to add spaces when called
void br();

// Main test function
int main()
{
   cout << "/////////////////////////////////////////////////////////////////////////////////////" << endl;
   cout << "Starting normal test..." << endl;
   br();

   cout << "Creating new car (car1) with default values." << endl;
   automobileType car1;
   cout << car1.getInfoString() << endl;
   br();

   cout << "Driving car1 200 miles." << endl;
   car1.drive(200);
   cout << car1.getInfoString() << endl;
   br();

   cout << "Filling car1 tank to full. Current fuel level: " << car1.getFuelLevel() << "." << endl;
   cout << "Fuelling..." << endl;
   car1.fillTank(8);
   cout << "Fuel level: " << car1.getFuelLevel() << "." << endl;
   br();

   cout << "Creating new car (car2) with set values." << endl;
   automobileType car2(5.0, 20.0, 10.0, 30.0);
   cout << car2.getInfoString() << endl;
   br();

   cout << "Setting car2 values to car1 values, all at once. Tank Size (" << car2.getTankSize() << ") will stay constant." << endl;
   cout << "Changing values..." << endl;
   car2.setProperties(car1.getOdometer(), car1.getFuelLevel(), car1.getMpg());
   cout << car2.getInfoString() << endl;
   br();

   cout << "Setting car1 values to new values individually." << endl;
   cout << "Changing odometer..." << endl;
   car1.setOdometer(2000.0);
   cout << "Changing fuel level..." << endl;
   car1.setFuelLevel(10.0);
   cout << "Changing mpg..." << endl;
   car1.setMpg(30.0);
   cout << car1.getInfoString() << endl;
   br();

   cout << "Test complete." << endl;
   br();

   cout << "/////////////////////////////////////////////////////////////////////////////////////" << endl;

   cout << "Starting exceptional test..." << endl;
   br();

   cout << "Creating new car (car3) with invalid values." << endl;
   cout << "Attempted values: Odometer (-1000.0), Tank Size (-10.0), Fuel Level (50.0), MPG (0.5)" << endl;
   automobileType car3(-1000.0, -10.0, 50.0, 0.5);
   cout << "Set values: Odometer (" << car3.getOdometer() << "), Tank Size (" << car3.getTankSize() << "), Fuel Level (" << car3.getFuelLevel() << "), MPG (" << car3.getMpg() << ")" << endl;
   br();

   cout << "Setting car3 values to invalid values." << endl;
   cout << "Attempted values: Odometer (-500.0), Fuel Level (-5.0), MPG (-10.0)" << endl;
   car3.setProperties(-500.0, -5.0, -10.0);
   cout << "Set values: Odometer (" << car3.getOdometer() << "), Fuel Level (" << car3.getFuelLevel() << "), MPG (" << car3.getMpg() << ")" << endl;
   br();

   cout << "Setting car3 values to one invalid, 2 valid values." << endl;
   cout << "Attempted values: Odometer (100.0), Fuel Level (-5.0), MPG (20.0)" << endl;
   car3.setProperties(100.0, -5.0, 20.0);
   cout << "Set values: Odometer (" << car3.getOdometer() << "), Fuel Level (" << car3.getFuelLevel() << "), MPG (" << car3.getMpg() << ")" << endl;
   br();

   cout << "Setting car 3 values to invalid valued individually." << endl;
   cout << "Changing odometer to -500.0..." << endl;
   car3.setOdometer(-500.0);
   cout << "Changing fuel level to 50.0..." << endl;
   car3.setFuelLevel(50.0);
   cout << "Changing mpg to -30.0..." << endl;
   car3.setMpg(-30.0);
   cout << car3.getInfoString() << endl;
   br();

   cout << "Attempting to drive car3 -150 miles." << endl;
   car3.drive(-150.0);
   cout << car3.getInfoString() << endl;
   br();

   cout << "Attempting to drive car3 2000 miles." << endl;
   car3.drive(2000.0);
   cout << car3.getInfoString() << endl;
   br();

   cout << "Attempting to drive car3 50 miles on empty." << endl;
   car3.drive(50.0);
   cout << car3.getInfoString() << endl;
   br();

   cout << "Attempting to overflow car3 gas tank. Current fuel level: " << car3.getFuelLevel() << "." << endl;
   cout << "Fuelling..." << endl;
   car3.fillTank(1000);
   cout << "Fuel level: " << car3.getFuelLevel() << "." << endl;
   br();
}

void br()
{
   cout << endl;
   cout << endl;
}

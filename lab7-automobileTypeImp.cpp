#include<iostream>
#include<string>
#include"automobileType.h"

using namespace std;

void automobileType::setProperties(double odm, double fuel, double miles)
{
   odometer = odm;
   fuelLevel = fuel;
   mpg = miles;
}

const string automobileType::getInfoString()
{
   string infoString = "Miles = " + to_string(odometer) + ", Fuel = " + to_string(fuelLevel) + ", Efficiency = " + to_string(mpg);

   return infoString;
}

void automobileType::drive(double milesDriven)
{
   odometer = odometer + milesDriven;
   fuelLevel = fuelLevel - (milesDriven/mpg);
}

automobileType::automobileType()
{
   odometer = 0.0;
   fuelLevel = 15.0;
   mpg = 30.0;
}

automobileType::automobileType(double odm, double fuel, double miles)
{
   odometer = odm;
   fuelLevel = fuel;
   mpg = miles;
}

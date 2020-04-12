#include<iostream>
#include<string>
#include"automobileType.h"

using namespace std;

void automobileType::setProperties(double odm, double fuel, double miles)
{
   if ((odm >= 0) && ((fuel <= tankSize) && (fuel >= 0)) && (miles >= 1))
   {
      odometer = odm;
      fuelLevel = fuel;
      mpg = miles;
   }
   else
      cerr << "Invalid input for one or more values." << endl;
}

const string automobileType::getInfoString()
{
   string infoString = "Miles = " + to_string(odometer) + ", Tank Size = " + to_string(tankSize) + ", Fuel = " + to_string(fuelLevel) + ", Efficiency = " + to_string(mpg);

   return infoString;
}

void automobileType::drive(double milesDriven)
{
   if (fuelLevel > 0)
   {
      if (milesDriven < 0)
         milesDriven = -milesDriven;

      if ((fuelLevel - (milesDriven/mpg)) >= 0)
      {
         fuelLevel = fuelLevel - (milesDriven/mpg);
      }
      else
      {
         milesDriven = milesDriven - (((fuelLevel - (milesDriven/mpg)) + fuelLevel) * mpg);
         fuelLevel = 0.0;
      }

      odometer = odometer + milesDriven;
   }
}

void automobileType::setOdometer(double odm)
{
   if (odm >= odometer)
      odometer = odm;
   else
      cerr << "Invalid input for odometer." << endl;
}

const double automobileType::getOdometer()
{
   return odometer;
}

const double automobileType::getTankSize()
{
   return tankSize;
}

void automobileType::setFuelLevel(double fuel)
{
   if ((fuel <= tankSize) && (fuel > 0))
      fuelLevel = fuel;
   else
      cerr << "Invalid input for fuel level." << endl;
}

const double automobileType::getFuelLevel()
{
   return fuelLevel;
}

void automobileType::setMpg(double miles)
{
   if (miles >= 1)
      mpg = miles;
   else
      cerr << "Invalid input for mpg." << endl;
}

const double automobileType::getMpg()
{
   return mpg;
}

void automobileType::fillTank(double amount)
{
   if ((amount > 0) && ((amount + fuelLevel) <= tankSize))
      fuelLevel = fuelLevel + amount;
   else
      cerr << "Invalid input for fill tank." << endl;
}

automobileType::automobileType()
{
   odometer = DEFAULT_ODOMETER;
   tankSize = DEFAULT_TANK_SIZE;
   fuelLevel = DEFAULT_FUEL_LEVEL;
   mpg = DEFAULT_MPG;
}

automobileType::automobileType(double odm, double tank, double fuel, double miles)
{
   if (odm >= 0)
      setOdometer(odm);
   else
   {
      cerr << "Invalid input for odometer, setting to default (" << DEFAULT_ODOMETER <<  ")." << endl;
      odometer = DEFAULT_ODOMETER;
   }

   if (tank >= 0)
      tankSize = tank;
   else
   {
      cerr << "Invalid input for tank size, setting to default (" << DEFAULT_TANK_SIZE << ")." << endl;
      tankSize = DEFAULT_TANK_SIZE;
   }

   if ((fuel <= tankSize) && (fuel >= 0))
      fuelLevel = fuel;
   else
   {
      cerr << "Invalid input for fuel level, setting to default (" << DEFAULT_FUEL_LEVEL << ")." << endl;
      fuelLevel = DEFAULT_FUEL_LEVEL;
   }

   if (miles >= 1)
      mpg = miles;
   else
   {
      cerr << "Invalid input for mpg, setting to default (" << DEFAULT_MPG << ")." << endl;
      mpg = DEFAULT_MPG;
   }
}

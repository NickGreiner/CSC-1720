#include<iostream>
#include<string>

using namespace std;

class automobileType
{
   public:
   // Function to set properties (odometer, fuel level, mpg)
   void setProperties(double, double, double);
   // Function to return a string witg class info (odometer, tank size, fuel level, mpg)
   const string getInfoString();
   void drive(double);
   const double DEFAULT_ODOMETER = 0.0;
   const double DEFAULT_TANK_SIZE = 15.0;
   const double DEFAULT_FUEL_LEVEL = 15.0;
   const double DEFAULT_MPG = 25.0;
   void setOdometer(double);
   const double getOdometer();
   const double getTankSize();
   void setFuelLevel(double);
   const double getFuelLevel();
   void setMpg(double);
   const double getMpg();
   void fillTank(double);
   automobileType();
   automobileType(double, double, double, double);
   private:
   double tankSize;
   double odometer;
   double fuelLevel;
   double mpg;
};

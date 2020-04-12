#include<iostream>
#include<string>

using namespace std;

class automobileType
{
   public:
   void setProperties(double, double, double);
   const string getInfoString();
   void drive(double);
   automobileType();
   automobileType(double, double, double);
   private:
   double odometer;
   double fuelLevel;
   double mpg;
};

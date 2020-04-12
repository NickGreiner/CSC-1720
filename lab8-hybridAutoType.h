#ifndef H_hybridAutoType
#define H_hybridAutoType

#include<iostream>
#include"automobileType.h"

using namespace std;

class hybridAutoType : public automobileType
{
   public:
   bool engineMode();
   static const bool GAS = true;
   static const bool ELECTRIC = false;
   void setChargeLevel(double);
   const double getChargeLevel();
   void setChargeEfficiency(double);
   const double getChargeEfficiency();
   hybridAutoType();
   hybridAutoType(double, double, double, double, double);
   private:
   double chargeAmount;
   double batteryEfficiency;
};

#endif

#include<iostream>
#include<string>
#include"automobileType.h"
#include"hybridAutoType.h"

using namespace std;

bool hybridAutoType::engineMode()
{
   if (GAS == true)
      return true;
   else
      return false;
}

void hybridAutoType::setChargeLevel(double charge)
{
   chargeAmount = charge;
}

const double hybridAutoType::getChargeLevel()
{
   return chargeAmount;
}

void hybridAutoType::setChargeEfficiency(double efficiency)
{
   batteryEfficiency = efficiency;
}

const double hybridAutoType::getChargeEfficiency()
{
   return batteryEfficiency;
}

hybridAutoType::hybridAutoType()
{
   chargeAmount = 4.4;
   batteryEfficiency = 29;
}

hybridAutoType::hybridAutoType(double odm, double fuel, double miles, double charge, double efficiency)
{
   setProperties(odm, fuel, miles);
   chargeAmount = charge;
   batteryEfficiency = efficiency;
}

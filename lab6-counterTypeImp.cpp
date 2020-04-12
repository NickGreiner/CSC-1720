#include<iostream>
#include"counterType.h"

using namespace std;

void counterType::initializeCounter()
{
   counter = 0;
}

void counterType::setCounter(int x)
{
   if (x >= 0)
      counter = x;
   else
      initializeCounter();
}

const int counterType::getCounter()
{
   return counter;
}

void counterType::incrementCounter()
{
   counter++;
}

void counterType::decrementCounter()
{
   if (counter > 0)
      counter--;
   else
      counter = 0;
}

const void counterType::displayCounter()
{
   cout << counter;
}

counterType::counterType(int c)
{
   setCounter(c);
}

counterType::counterType()
{
   initializeCounter();
}

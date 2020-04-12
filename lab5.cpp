/*
Name: Nick Greiner
Class: CSC-1720-02
Date: 09/17/19
Path: /home/students/ngreiner/csc1720/lab5/
*/

#include<iostream>

using namespace std;

class clockType
{
public:
   void setTime(int, int, int);
   void getTime(int&, int&, int&) const;
   void printTime() const;
   void incrementSeconds();
   void incrementMinutes();
   void incrementHours();
   bool equalTime(const clockType&) const;

private:
   int hr;
   int min;
   int sec;
};

void equalCheck(clockType& firstClock, clockType& secondClock);
void printClocks(clockType& firstPrint, clockType& secondPrint);

int main()
{
   int hours;
   int minutes;
   int seconds;

   clockType clock1;
   clockType clock2;
   clockType clock3;

   clock1.setTime(8, 9, 0);
   clock2.setTime(14, 48, 56);
   clock3.setTime(21, 36, 27);

   printClocks(clock1, clock2);

   equalCheck(clock1, clock2);
   cout << endl;

   cout << "Changing clock..." << endl;
   cout << endl;

   while (!clock1.equalTime(clock2))
      clock1.incrementSeconds();

   printClocks(clock1, clock2);

   equalCheck(clock1, clock2);
   cout << endl;

   cout << "Changing clock..." << endl;
   cout << endl;

   clock3.getTime(hours, minutes, seconds);
   clock1.setTime(hours, minutes, seconds);

   cout << "Clock 1: ";
   clock1.printTime();
   cout << endl;

};

void equalCheck(clockType& firstClock, clockType& secondClock)
{
   if (firstClock.equalTime(secondClock))
      cout << "Both times are equal." << endl;
   else
      cout << "Times are not equal." << endl;
}

void printClocks(clockType& firstPrint, clockType& secondPrint)
{
   cout << "Clock 1: ";
   firstPrint.printTime();
   cout << " Clock2: ";
   secondPrint.printTime();
   cout << endl;
}

void clockType::setTime(int hours, int minutes, int seconds)
{
   if (0 <= hours && hours < 24)
      hr = hours;
   else
      hr = 0;

   if (0 <= minutes && minutes < 60)
      min = minutes;
   else
      min = 0;

   if (0 <= seconds && seconds < 60)
      sec = seconds;
   else
      sec = 0;
}

void clockType::getTime(int& hours, int& minutes, int& seconds) const
{
   hours = hr;
   minutes = min;
   seconds = sec;
}

void clockType::printTime() const
{
   if (hr < 10)
      cout << "0";
   cout << hr << ":";

   if (min < 10)
      cout << "0";
   cout << min << ":";

   if (sec < 10)
      cout << "0";
   cout << sec;
}

void clockType::incrementHours()
{
   hr++;
   if (hr > 23)
      hr = 0;
}

void clockType::incrementMinutes()
{
   min++;
   if (min > 59)
   {
      min = 0;
      incrementHours();
   }
}

void clockType::incrementSeconds()
{
   sec++;

   if (sec > 59)
   {
      sec = 0;
      incrementMinutes();
   }
}

bool clockType::equalTime(const clockType& otherClock) const
{
   return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
}

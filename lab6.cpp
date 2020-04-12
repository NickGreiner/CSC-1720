#include<iostream>
#include"counterType.h"

using namespace std;

int main()
{
   cout << "Creating new counter" << endl;
   cout << endl;

   counterType counter1;

   cout << "Counter 1: ";
   counter1.displayCounter();
   cout << endl;

   /////////////
   cout << endl;
   cout << endl;
   /////////////

   cout << "Changing counter 1 by 5" << endl;
   cout << endl;

   cout << "Before: ";
   counter1.displayCounter(); 
   cout << endl;

   for(int i = 0; i < 5; i++)
      counter1.incrementCounter();

   cout << "After: ";
   counter1.displayCounter();
   cout << endl;

   /////////////
   cout << endl;
   cout << endl;
   /////////////

   cout << "Changing counter 1 by -7" << endl;
   cout << endl;

   cout << "Before: ";
   counter1.displayCounter();
   cout << endl;

   for(int x = 0; x < 7; x++)
      counter1.decrementCounter();

   cout << "After: ";
   counter1.displayCounter();
   cout << endl;

   /////////////
   cout << endl;
   cout << endl;
   /////////////

   cout << "Creating new counter set to 10" << endl;
   cout << endl;

   counterType counter2(10);

   cout << "Counter 2: ";
   counter2.displayCounter();
   cout << endl;

   /////////////
   cout << endl;
   cout << endl;
   /////////////

   cout << "Setting counter 1 equal to counter 2 using getCounter" << endl;
   cout << endl;

   cout << "Before: Counter 1: ";
   counter1.displayCounter();
   cout << " Counter 2: ";
   counter2.displayCounter();
   cout << endl;

   counter1.setCounter(counter2.getCounter());

   cout << "After: Counter 1: ";
   counter1.displayCounter();
   cout << " Counter 2: ";
   counter2.displayCounter();
   cout << endl;

   /////////////
   cout << endl;
   cout << endl;
   /////////////

   cout << "Trying to create a new counter set to -10" << endl;
   cout << endl;

   counterType counter3(-10);

   cout << "Counter 3: ";
   counter3.displayCounter();
   cout << endl;   
};

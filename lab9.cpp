/*
Name: Nick Greiner
Class: CSC-1720-02
Date: 10/22/19
Path: /home/students/ngreiner/csc1720/lab9/GreinerLab9
*/

#include<iostream>
#include"arrayListType.h"
#include"unorderedArrayListType.h"

using namespace std;

int main() 
{
   srand(time(0));
   int retItem;
   int retItem2;
   cout << "Creating a new list, list 1." << endl;

   unorderedArrayListType list1;

   cout << "Adding 50 random numbers to list 1." << endl;

   for (int x = 0; x < 50; x++)
      list1.insertFirst(rand() % 100);

   cout << "Printing list 1:" << endl;

   list1.print();

   cout << "Testing if list 1 is empty:" << endl;

   if (list1.isEmpty())
      cout << "The list is empty." << endl;
   else
      cout << "The list is not empty." << endl;

   cout << "Testing if list 1 is full:" << endl;

   if (list1.isFull())
      cout << "The list is full." << endl;
   else
      cout << "The list is not full." << endl;

   cout << "Getting the size of list 1:" << endl;

   cout << "The size of list 1 is " << list1.listSize() << "." << endl;

   cout << "Inserting value 100 at location 10 in list 1." << endl;

   list1.insertAt(10,100);

   list1.retrieveAt(10, retItem);
   cout << "Checking location 10: " << retItem << "." << endl;

   cout << "Removing value at location 20 in list 1." << endl;

   list1.retrieveAt(20, retItem);   
   cout << "Location 20 before: " << retItem << "." << endl;

   list1.removeAt(20);

   list1.retrieveAt(20, retItem);
   cout << "Location 20 after: " << retItem << "." << endl;

   cout << "List size after: " << list1.listSize() << "." << endl;

   cout << "Checking if value 50 is in list 1." << endl;

   if (list1.seqSearch(50) == 1)
      cout << "Value found in list." << endl;
   else
      cout << "Value not found in list." << endl;

   cout << "Replacing value 30 with value 40." << endl;

   list1.retrieveAt(30, retItem);
   list1.retrieveAt(40, retItem2);
   cout << "Location 30 before: " << retItem << ", location 40 before: " << retItem2 << endl;

   list1.removeAt(30);
   list1.removeAt(40);

   list1.insertAt(30, retItem2);
   list1.insertAt(40, retItem);

   list1.retrieveAt(30, retItem);
   list1.retrieveAt(40, retItem2);
   cout << "Location 30 after: " << retItem << ", location 40 after: " << retItem2 << endl;

   cout << "Clearning list 1." << endl;
 
   list1.clearList();

   cout << "Printing list 1:" << endl;
   list1.print();
}

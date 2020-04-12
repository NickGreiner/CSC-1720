/*
Name: Nick Greiner
Class: CSC-1720-02
Date: 11/03/19
Path: /home/students/ngreiner/csc1720/lab10
*/

#include<iostream>
#include"arrayListType.h"
#include"orderedArrayListType.h"

using namespace std;

int main() 
{
   srand(time(0));
   int retItem;
   int retItem2;
   cout << "Creating a new list, list 1." << endl;

   orderedArrayListType list1;

   cout << "Adding 50 numbers to list 1." << endl;

   for (int x = 0; x < 50; x++)
      list1.insert(1);

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

   cout << "Testing the copy constructor on new list, list 2." << endl;

   orderedArrayListType list2(list1);

   cout << "List 1:" << endl;

   list1.print();

   cout << "List 2:" << endl;

   list2.print();

   for (int x = 0; x < 50; x++)
      list1.insert(1);

   cout << "The size of list 1 is " << list1.listSize() << "." << endl;
   cout << "The size of list 2 is " << list2.listSize() << "." << endl;

   cout << "Setting list 2 to list 1 using assignment." << endl;

   list2 = list1;

   cout << "The size of list 2 is " << list2.listSize() << "." << endl;
}

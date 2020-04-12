/*
Name: Nick Greiner
Date: 11/5/19
Class: CSC-1720-02
Path: /home/students/ngreiner/csc1720/lab11
*/

//Data: 2.85 6.74 28.93 61.22 10.00 45.34 61.78 5.75

#include <iostream>

#include <string>
 
#include "unorderedArrayListType.h"

using namespace std; 

int main() 
{
    unorderedArrayListType<double> numList(25); 

    double num;
    double num2;                                

    cout << "Enter 8 numbers: ";        

    for (int count = 0; count < 8; count++)     
    {
        cin >> num;                             
        numList.insertEnd(num);                 
    }

    cout << endl;                               

    cout << "numList: ";               
    numList.print();                           
    cout << endl;                               

    cout << "Enter the number to be " 
         << "deleted: ";                        
    cin >> num;                                 
    cout << endl;                               

    numList.remove(num);                        
    cout << "After removing " << num
         << " numList: ";                       
    numList.print();                            
    cout << endl;                              
 
    cout << "Enter the search item: "; 

    cin >> num;                                 
    cout << endl;                               

    if (numList.seqSearch(num) != -1)           
        cout <<  num << " found in numList." << endl;   
    else                                        
        cout <<  num << " is not in numList." << endl;  

    cout << endl;

    cout << "Enter location of number to be inserted, then number to be inserted: ";
    cin >> num;
    cin >> num2;
    cout << endl;

    numList.insertAt(num, num2);

    cout << "numList: ";
    numList.print();
    cout << endl;

    if (numList.isEmpty())
        cout << "numList is empty." << endl;
    else
        cout << "numList is not empty." << endl;

    cout << endl;


    if (numList.isFull())
        cout << "numList is full." << endl;
    else
        cout << "numList is not full." << endl;

    cout << endl;

    cout << "The size of numList is " << numList.listSize() << "." << endl;

    cout << endl;

    cout << "The max size of numList is " << numList.maxListSize() << "." << endl;

    cout << endl;

    cout << "Creating numList2 using copy constructor of numList." << endl;

    unorderedArrayListType<double> numList2(numList);

    cout << endl;

    cout << "numList: ";
    numList.print();
    cout << endl;

    cout << endl;

    cout << "numList2: ";
    numList2.print();
    cout << endl;

    cout << endl;

    cout << "Clearing numList." << endl;

    cout << endl;

    numList.clearList();

    numList2.clearList();

    cout << "numList: ";
    numList.print();
    cout << endl;

    unorderedArrayListType<int> intList(25);

    int int1;
    int int2;

    cout << "Enter 8 integers: ";

    for (int count = 0; count < 8; count++)
    {
        cin >> int1;
        intList.insertEnd(int1);
    }

    cout << endl;

    cout << "intList: ";
    intList.print();
    cout << endl;

    cout << "Enter the integer to be "
         << "deleted: ";
    cin >> int1;
    cout << endl;

    intList.remove(int1);
    cout << "After removing " << int1
         << " intList: ";
    intList.print();
    cout << endl;

    cout << "Enter the search item: ";

    cin >> int1;
    cout << endl;

    if (intList.seqSearch(int1) != -1)
        cout <<  int1 << " found in intList." << endl;
    else
        cout <<  int1 << " is not in intList." << endl;

    cout << endl;

    cout << "Enter location of integer to be inserted, then integer to be inserted: ";
    cin >> int1;
    cin >> int2;
    cout << endl;

    intList.insertAt(int1, int2);

    cout << "intList: ";
    intList.print();
    cout << endl;

    if (intList.isEmpty())
        cout << "intList is empty." << endl;
    else
        cout << "intList is not empty." << endl;

    cout << endl;


    if (intList.isFull())
        cout << "intList is full." << endl;
    else
        cout << "intList is not full." << endl;

    cout << endl;

    cout << "The size of intList is " << intList.listSize() << "." << endl;

    cout << endl;

    cout << "The max size of intList is " << intList.maxListSize() << "." << endl;

    cout << endl;

    cout << "Creating intList2 using copy constructor of intList." << endl;

    unorderedArrayListType<int> intList2(intList);

    cout << endl;

    cout << "intList: ";
    intList.print();
    cout << endl;

    cout << endl;

    cout << "intList2: ";
    intList2.print();
    cout << endl;

    cout << endl;

    cout << "Clearing intList." << endl;

    cout << endl;

    intList.clearList();

    intList2.clearList();

    cout << "intList: ";
    intList.print();
    cout << endl;

    unorderedArrayListType<string> stringList(25);

    string string1;
    string string2;

    cout << "Enter 8 strings: ";

    for (int count = 0; count < 8; count++)
    {
        cin >> string1;
        stringList.insertEnd(string1);
    }

    cout << endl;

    cout << "stringList: ";
    stringList.print();
    cout << endl;

    cout << "Enter the string to be "
         << "deleted: ";
    cin >> string1;
    cout << endl;

    stringList.remove(string1);
    cout << "After removing " << string1
         << " stringList: ";
    stringList.print();
    cout << endl;

    cout << "Enter the search item: ";

    cin >> string1;
    cout << endl;

    if (stringList.seqSearch(string1) != -1)
        cout <<  string1 << " found in stringList." << endl;
    else
        cout <<  string1 << " is not in stringList." << endl;

    cout << endl;

    cout << "Enter location of string to be inserted, then string to be inserted: ";
    cin >> string1;
    cin >> string2;
    cout << endl;

    //stringList.insertAt(string1, string2);

    cout << "stringList: ";
    stringList.print();
    cout << endl;

    if (stringList.isEmpty())
        cout << "stringList is empty." << endl;
    else
        cout << "stringList is not empty." << endl;

    cout << endl;


    if (stringList.isFull())
        cout << "stringList is full." << endl;
    else
        cout << "stringList is not full." << endl;

    cout << endl;

    cout << "The size of stringList is " << stringList.listSize() << "." << endl;

    cout << endl;

    cout << "The max size of stringList is " << stringList.maxListSize() << "." << endl;

    cout << endl;

    cout << "Creating stringList2 using copy constructor of stringList." << endl;

    unorderedArrayListType<string> stringList2(stringList);

    cout << endl;

    cout << "stringList: ";
    stringList.print();
    cout << endl;

    cout << endl;

    cout << "stringList2: ";
    stringList2.print();
    cout << endl;

    cout << endl;

    cout << "Clearing stringList." << endl;

    cout << endl;

    stringList.clearList();

    stringList2.clearList();

    cout << "stringList: ";
    stringList.print();
    cout << endl;

    return 0;                                   
}

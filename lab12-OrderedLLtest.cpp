//Program to test the various operations on an ordered linked list
  
#include <iostream>
#include "orderedLinkedList.h"
 
using namespace std;
 
int main()
{
    orderedLinkedList<int> list1, list2;        
    int num;                                    

    cout << "Creating int list with input 77 11 44 99 33 55" << endl ;

        list1.insertLast(77);                      
        list1.insertLast(11);
        list1.insertLast(44);
        list1.insertLast(99);        
        list1.insertLast(33);
        list1.insertLast(55);

    cout << endl;                               

    cout << "list1: ";                  
    list1.print();                             
    cout << endl;
    cout << "Length of list1: "
         << list1.length() << endl;                               

    list2 = list1; //test the assignment operator 

    cout << "list2: ";                 
    list2.print();                              
    cout << endl;
    cout << "Length of list2: "
         << list2.length() << endl;                              

    cout << "Enter the number to be "
         << "deleted: ";                        
    cin >> num;                               
    cout << endl;                               

    list2.deleteNode(num);                     

    cout << "After deleting "
         << num << endl << "list2: " ;         
    list2.print();                              
    cout << endl;

    cout << "Length of list2: "
         << list2.length() << endl;

    cout << "Deleting smallest number in list2." << endl;

    list2.deleteSmallest();  

    cout << "After deleting smallest in list2: ";
    list2.print();
    cout << endl;

    cout << "Printing list1 in reverse: ";
    list1.reversePrint();
    cout << endl;

    cout << endl << "Output list1 " 
         << "using an iterator:" << endl;            

    linkedListIterator<int> it;                  

    for (it = list1.begin(); it != list1.end(); 
                             ++it)                  
        cout << *it << " ";                        
    cout << endl;          

    cout << endl;
    cout << "============================================" << endl;
    cout << endl;

    orderedLinkedList<double> list3, list4;
    double num2;

    cout << "Creating double list with input 77.77 11.11 44.44 99.99 33.33 55.55" << endl;

        list3.insertLast(77.77);
        list3.insertLast(11.11);
        list3.insertLast(44.44);
        list3.insertLast(99.99);
        list3.insertLast(33.33);
        list3.insertLast(55.55);

    cout << endl;

    cout << "list3: ";
    list3.print();
    cout << endl;
    cout << "Length of list3: "
         << list3.length() << endl;

    list4 = list3;
 
    cout << "list4: ";
    list4.print();
    cout << endl;
    cout << "Length of list4: "
         << list4.length() << endl;

    cout << "Enter the double to be "
         << "deleted: ";
    cin >> num2;
    cout << endl;

    list4.deleteNode(num2);

    cout << "After deleting "
         << num2 << endl << "list4: ";
    list4.print();
    cout << endl;

    cout << "Length of list4: "
         << list4.length() << endl;

    cout << "Deleting smallest double in list4." << endl;

    list4.deleteSmallest();

    cout << "After deleting smallest in list4: ";
    list4.print();
    cout << endl;

    cout << "Printing list3 in reverse: ";
    list3.reversePrint();
    cout << endl;

    cout << endl << "Output list3 "
         << "using an iterator:" << endl;

    linkedListIterator<double> it2;

    for (it2 = list3.begin(); it2 != list3.end();
                              ++it2)
        cout << *it2 << " ";
    cout << endl;
   
    return 0;					
}




//This program tests various operations of an unordered linked list
 
#include <iostream>
#include "unorderedLinkedList.h"

using namespace std; 

int main()
{
    unorderedLinkedList<int> listA, listB;          
    int num;                                        

    cout << "Creating int list with input 22 7 48 93 14 2" << endl;

        listA.insertLast(22);                      
        listA.insertLast(7);
        listA.insertLast(48);
        listA.insertLast(93);        
        listA.insertLast(14);
        listA.insertLast(2);
        
    cout << endl;                                   

    cout << "listA: ";                      
    listA.print();                                  
    cout << endl;                                   
    cout << "Length of listA: " 
         << listA.length() << endl;                 

    listB = listA; //test the assignment operator 

    cout << endl << "listB: ";                     
    listB.print();                                  
    cout << endl;                                   
    cout << "Length of listB: " 
         << listB.length() << endl;                 

    cout << endl << "Enter the number to be "
         << "deleted: ";                           
    cin >> num;                                     
    cout << endl;                                   

    listB.deleteNode(num);                          
	
    cout << "After deleting " << num 
         << endl << "listB: ";                     
    listB.print();                                  
    cout << endl;                                

    cout << "Length of listB: " 
         << listB.length() << endl;              

    cout << "Deleting smallest number in listB." << endl;

    listB.deleteSmallest();

    cout << "After deleting smallest in listB: ";
    listB.print();
    cout << endl;

    cout << "Printing listA in reverse: ";
    listA.reversePrint();
    cout << endl;

    cout << endl << "Output listA " 
         << "using an iterator:" << endl;            

    linkedListIterator<int> it;                  

    for (it = listA.begin(); it != listA.end(); 
                             ++it)                  
        cout << *it << " ";                        
    cout << endl; 

    cout << endl;
    cout << "============================================" << endl;
    cout << endl;

    unorderedLinkedList<char> listC, listD;
    char char1;

    cout << "Creating char list with input G R E I N E R" << endl;

        listC.insertLast('G');
        listC.insertLast('R');
        listC.insertLast('E');
        listC.insertLast('I');
        listC.insertLast('N');
        listC.insertLast('E');
        listC.insertLast('R');

    cout << endl;

    cout << "listC: ";
    listC.print();
    cout << endl;
    cout << "Length of listC: "
         << listC.length() << endl;

    listD = listC;

    cout << endl << "listD: ";
    listD.print();
    cout << endl;
    cout << "Length of listD: "
         << listD.length() << endl;

    cout << endl << "Enter the character to be "
         << "deleted: ";
    cin >> char1;
    cout << endl;

    listD.deleteNode(char1);

    cout << "After deleting " << char1
         << endl << "listD: ";
    listD.print();
    cout << endl;

    cout << "Length of listD: "
         << listD.length() << endl;

    cout << "Deleting smallest character in listD." << endl;

    listD.deleteSmallest();

    cout << "After deleting smallest in listD: ";
    listD.print();
    cout << endl;

    cout << "Printing listC in reverse: ";
    listC.reversePrint();
    cout << endl;

    cout << endl << "Output listC "
         << "using an iterator:" << endl;

    linkedListIterator<char> it2;

    for (it2 = listC.begin(); it2 != listC.end();
                              ++it2)
        cout << *it2 << " ";
    cout << endl;

    return 0;					
}




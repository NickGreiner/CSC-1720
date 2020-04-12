//This program tests various operations of a linked stack
/*
Name: Nick Greiner
Class: CSC-1720-02
Date: 11/19/19
Path: /home/students/ngreiner/csc1720/lab13
*/
 
#include <iostream>
#include "linkedStack.h"
   
using namespace std; 

void testCopy(linkedStackType<int> OStack);

int main()
{
    linkedStackType<int> stack;
    linkedStackType<int> otherStack;
    linkedStackType<int> newStack;

    int num, entrySize;

        //Add elements into stack
    stack.push(28);
    stack.push(94);
    stack.push(37);

        //Use the assignment operator to copy the elements
        //of stack into newStack
    newStack = stack;

    cout << "After the assignment operator, newStack: "; 

        //Output the elements of newStack
    while (!newStack.isEmptyStack())
    {
        cout << newStack.top() << " ";	
        newStack.pop();
    }
    cout << endl;

        //Use the assignment operator to copy the elements
        //of stack into otherStack
    otherStack = stack;

    cout << endl;

    cout << "Testing the copy constructor." << endl;

    testCopy(otherStack);

    cout << "After the copy constructor, otherStack: ";

    while (!otherStack.isEmptyStack())
    {
        cout << otherStack.top() << " ";	
        otherStack.pop();
    }
    cout << endl;

    linkedStackType<int> stack1, stack2;
    
    cout << endl;

    cout << "Testing reverseStack." << endl;

    cout << "How many numbers do you want to enter into stack1? ";
    cin >> entrySize;
    cout << endl;

    cout << "Enter " << entrySize << " numbers: ";
    for (int i = 0; i < entrySize; i++)
    {
        cin >> num;
        stack1.push(num);
    }
    cout << endl;

    stack1.reverseStack(stack2);

    newStack = stack1;
    cout << "The elements of stack1: ";
    while (!newStack.isEmptyStack())
    {
        cout << newStack.top() << " ";
        newStack.pop();
    }
    cout << endl;

    newStack = stack2;
    cout << "The elements of stack2: ";
    while (!newStack.isEmptyStack())
    {
        cout << newStack.top() << " ";
        newStack.pop();
    }
    cout << endl;

    stack1.initializeStack();
    stack2.initializeStack();

    cout << endl;

    cout << "Testing reverseStack if stack2 is not empty." << endl;

    cout << "How many numbers do you want to enter into stack1? ";
    cin >> entrySize;
    cout << endl;

    cout << "Enter " << entrySize << " numbers: ";
    for (int i = 0; i < entrySize; i++)
    {
        cin >> num;
        stack1.push(num);
    }
    cout << endl;

    stack2.push(45);
    stack2.push(56);

    stack1.reverseStack(stack2);

    newStack = stack1;
    cout << "The elements of stack1: ";
    while (!newStack.isEmptyStack())
    {
        cout << newStack.top() << " ";
        newStack.pop();
    }
    cout << endl;

    newStack = stack2;
    cout << "The elements of stack2: ";
    while (!newStack.isEmptyStack())
    {
        cout << newStack.top() << " ";
        newStack.pop();
    }
    cout << endl;

    return 0;
}
  
     //Function to test the copy constructor
void testCopy(linkedStackType<int> OStack) 
{
    cout << "Stack in the function testCopy: ";

    while (!OStack.isEmptyStack())
    {
        cout << OStack.top() << " ";
        OStack.pop();
    }
    cout << endl;
}

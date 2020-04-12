//Program to test the various operations of a stack
/*
Name: Nick Greiner
Class: CSC-1720-2
Date: 11/19/19
Path: /home/students/ngreiner/csc1720/lab13
*/
 
#include <iostream>
#include "myStack.h"
  
using namespace std;
 
void testCopyConstructor(stackType<int> otherStack);
 
int main()
{
    stackType<int> stack(50);
    stackType<int> copyStack(50);
    stackType<int> dummyStack(100); 

    stack.initializeStack();
    stack.push(85);
    stack.push(28);
    stack.push(56);
    copyStack = stack;  //copy stack into copyStack

    cout << "The elements of copyStack: ";
    while (!copyStack.isEmptyStack())  //print copyStack
    {
        cout << copyStack.top() << " ";
        copyStack.pop();
    }
    cout << endl;

    copyStack = stack;
    testCopyConstructor(stack);  //test the copy constructor

    if (!stack.isEmptyStack())
        cout << "The original stack is not empty." << endl
             << "The top element of the original stack: "
             << copyStack.top() << endl;

    dummyStack = stack;  //copy stack into dummyStack

    cout << "The elements of dummyStack: ";
    while (!dummyStack.isEmptyStack())  //print dummyStack
    {
        cout << dummyStack.top() << " ";
        dummyStack.pop();
    }
    cout << endl;

    stackType<int> stack1, stack2;
    int num, entrySize;

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

    copyStack = stack1;
    cout << "The elements of stack1: ";
    while (!copyStack.isEmptyStack())
    {
        cout << copyStack.top() << " ";
        copyStack.pop();
    }
    cout << endl;

    copyStack = stack2;
    cout << "The elements of stack2: ";
    while (!copyStack.isEmptyStack())
    {
        cout << copyStack.top() << " ";
        copyStack.pop();
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

    stack2.push(34);
    stack2.push(45);

    stack1.reverseStack(stack2);

    copyStack = stack1;
    cout << "The elements of stack1: ";
    while (!copyStack.isEmptyStack())
    {
        cout << copyStack.top() << " ";
        copyStack.pop();
    }
    cout << endl;

    copyStack = stack2;
    cout << "The elements of stack2: ";
    while (!copyStack.isEmptyStack())
    {
        cout << copyStack.top() << " ";
        copyStack.pop();
    }
    cout << endl;

    return 0;
}

void testCopyConstructor(stackType<int> otherStack)
{
    if (!otherStack.isEmptyStack())
        cout << "otherStack is not empty." << endl
             << "The top element of otherStack: "
             << otherStack.top() << endl;
}

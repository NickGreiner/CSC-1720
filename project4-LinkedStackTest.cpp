//Program to convert a decimal number into an equivalent binary number.

/*
Name: Nick Greiner
Class: CSC-1720-02
Date: 11/19/19
Path: /home/students/ngreiner/csc1720/project4
*/
 
#include <iostream>
#include <string>
#include <math.h>
#include "linkedStack.h"
   
using namespace std; 

string convert(int);

int main()
{
    int input;

    cout << "Enter decimal number to convert to binary: ";
    cin >> input;
    cout << endl;

    if (!cin)
    {
        cin.ignore();

        while (!cin)
        {
            cin.clear();
            cin.ignore();

            cout << "Invalid input. Input must be an integer." << endl;
            cout << "Enter decimal number to convert to binary: ";
            cin >> input;
            cout << endl;
        }
    }

    cout << input << " in binary: " << convert(input) << "." << endl;

    return 0;
}

string convert(int decimal) //Function to return a binary string from a decimal input. Precondition: Input must be an integer.
{
    linkedStackType<int> convertStack;

    string binary;

    for (int i = 0; decimal > 0; i++)
    {
        convertStack.push(decimal % 2);
        decimal = decimal / 2;
    }

    while (!convertStack.isEmptyStack())
    {
        binary = binary + to_string(convertStack.top());
        convertStack.pop();
    }

    return binary;
}

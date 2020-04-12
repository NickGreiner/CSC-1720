//Program to convert a binary number into an equivalent decimal number.

/*
Name: Nick Greiner
Class: CSC-1720-02
Date: 11/19/19
Path: /home/students/ngreiner/csc1720/project4
*/
 
#include <iostream>
#include <string>
#include <math.h>
#include "myStack.h"
  
using namespace std;
 
int convert(string);

int main()
{
    string input;

    bool nonBinary;

    cout << "Enter binary number to convert to decimal: ";
    cin >> input;
    cout << endl;

    for (string::iterator it = input.begin(); it != input.end(); ++it)
    {
        if (!(*it == '0') && !(*it == '1'))
            nonBinary = true;
    }

    if (nonBinary)
    {
        while (nonBinary)
        {
            cout << "Invalid input. Input must be binary." << endl;
            cout << "Enter binary number to convert to decimal: ";
            cin >> input;
            cout << endl;

            for (string::iterator it = input.begin(); it != input.end(); ++it)
            {
                if (!(*it == '0') && !(*it == '1'))
                    nonBinary = true;
                else
                    nonBinary = false;
            }
        }
    }

    cout << input << " in decimal: " << convert(input) << "." << endl;

    return 0;
}

int convert(string binary) //Function to return a decimal integer from a binary string input. Precondition: Input must be binary.
{
    stackType<int> convertStack;

    int count = 0;

    int decimal = 0;

    for (string::iterator it = binary.begin(); it != binary.end(); ++it)
        convertStack.push(*it);

    while (!convertStack.isEmptyStack())
    {
        if (!(convertStack.top() == 48))
        {
            decimal = decimal + pow(2, count);
        }

        convertStack.pop();
        count++;
    }

    return decimal;
}

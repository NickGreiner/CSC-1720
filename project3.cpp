/*
Name: Nick Greiner
Date: 11/6/19
Class: CSC-1720-02
Path: /home/students/ngreiner/csc1720/project3
*/

#include <iostream>

using namespace std;

int repower(int, int);
//Recursive power function

void menu();
//Main menu function

double NEGRETURN;
//Global double value used for return when k is negative

int main()
{
   menu();
   return 0;
}

int repower(int j, int k)
{
   if (k == 0) //Repower(j,k) = 1	if k = 0
      return 1;

   else if (k == 1) //Repower(j,k) = j	if k = 1
      return j;

   else if (k > 1) //Repower(j,k) = j * Repower(j,k-1)	if k > 1
      return (j * repower(j, k-1));

   else if (k < 0) //Repower(j,k) = 1 / (Repower(j,-k))	if k < 0
      NEGRETURN = (1 / (static_cast<double>(repower(j, -k))));

   return 0;
}

void menu()
{
   int input1, input2;
   char prompt;

   cout << "Enter value for j: ";
   cin >> input1;
   cout << endl;

   if (input1 <= 0) //If statement to test if j is negative
   {
      while (input1 <= 0) //Loop to re-prompt user for positive j value
      {
         cout << "Invalid value, j must be positive. Enter value for j: ";
         cin >> input1;
         cout << endl;
      }
   }

   cout << "Enter value for k: ";
   cin >> input2;
   cout << endl;

   if (input2 < 0) //If statement to test if k is negative
   {
      repower(input1, input2);
      cout << "Result: " << NEGRETURN << endl;
   }

   else	//Runs normal function if k is non-negative
      cout << "Result: " << repower(input1, input2) << endl;

   cout << "Do you want to run again? Y/N: ";
   cin >> prompt;
   cout << endl;

   if ((prompt != 'Y') && (prompt != 'y') && (prompt != 'N') && (prompt != 'n')) //If statement to test if prompt entry is Y, y, N, or n
   {
      while ((prompt != 'Y') && (prompt != 'y') && (prompt != 'N') && (prompt != 'n')) //Loop to re-prompt user for valid prompt entry
      {
         cout << "Invalid entry, do you want to run again? Y/N: ";
         cin >> prompt;
         cout << endl;
      }
   }

   if ((prompt == 'Y') || (prompt == 'y')) //If statement to re-call menu function if prompt is Y or y
      menu();
}

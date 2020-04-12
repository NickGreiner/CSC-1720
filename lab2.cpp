/* 
Name: Nick Greiner
Date: 08/27/2019
Class: CSC1720-02
Path: /home/students/ngreiner/csc1720/lab2/
*/

#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;

int main() {

  // Sets file input/output variables:
  ifstream inFile;
  ofstream outFile;

  // Creates string/double variables for storing input strings:
  char ch;
  string firstName = " ";
  string lastName = " ";
  string department = " ";

  double salary;
  double bonus;
  double taxes;
  double paycheck;

  double distanceTraveled;
  double time;
  double avgSpeed;

  double coffeeSold;
  double cost;
  double salesAmount;

  // Opens "inFile.txt"
  inFile.open("inFile.txt");

  // Grabs first strings from inFile and stores them in variables for later
  inFile >> firstName >> lastName >> department;
  inFile >> salary >> bonus >> taxes;

  // Sets paycheck from salary, bonus, and taxes.
  paycheck = salary + (salary * (bonus / 100)); 
  paycheck = paycheck - (paycheck * (taxes / 100));

  // Grabs next strings from inFile and stores them
  inFile >> distanceTraveled >> time;

  // Sets Average Speed from distance traveled and time
  avgSpeed = distanceTraveled / time;

  // Grabs last strings and stores them
  inFile >> coffeeSold >> cost;

  // Sets Sales Ammount from coffee sold and cost
  salesAmount = coffeeSold * cost;

  // Closes "inFile.txt"
  inFile.close();

  // Opens "outFile.txt" then writes output using string/double variables from before
  outFile.open("outFile.txt");

  outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;
  outFile << setprecision(2) << fixed << "Monthly Gross Salary: $" << salary << ", Monthly Bonus: " << bonus << "%, Taxes: " << taxes << "%" << endl;
  outFile << "Paycheck: $" << paycheck << endl;
  outFile << endl;
 
  outFile << "Distance Traveled: " << distanceTraveled << " miles, Traveling Time: " << time << " hours" << endl;
  outFile << "Average Speed: " << avgSpeed << " miles per hour" << endl;
  outFile << endl;
 
  outFile << "Number of Coffee Cups Sold: " << setprecision(0) << fixed << coffeeSold << ", Cost: $" << setprecision(2) << fixed << cost << " per cup" << endl;
  outFile << "Sales Amount = $" << salesAmount << endl;

  // Closes "outFile.txt"
  outFile.close();

};

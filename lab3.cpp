/*
Name: Nick Greiner
Class: CSC-1720-02
Date: 9/3/2019
Path: /home/students/ngreiner/csc1720/lab3/
*/

#include<iostream>
#include<math.h>

using namespace std;

// Sets a global variable for PI
double pi = 3.1416;

// Creates function prototypes
double distance(int x1, int y1, int x2, int y2);
double diameter(double dist);
double circumference(double radius);
double area(double Radius);

int main() {

   // Creates my input variables
   int centerX;
   int centerY;
   int pointX;
   int pointY;

   // Asks for first cordinate of center
   cout << "Enter center X: ";
   cin >> centerX;

   // Asks for the second cordinate of center
   cout << "Enter center Y: ";
   cin >> centerY;

   // Asks for first cordinate of point
   cout << "Enter point X: ";
   cin >> pointX;

   // Asks for second cordinate of point
   cout << "Enter point Y: ";
   cin >> pointY;
   cout << endl;

   // Calculates radius based on inputs
   double radius = distance(centerX, centerY, pointX, pointY);

   // Outputs variables
   cout << "Radius: " << radius << endl;
   cout << "Diameter: " << diameter(radius) << endl;
   cout << "Circumference: " << circumference(radius) << endl;
   cout << "Area: " << area(radius) << endl;

};

// Function to calculate distance(radius) from inputs
double distance(int x1, int y1, int x2, int y2) {

   double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
   return dist;

};

// Function to calculate diameter from distance(radius)
double diameter(double dist) {

   double diam = dist * 2;
   return diam;

};

// Function to calculate circumference from radius
double circumference(double radius) {

   double circ = 2 * pi * radius;
   return circ;

};

// Function to calculate area from radius
double area(double Radius) {

   double ar = pi * pow(Radius, 2);
   return ar;

};






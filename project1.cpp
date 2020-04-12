/*
Name: Nick Greiner
Class: CSC-1720-02
Date: 09/19/19
Path: /home/students/ngreiner/csc1720/project1
*/

#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<algorithm>

using namespace std;

// Creates function prototypes
void inputData(string path);
void singlePlayer();
void allPlayers();
void writeData();
void updateAces();
void sortPlayers();
void menu();

int quit;

// Creates struct for player info
struct player
{
   string name;
   string position;
   double blocks;
   int kills;
   int aces;
   int digs;
   int assists;
};

// Creates array for player structs
struct player arr[10];

// Main program, calls menu and quits if called to quit
int main()
{
   menu();
   
   if (quit == 1)
      return 0;
};

// Menu function
void menu()
{
   int menuOption;

   // Main menu output
   cout << endl;
   cout << "Menu:" << endl;
   cout << "Option 1: Input Data" << endl;
   cout << "Option 2: Single Player" << endl;
   cout << "Option 3: All Players" << endl;
   cout << "Option 4: Update Service Aces" << endl;
   cout << "Option 5: Sort players by Service Aces" << endl;
   cout << "Option 6: Quit" << endl;
   cout << endl;

   cin >> menuOption;

   // If.. Else... for menu options
   if (menuOption == 1)
   {
      string inputPath;

      cout << "Enter input path: ";
      cin >> inputPath;
      cout << endl;

      inputData(inputPath);
   }

   else if (menuOption == 2)
   {
      singlePlayer();
   }

   else if (menuOption == 3)
   {
      allPlayers();
   }

   else if (menuOption == 4)
   {
      updateAces();
   }

   else if (menuOption == 5)
   {
      sortPlayers();
   }

   else if (menuOption == 6)
   {
      char quitOption;

      cout << "Do you want to output data? Y/N: ";
      cin >> quitOption;
      cout << endl;
   
      if (quitOption == 'Y' || quitOption == 'y')
      {
         writeData();
      }
      quit = 1;
   }

   else
   {
      cout << "Unknown input, try again" << endl;
      menu();
   }
}

// Input function
void inputData(string path)
{
   string tempName;
   string name;
   ifstream inFile;

   // Opens specified input path and reads data
   inFile.open(path);
   for(int i; i < 10; i++)
   {
      inFile >> arr[i].name;
      inFile >> arr[i].position;
      inFile >> arr[i].blocks;
      inFile >> arr[i].kills;
      inFile >> arr[i].aces;
      inFile >> arr[i].digs;
      inFile >> arr[i].assists;
   };
   inFile.close();

   cout << "Input complete." << endl;

   menu();
}

// Update player aces function
void updateAces()
{
   string playerName;

   int playerSelect;

   int updatedAceNumber;

   cout << "Enter player name: ";
   cin >> playerName;
   cout << endl;

   // If... Else... to find correct player struct in array
   if (playerName == arr[0].name)
      playerSelect = 0;

   else if (playerName == arr[1].name)
      playerSelect = 1;

   else if (playerName == arr[2].name)
      playerSelect = 2;

   else if (playerName == arr[3].name)
      playerSelect = 3;

   else if (playerName == arr[4].name)
      playerSelect = 4;

   else if (playerName == arr[5].name)
      playerSelect = 5;

   else if (playerName == arr[6].name)
      playerSelect = 6;

   else if (playerName == arr[7].name)
      playerSelect = 7;

   else if (playerName == arr[8].name)
      playerSelect = 8;

   else if (playerName == arr[9].name)
      playerSelect = 9;

   else
   {
      cout << "Error, try again." << endl;
      updateAces();
   }

   cout << "Enter updated aces number: ";
   cin >> updatedAceNumber;
   cout << endl;

   // Updates aces for selected player
   arr[playerSelect].aces = updatedAceNumber;

   menu();
}

// Bool function to compare aces values of two structs
bool compareAce(player const& lhs, player const& rhs)
{
   return lhs.aces > rhs.aces;
}

// Sort function to sort array by aces values
void sortPlayers()
{
   int n = sizeof(arr)/sizeof(arr[0]);

   sort(arr, arr+n, compareAce);

   menu();
}

// Constants for use in print (cout, outFile)
const char separator = ' ';
const int nameWidth = 12;
const int posWidth = 22;
const int blocksWidth = 17;
const int killsWidth = 8;
const int aceWidth = 15;
const int digWidth = 7;
const int assistsWidth = 10;

// Template for printing (cout)
template<typename T> void printPlayer(T t, const int& width)
{
   cout << left << setw(width) << setfill(separator) << t;
}

// Function to print a single player
void singlePlayer()
{
   string playerName;

   int playerSelect;

   cout << "Enter player name: ";
   cin >> playerName;
   cout << endl;

   if (playerName == arr[0].name)
      playerSelect = 0;

   else if (playerName == arr[1].name)
      playerSelect = 1;

   else if (playerName == arr[2].name)
      playerSelect = 2;

   else if (playerName == arr[3].name)
      playerSelect = 3;

   else if (playerName == arr[4].name)
      playerSelect = 4;

   else if (playerName == arr[5].name)
      playerSelect = 5;

   else if (playerName == arr[6].name)
      playerSelect = 6;

   else if (playerName == arr[7].name)
      playerSelect = 7;

   else if (playerName == arr[8].name)
      playerSelect = 8;

   else if (playerName == arr[9].name)
      playerSelect = 9;

   else
   {
      cout << "Error, try again." << endl;
      singlePlayer();
   }

   printPlayer("Name", nameWidth);
   printPlayer("Position", posWidth);
   printPlayer("Blocks per set", blocksWidth);
   printPlayer("Kills", killsWidth);
   printPlayer("Service Aces", aceWidth);
   printPlayer("Digs", digWidth);
   printPlayer("Assists", assistsWidth);
   cout << endl;

   printPlayer(arr[playerSelect].name, nameWidth);
   printPlayer(arr[playerSelect].position, posWidth);
   printPlayer(arr[playerSelect].blocks, blocksWidth);
   printPlayer(arr[playerSelect].kills, killsWidth);
   printPlayer(arr[playerSelect].aces, aceWidth);
   printPlayer(arr[playerSelect].digs, digWidth);
   printPlayer(arr[playerSelect].assists, assistsWidth);
   cout << endl;

   menu();
}

// Function to print all players
void allPlayers()
{
   printPlayer("Name", nameWidth);
   printPlayer("Position", posWidth);
   printPlayer("Blocks per Set", blocksWidth);
   printPlayer("Kills", killsWidth);
   printPlayer("Service Aces", aceWidth);
   printPlayer("Digs", digWidth);
   printPlayer("Assists", assistsWidth);
   cout << endl;

   for(int i = 0; i < 10; i++)
   {
      printPlayer(arr[i].name, nameWidth);
      printPlayer(arr[i].position, posWidth);
      printPlayer(arr[i].blocks, blocksWidth);
      printPlayer(arr[i].kills, killsWidth);
      printPlayer(arr[i].aces, aceWidth);
      printPlayer(arr[i].digs, digWidth);
      printPlayer(arr[i].assists, assistsWidth);
      cout << endl;
   }

   menu();
}

// Function to write data to a specified file
void writeData()
{
   string outputFile;
   ofstream outFile;

   cout << "Enter output file: ";
   cin >> outputFile;
   cout << endl;

   outFile.open(outputFile);

   outFile << left << setw(nameWidth) << setfill(separator) << "Name";
   outFile << left << setw(posWidth) << setfill(separator) << "Position";
   outFile << left << setw(blocksWidth) << setfill(separator) << "Blocks per Set";
   outFile << left << setw(killsWidth) << setfill(separator) << "Kills";
   outFile << left << setw(aceWidth) << setfill(separator) << "Service Aces";
   outFile << left << setw(digWidth) << setfill(separator) << "Digs";
   outFile << left << setw(assistsWidth) << setfill(separator) << "Assists";
   outFile << endl;

   for(int i; i < 10; i++)
   {
      outFile << left << setw(nameWidth) << setfill(separator) << arr[i].name;
      outFile << left << setw(posWidth) << setfill(separator) << arr[i].position;
      outFile << left << setw(blocksWidth) << setfill(separator) << arr[i].blocks;
      outFile << left << setw(killsWidth) << setfill(separator) << arr[i].kills;
      outFile << left << setw(aceWidth) << setfill(separator) << arr[i].aces;
      outFile << left << setw(digWidth) << setfill(separator) << arr[i].digs;
      outFile << left << setw(assistsWidth) << setfill(separator) << arr[i].assists;
      outFile << endl;
   }
   
   outFile.close();
}

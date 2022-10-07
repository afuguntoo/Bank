//Joaquin Afugu Ntoo
//11/15/2021
/*Program that uses clases to print the amount of money that each class of a school raised, the total amount of money and the class that raised the most amount of money*/

//Library
#include <iostream>
#include <fstream>
#include <iomanip>
#include "pbank.h"

using namespace std;

int main() 
{
  //Delclaration
  double totalAmount;
  double maxGain;

  ifstream inf("coins.txt");
  if(!inf){
    cout << "The input file could be opened" << endl;
    return 8;
  }
  ofstream outf("money.txt");

  int nQ, nD, nN, nP;
  string clas[6];
  PiggyBank grades[6];
  
  //Getting the data from the input file to store it in the array
  for (int x = 0; x< 6; x++){
    inf >> clas[x] >> nQ >> nD >> nN >> nP;
    grades[x].setM(nQ, nD, nN, nP);

  }

  //Prining hte data
  for (int x = 0; x<6; x++){
   outf << fixed << showpoint << setprecision(2);
   outf <<  clas[x] <<". ";
   outf << "Total amount of money: $" << grades[x].AddMoney() << endl;

    //Calculating the total amount that the school raised
   totalAmount += grades[x].AddMoney();

    //Determining the class that raised the most amount of money
   if(grades[x].AddMoney() > maxGain){
   maxGain = grades[x].AddMoney();
   }
 }
  outf << "\nThe school raised a total amount of: $" << totalAmount << endl;
  outf << "\nThe Third class raised the most money: $" << maxGain;

  return 0;
} 
/*Reuse the PiggyBank class we wrote together in lab class (the files are posted). Develop a C++
program that uses the PiggyBank class to help an elementary school determine how much money
was raised during a school fund-raising drive. Each class (kindergarten through 5th) collected coins
(quarters, nickels, dimes, and pennies) and the amounts stored in the data file coins.txt. Your
program should determine and print to the data file money.txt, how much total money each class
raised. It should also determine and print the total amount of money the school raised during the
fundraiser and the class that raised the most money.
The data file is structured as follows with the name of the grade followed by the number of
quarters, dimes, nickels and pennies:
Kindergarten 500 399 434 4333
First 1000 200 400 100
…..
…..
Fifth 4992 4922 100 20*/
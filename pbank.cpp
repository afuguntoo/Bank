//S. Frizell
//11/2/2021
//Implementation file for the PiggyBank class

#include <iostream>
#include "pbank.h"

using namespace std;

//implementatin details
//implementation for first constructor
PiggyBank::PiggyBank()
{
   numQ = 0;
   numN = 0;
   numD = 0;
   numP = 0;
}

//2nd constructor
PiggyBank::PiggyBank(int q, int d, int n, int p)
{
  numQ = q;
  numD = d;
  numN = n;
  numP = p;
}

//function add and prints total money in the bank
double PiggyBank::AddMoney()
{
  double totalMoney;

  totalMoney = ((numQ*0.25) + (numD*0.10) + (numN*0.05) + (numP*0.01));

  return totalMoney;
}
 
//function updates the value stored in number of quarters
void PiggyBank::setQ(int q)
{
  numQ = q;
}

//function updates the value stored in number of dimes
void PiggyBank::setD(int d)
{
  numD = d;
}

//functions updates the value stored in the number of nickels
void PiggyBank::setN(int n)
{
  numN = n;
}

//function updates the value stored in the number of pennies
void PiggyBank::setP(int p)
{
  numP = p;
}

//function updates all the private data members at one time
void PiggyBank::setM(int a, int b, int c, int d)
{
   numQ = a;
   numD = b;
   numN = c;
   numP = d;
}

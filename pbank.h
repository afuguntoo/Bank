//S. Frizell
//11/1/2021
//file contains the specification for the piggy bank class

#ifndef PIGB_H
#define PIGB_H
class PiggyBank {
private:
  int numQ;
  int numD;
  int numP;
  int numN;
public:
  PiggyBank();  //default constructor
  PiggyBank(int, int, int, int);  //constructor with parameters
  //set/mutator methods void
  void setQ(int);
  void setN(int);
  void setP(int);
  void setD(int);
  void setM(int, int, int, int);
  //get/observer functions
  int getQ()
    {return numQ;}
  int getD()
    {return numD;}
  int getN()
    {return numN;}
  int getP()
    {return numP;}
  //calculate and return total money
  double AddMoney();
};
#endif

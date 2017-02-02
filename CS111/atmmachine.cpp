/************************
Purpose: This class creates the atmMachine object.

Using: There are three functions that are defined: getBalance, deposit, and withdraw. It is using no classes.

used in: No classes are used in this class.
*************************/


#include <iostream>
#include "atmmachine.h"

using namespace std;

//construct a default atmMachine object
atmMachine::atmMachine()
{
  id = 0;
  balance = 0;
}

//Construct a rectangle object
atmMachine::atmMachine(int newId)
{
  id = newId;
  balance = 100;
}

//function to handle deposits
double atmMachine::deposit(double newBalance)
{
  if (newBalance > 0)
    balance = balance + newBalance;
  return balance;
}
//function to handle withdrawals.
double atmMachine::withdraw(double newBalance)
{
  if (newBalance > 0)
    balance = balance - newBalance;
  return balance;
}
//function to return the balance since its a private variable.
double atmMachine::getBalance()
{
  return balance;
}

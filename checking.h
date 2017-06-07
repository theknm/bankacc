//============================================================================
// Name        : checking.cpp
// Author      : kacie macalino
// Version     : 1.0
// Copyright   : no stealing
// Description :
//============================================================================
#ifndef CHECKING_H_INCLUDED
#define CHECKING_H_INCLUDED
#include <iostream>
#include "Generic.h"

using namespace std;
class Checking : public Generic
{
    private:
        double balance;
        double wthd;
        double amount;

    public:
        checkingAcct(double bal) : Generic (bal, 0)
        void withdraw(double wthd);
        void deposit(double amount);
        void monthlyproc();
        virtual ~Checking(){};
};

#endif // CHECKING_H_INCLUDED

//============================================================================
// Name        : Checking.h
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

    public:
        Checking(double bal, double inrate);
        void withdraw(double wthd);
        void monthlyProc();
        virtual ~Checking(){};
};

#endif // CHECKING_H_INCLUDED

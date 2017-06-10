//============================================================================
// Name        : Checking.cpp
// Author      : kacie macalino
// Version     : 1.0
// Copyright   : no stealing
// Description :
//============================================================================

#include <iostream>
#include "Checking.h"
#include "Generic.h"

using namespace std;

/*

    private:

    public:
        Checking(double bal, double anrate);
        void withdraw(double wthd);
        void monthlyproc();
        virtual ~Checking(){};

*/

Checking::Checking(double bal, double anrate) : Generic(bal, anrate)
{
    balance = bal;
    anrate = 0;
}

void Checking::withdraw(double wthd)
{
    Generic::withdraw(wthd);
    if(balance -= wthd <= 0)
    {
        service += 15;
        cout << "Sorry, you have insufficient funds, your account is now charged by a service fee of $15." <<endl;
    } else {
        cout << "Your withdrawal was made." <<endl;
    }
}

void Checking::monthlyProc()
{
    cout << "Your balance is now -$" << balance <<endl;
    service += 5;
    service += withdrawals * .10;
    Generic::monthlyProc();
}

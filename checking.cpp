//============================================================================
// Name        : checking.cpp
// Author      : kacie macalino
// Version     : 1.0
// Copyright   : no stealing
// Description :
//============================================================================

#include <iostream>
#include "checking.h"
#include "Generic.h"

using namespace std;

/*

    private:

    public:
        Checking(double bal, double anrate);
        void withdraw(double wthd);
        void deposit(double depo);
        void monthlyproc();
        virtual ~Checking(){};

*/

void deposit(double balance)
{
    Generic::deposit(balance);
}

void Checking::withdraw(double wthd)
{
    Generic::withdraw(wthd);
    if(balance -= wthd <= 0)
    {
        balance == 0;
        balance -= 15;
        cout << "Sorry, you have insufficient funds, your account is now charged by a service fee of $15."
        cout << "Your balance is now -$" << balance <<endl;
    }
}

void Checking::monthlyproc()
{

}

#include <iostream>
#include "money.h"

using namespace std;

money::money()
{
    fiftyCents=Pounds=fivePounds=tenPounds=twentyPounds=20;
    ofc = opo = ofp = otp = otwp =0 ;
}
void money::getmoney ()
{
    cout << "Numbers of fifty cents: ";
    cin >> fc ;
    cout << "Numbers of pounds: ";
    cin>> po;
    cout << "Numbers of five pounds: ";
    cin>> fp;
    cout << "Numbers of ten pounds: ";
    cin>>tp;
    cout << "Numbers of twenty pounds: ";
    cin>> twp;
    inPut =(.5*fc) + (1*po) + (5*fp) + (10*tp) + (20*twp) ;
}
float money::getinPut()
{
    return inPut;
}
void money::printoutPut (float price)
{
    outPut= inPut - price ;
    while (outPut>0)
    {
        if (outPut>=20)
        {
            otwp++;
            outPut=outPut-20 ;
            continue;
        }
       if (outPut>=10)
        {
            otp++;
            outPut=outPut-10 ;
            continue;
        }
       if (outPut>=5)
        {
            ofp++;
            outPut=outPut-5 ;
            continue;
        }
        if (outPut>=1)
        {
            opo++;
            outPut=outPut-1 ;
            continue;
        }
        if (outPut>=.5)
        {
            ofc++;
            outPut=outPut-.5 ;
            break;
        }
    }
    cout << "Output Money is equal: " <<endl<< otwp <<" twenty pounds coin, ";
    cout << otp<< " ten pounds coin, "<< ofp << " five pounds coin, ";
    cout << opo << " pound coin and "<< ofc << " fifty cents coin";
    }
    void money:: changevalues ()
    {
        fiftyCents=fiftyCents+fc-ofc;
        Pounds=Pounds+po-opo;
        fivePounds=fivePounds+fp-ofp;
        tenPounds=tenPounds+tp-otp;
        twentyPounds=twentyPounds+twp-otwp;
    }

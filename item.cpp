#include "item.h"
#include <iostream>

using namespace std;
item::item()
{
    n=10;
}
void item::setPrice(float price)
{
    p= price ;
}
int item::getPrice ()
{
    return p;
}
void item::takeItem ()
{
    if (n==0)
    {
        cout << "There is not enough units" << endl << "press zero to cancel or Choose an item number: ";
        process = false ;
    }
    else
    {
        n=n-1 ;
        process = true ;
    }
}
int item::getN()
{
    return n;
}

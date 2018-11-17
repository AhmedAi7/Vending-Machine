#include <iostream>
#include "item.h"
#include "money.h"

using namespace std;

int main()
{
    money sell ;
    item items [10] ;
    int sumOfitems=0;
    for (int i=0 ; i<10 ; i++)
    {
        sumOfitems=sumOfitems+ items[i].getN();
    }
    for (int i=0 ; i<10 ; i++)
    {
        items[i].setPrice(i+1);
    }
    while (sumOfitems>0)
    {
    sell.getmoney();
    cout << "Choose an item number: ";
    returnPoint:
    int choice ;
    cin>> choice ;
    if (choice == 0)
        cout <<"Process canceled..";
    else if (sell.getinPut()<items[choice].getPrice())
        cout << "Not enough money..";
    else
    {
        items[choice].takeItem();
        if (items[choice].process==true)
            {
                sell.printoutPut(items[choice].getPrice());
                sell.changevalues();
            }
        else if (items[choice].process==false)
            goto returnPoint;
    }
    }
    return 0;
}

#ifndef ITEM_H
#define ITEM_H


class item
{
    public:
        item();
        void setPrice (float price) ;
        int getPrice () ;
        void takeItem ();
        bool process;
        int getN() ;
    private:
        int n; //number of units
        float p ; //Price of item
};

#endif

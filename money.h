#ifndef MONEY_H
#define MONEY_H


class money
{
    public:
        money();
        void getmoney () ;
        float getinPut();
        void printoutPut (float price);
        void changevalues ();
    protected:
    private:
        float inPut , outPut;
        int fc , po , fp , tp , twp ; //input coin
        int fiftyCents,Pounds,fivePounds,tenPounds,twentyPounds;
        int ofc , opo , ofp , otp , otwp ; //output coin
};

#endif // MONEY_H

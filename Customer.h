#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include<iostream>
#include<random>

//generate loyaltynumber
//store totalitem and the totaltimes
class Customer {

protected:
    int loyaltynumber;
    int totalitem;
    int customercometimes;
    float totaltime;

public:
    Customer();
    void settotalitem(int);
    int gettotalitem();
    int getloyaltynumb();




};
#endif

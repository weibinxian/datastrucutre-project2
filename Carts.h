
#ifndef CARTS_H_
#define CARTS_H_
#include<iostream>
#include<random>
// cart class accrepts a reference of customer
class Carts{

protected:
  int NumOfItems;
  float ArriTimes;
  float DepartTimes;

public:

  Carts();
  //void setNumItems(int);
  int getNumItems();
  float getArriTimes();
  float getDepartTimes();

};

#endif //CARTS_H_/

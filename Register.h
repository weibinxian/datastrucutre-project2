#ifndef REGISTER_H_
#define REGISTER_H_
#include<iostream>
#include"Line.h"

class Register{


protected:
  Line resigerline;
int truckcarts;
int mintimes;
int maxtimes;
int averagetimes;

public:
  void setLine(Line&);
  void processNextCart();
  void getNextAvailableTime();
  int getTotaltime();
  int getmintimes();
  void setmintimes(int);
  int getmaxtimes();
  void setmaxtimes(int);
  int getaveragetimes();
  void setaveragetimes(int);




};
#endif

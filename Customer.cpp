#include"Customer.h"
#include<random>

// customer construtor set the loyaltynumber equal to random number;
Customer::Customer()
{
  unsigned seed =std::chrono::system_clock::now().time_since_epoch().count();
  std::default_random_engine generator(seed);
   std::uniform_int_distribution<int>  distribution(0,9999);
  loyaltynumber=distribution(generator);
}
// totalitem add up each time when the numberof items show up
void Customer::settotalitem(int items)
{
  totalitem=+items;

}
// return the customer's totalitem
int Customer::gettotalitem()
{
  return totalitem;

}
//  return  the customer's loyaltynumber
int Customer::getloyaltynumb()
{
  return loyaltynumber;

}

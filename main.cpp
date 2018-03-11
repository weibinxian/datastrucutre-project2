#include <iostream>
#include "Carts.h"
#include "Customer.h"




using namespace std;

int main()
{


Carts obj1;
Customer customer1;


customer1.settotalitem(obj1.getNumItems());

cout<<obj1.getNumItems()<<endl;
cout<<"customer's loyal number:"<<customer1.getloyaltynumb()<<endl;
cout<<customer1.gettotalitem()<<endl;








  return 0;
}

#include"Carts.h"


// set up a randome number for the number of times( mean is 6)
Carts::Carts()
{
unsigned seed =std::chrono::system_clock::now().time_since_epoch().count();
std::default_random_engine generator(seed);
std::poisson_distribution<int> distribution(6);
NumOfItems=distribution(generator);

}

int Carts::getNumItems()
{

  return NumOfItems;
}

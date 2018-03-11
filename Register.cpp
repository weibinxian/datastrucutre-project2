#include"Register.h"
#include"Carts.h"
#include"Line.h"

void Register::setLine(Line&lineobj)
{
  resigerline=lineobj;


}
void Register::processNextCart()
{
  /*  Carts tempobj=line.frontelements();
    for(int x=0;x<line.sizeline();x++)
    {
        int temp=tempobj.getNumItems();
        int times=temp*9;

    }
    line.remove();
*/

}
int Register::getmintimes()
{
  return mintimes;
}
int Register::getmaxtimes()
{
  return maxtimes;
}
int Register::getaveragetimes()
{
  return averagetimes;
}
void Register::setmintimes(int times)
{
  mintimes=times;
}
void Register::setmaxtimes(int times)
{
  maxtimes=times;
}
void Register::setaveragetimes(int times)
{
  averagetimes=times;
}

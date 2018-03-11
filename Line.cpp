#include"Line.h"


void Line::add(Carts obj)
{
    line.push(obj);

}
void Line::remove()
{

    line.pop();
}
void Line:frontelements()
{

  return line.front();
}
void sizeline()
{
  return line.size();
}

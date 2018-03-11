#ifndef LINE_H_
#define LINE_H_
#include<iostream>
#include<queue>
#include"Carts.h"

// add in the Cart
// process cart of it's aviable time
// process cart of the next avaibale cart
class Line{

  protected:
    std::queue<Carts> line;


public:
    void add(Carts);
    void remove();
    void sizeline();
    void frontelements();








};
#endif

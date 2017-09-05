#ifndef STACK_LISTS_STACK_H
#define STACK_LISTS_STACK_H


#include "List.h"

class Stack :public List
{
public:
    explicit Stack(int s);
    void push(Node a);
    void pop();
};


#endif //STACK_LISTS_STACK_H

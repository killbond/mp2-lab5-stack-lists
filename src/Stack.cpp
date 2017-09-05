#include "../include/Stack.h"

void Stack::push(Node a)
{
    this->AddEnd(a);
}

void Stack::pop()
{
    this->GetEnd();
}

Stack::Stack(int s)
{
    L = new int[s];
    D = new Node[s];
    start = 0;
    end = 0;
    size = s;
    for (int i = 0; i < size; i++)
        L[i] = -1;
}
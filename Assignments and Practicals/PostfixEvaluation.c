#include<stdio.h>
#include<stdlib.h>

void enQueue(int a)
{
    if (isFull() == 1)
    {
        printf(" --------Queue is Full--------\n");
    }
    else
    {
        q.rear++;
        qu[q.rear] = a;
    }
}
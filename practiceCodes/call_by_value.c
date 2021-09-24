//call by value

#include<stdio.h>

void swap(int a, int b);

void main()
{
    int m = 10, n = 20;
    printf("Values before swap m = %d and n = %d\n", m, n);
    swap(m, n);
}

void swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
    printf("Values after swap m = %d and n = %d\n", a, b);
}
//factorial using recursive function
#include<stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;               //base case
    else
        return n*fact(n-1);     //reducing case
}
int main()
{
    int f, a = 6;
    f = fact(a);
    printf("%d",f);
}
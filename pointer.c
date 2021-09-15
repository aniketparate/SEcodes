#include<stdio.h>

int main()
{                       // Pointer declaration
    int *ptr, q;
    q = 50;
                        // Pointer Initialization
    ptr = &q;

    printf("Value at %d(which is address of q) = %d", ptr,*ptr); 
    return 0;
}
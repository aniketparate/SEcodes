#include<stdio.h>

int main()
{                       // Pointer declaration
    int *ptr, q;
    int *a, b = 6;
    a = &b;

    printf("%d  %d", a, *a);

    q = 50;
                        // Pointer Initialization
    ptr = &q;

    printf("\n Value at %d(which is address of q) = %d", ptr,*ptr); 
    printf("\n %d    %d", *a, a);
    return 0;
}
/*
Write a program to design a function that accepts two arrays, compares them and  returns 1 
if they are identical & 0 otherwise.
*/

#include<stdio.h>
void Array(int ar[], int s)
{
	for (int i = 0; i < s; i++)
    {
        printf(" Enter element : ");
        scanf("%d",&ar[i]);
    }
}
char compare(int s, int a[], int b[])
{
    for (int i = 0; i < s; i++)
    {
        if (a[i] == b[i])
        {
            return 1;
        }
        else
            return 0;
    }
}
int main()
{
    int size;
    printf(" Enter size of array : ");
    scanf("%d",&size);

    int a[size], b[size];
    printf("\n Enter first array : \n");
    Array(a,size);
    printf("\n Enter second array : \n");
    Array(b,size);

    if(compare(size,a,b) == 1)
        printf("\n 1");
    else
        printf("\n 0");
    
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
//#define N 20

char stack[20];
int top = -1;

void push(char a)
{
    top++;
    stack[top] = a;
}

char pop()
{
    while (stack[top] != '\0')
    {
        printf("%c", stack[top--]);
    }
}

int main()
{
    char exp[20];
    int i = 0;
    
    printf("\n Enter the string : ");
    scanf("%s", exp);
    printf(" Reverse of the entered string : ");

    while (exp[i] != '\0')
    {
        push(exp[i]);
        i++;
    }
    pop();
    printf("\n");
    return 0;
}
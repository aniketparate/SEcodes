#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
}s;

int st[5];

int isEmpty()
{
    if (s.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if (s.top == s.size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int a)
{
    if (isFull() == 1)
    {
        printf(" --------Stack is Full--------\n");;
    }
    else
    {
        s.top++;
        st[s.top] = a; 
    } 
}

void pop()
{
    if (isEmpty() == 1)
    {
        printf(" --------Stack is Empty--------\n");
    }
    else
    {
        printf(" Element popped out of stack : %d\n", st[s.top--]);
    }
    
}

void display()
{   
    printf(" Elements are : \n");
    for (int i = s.top; i >-1; i--)
    {
        printf("\t %d\n",st[i]);
    }
}

int main()
{
    
    int ch, x;
    s.top = -1;
    s.size = 5;
    
    while (1)
    {
        printf("\n1. Push the elemmt into the stack.\n");
        printf("2. Pop the elemmt from the stack.\n");
        printf("3. Display all the elemmt of the stack.\n");
        printf("4. Exit from the stack.\n");
        
        printf("\n Enter your choice : ");
        scanf("%d",&ch);
        

        switch (ch)
        {
            case 1: printf(" Enter the element to push : ");
                    scanf("%d",&x);
                    push(x);
                    break;

            case 2: pop();
                    break;

            case 3: display();
                    break;

            case 4: printf(" --------EXIT--------");
                    exit(1);
                    break;
            
            default: printf(" --------Invalid Input--------");
                    break;
        }
    }
}
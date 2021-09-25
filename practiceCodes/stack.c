#include<stdio.h>
#include<stdlib.h>

int stack[5];
int top=-1;

void push(int);
void pop();
void display();

int main()
{
    int ch;
    int n1;

    while (1)
    {
        printf("\n----Stack Operation----");
        printf("\n1. Push an element from the stack");
        printf("\n2. Pop out an element from the stack");
        printf("\n3. Display the stack elements");
        printf("\n4. Exit");

        printf(" Enter your choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1: printf("\n Enter the element to be pushed into the stack:");
                    scanf("%d",&n1);
                    push(n1);
                    break;
            
            case 2: pop();
                    break;

            case 3: display();
                    break;

            case 4: exit(1);
        
            default: printf("\n Wrong choice");
                    break;
        }
    }
}   
void push(int x)
{
    if (top==4)
    {
        printf(" Stack is full");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("\n %d element popped out of stack",stack[top--]);
    }
}

void display()
{
    int i;
    if (top==-1)
    {
        printf("Stack is empty");         
    }
    else
    {
        printf("Stack elements :\n");
		for(i=top;i>=0;i--)
		{
			printf("%d",stack[i]);
		}
    }    
}
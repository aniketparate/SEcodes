#include<stdio.h>
#include<stdlib.h>

int stack[5];
int top = -1;

void push(int x) {
    if (top == 4) {
        printf("\n----------------STACK IS FULL--------------------\n");
    } else {
        top++;
        stack[top] = x;
    }
}

void pop() {
    if (top == -1)
    {
        printf("\n----------------STACK IS EMPTY--------------------\n");
    }
    else
    {
        printf("\n Element POPED out is : %d", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1)
    {
        printf("\n----------------STACK IS EMPTY---------------------\n");
    }
    else {
        for (int i = top; i > -1 ; i--)
        {
            printf(" %d", stack[i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int ch;
    int num;
    while (1)
    {
        printf("\n 1. PUSH\n 2. POP\n 3. DISPLAY\n 4. EXIT\n");
        printf(" Enter your choice : ");
        scanf("%d", &ch);
        
        switch (ch)
        {
            case 1: printf("\n Enter element : ");
                    scanf("%d", &num);
                    push(num);
                    break;
        
            case 2: pop();
                    break;

            case 3: printf("\n DISPLAY : ");
                    display();
                    break;

            case 4: exit(1);

            default: printf("\n-------------------INVALID INPUT-----------------------\n");
                    break;
        }
    }
    return 0;
}

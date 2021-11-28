#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = 0, *temp, *newnode;

void push(int x)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = x;
    newnode -> next = top;
    top = newnode;
}

void pop()
{
    temp = top;
    if (temp == 0)
    {
        printf(" ----------STACK IS EMPTY----------");
    }
    else
    {
        printf(" Poped element is : %d", top -> data);
        top = top -> next;
        free(temp);
    }
}

void peek()
{
    printf(" Element peeked is : %d", top -> data);
}

void display()
{
    printf(" DISPLAY");
    temp = top;
    if (temp == 0)
    {
        printf(" ----------STACK IS EMPTY----------");
    }
    else
    {
        while (temp != 0)
        {
            printf("\n %d",temp -> data);
            temp = temp -> next;
        }
    }
}

int main(int argc, char const *argv[])
{
    int ch, a;

    while (1)
    {
        printf("\n 1.PUSH\n 2.POP\n 3.PEEK\n 4.DISPLAY\n 5.EXIT\n Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1: printf(" Enter element : ");
                    scanf("%d", &a);
                    push(a);
                    break;

            case 2: pop();
                    break;

            case 3: peek();
                    break;

            case 4: display();
                    break;

            case 5: printf(" ----------PROGRAM EXIT----------");
                    exit(1);
        
            default: printf(" Invalid Input");
                     break;
        }
    }
    return 0;
}
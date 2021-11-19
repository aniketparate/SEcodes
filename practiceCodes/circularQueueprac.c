#include<stdio.h>
#include<stdlib.h>

int front;
int back;

int qu[5];

void enQueue(int x)
{
    if (front == -1 && back == -1)
    {
        front = back = 0;
        qu[back] = x;
    }
    else if ((back + 1) % 5 == front)
    {
        printf(" Queue is Full");
    }
    else
    {
        back = (back + 1) % 5 ;
        qu[back] = x;
    }
}

void deQueue()
{
    if (front == -1 && back == -1)
    {
        printf(" Queue is Empty");
    }
    else if ((back + 1) % 5 == front)
    {
        front = back = -1;
    }
    else
    {
        printf(" deQueued element is %d", qu[front]);
        front = (front + 1) % 5;
    }
}

void display()
{
    if (front == -1 && back == -1)
    {
        printf(" Queue is Empty");
    }
    else
    {
        int i = front;
        printf(" Queue is : ");
        while (i != back)
        {
            printf(" %d", qu[i]);
            i = (i + 1) % 5;
        }
        printf(" %d", qu[back]);
    }
}

void peek()
{
    if (front == -1 && back == -1)
    {
        printf(" Queue is Empty");
    }
    else
    {
        printf(" %d", qu[back]);
    }
}

int main(int argc, char const *argv[])
{
    front = -1;
    back = -1;


    return 0;
}

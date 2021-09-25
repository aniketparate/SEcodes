#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
}q;

int qu[5];

int isEmpty()
{
    if (q.front == q.rear)
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
    if (q.rear == q.size -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enQueue(int a)
{
    if (isFull() == 1)
    {
        printf(" --------Queue is Full--------\n");
    }
    else
    {
        q.rear++;
        qu[q.rear] = a;
    }
}

void deQueue()
{
    if (isEmpty() == 1)
    {
        printf(" --------Queue is Empty--------\n");
    }
    else
    {
        q.front++;
        printf(" Element dequeued out of queue : %d\n",qu[q.front]);
    }
}

void display()
{
    printf(" Elements are : \n");
    if (isEmpty() == 1)
    {
        printf(" --------Queue is Empty--------\n");
    }
    else
    {
        for (int i = q.front + 1; i <= q.rear; i++)
        {
            printf("  %d",qu[i]);
        }
    }
}

int main()
{
    
    int ch, x;
    q.front = -1;
    q.rear = -1;
    q.size = 5;

    while (1)
    {
        printf("\n1. Push the elememt into the queue.\n");
        printf("2. Pop the elemmt from the queue.\n");
        printf("3. Display all the elemmt of the queue.\n");
        printf("4. Exit from the queue.\n");
        
        printf("\n Enter your choice : ");
        scanf("%d",&ch);
        

        switch (ch)
        {
            case 1: printf(" Enter the element to push into queue : ");
                    scanf("%d",&x);
                    enQueue(x);
                    break;

            case 2: deQueue();
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
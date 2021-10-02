//CIRCULAR QUEUE

#include<stdio.h>
#include<stdlib.h>

struct circularQueue
{
    int size;
    int front;
    int rear;
}cq;

int CQ[5];

int isEmpty()
{
    if (cq.front == -1 && cq.rear == -1)
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
    if ((cq.rear + 1) % cq.size == cq.front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int enQueue(int a)
{
    if (cq.front == -1 && cq.rear == -1)
    {
        cq.front = cq.rear = 0;
        CQ[cq.rear] = a;
    } 
    else if (isFull() == 1)
    {
        printf(" --------Queue is Full--------\n");
    } 
    else
    {
        cq.rear = (cq.rear + 1) % cq.size;
        CQ[cq.rear] = a;
    }
}

int deQueue()
{
    if (isEmpty() == 1)
    {
        printf(" --------Queue is Empty--------\n");
    } 
    else if (cq.front == cq.rear)
    {
        cq.front = cq.rear = -1;
    } 
    else
    {
        printf(" DeQueued element is : %d", CQ[cq.front]);
        cq.front = (cq.front + 1) % cq.size;
    }
}

int display()
{
    if (isEmpty() == 1)
    {
        printf(" --------Queue is Empty--------\n");
    }
    else
    {
        int i = cq.front;
        printf(" Queue is :");
        
        while (i != cq.rear)
        {
            printf(" %d", CQ[i]);
            i = (i + 1) % cq.size;
        }
        printf(" %d", CQ[cq.rear]);
    }
}

void peek()
{
    if (isEmpty() == 1)
    {
        printf(" --------Queue is Empty--------\n");
    }
    else
    {
        printf(" Peek : %d", CQ[cq.front]);
    }
}

int main()
{
    int ch, x;
    cq.front = -1;
    cq.rear = -1;
    cq.size = 5;

    while (1)
    {
        printf("\n1. Push the elememt into the queue.\n");
        printf("2. Pop the elemmt from the queue.\n");
        printf("3. Display all the elemmt of the queue.\n");
        printf("4. Peek the element\n");
        printf("5. Exit from the queue.\n");
        
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

            case 4: peek();
                    break;

            case 5: printf(" --------EXIT--------");
                    exit(1);
                    break;
            
            default: printf(" --------Invalid Input--------");
                    break;
        }   
    }
    return 0;
}

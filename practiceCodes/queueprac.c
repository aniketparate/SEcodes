#include<stdio.h>
#include<stdlib.h>

int front;
int back;
queue[5];

void enQueue(int x) {
    if (back == 4)
    {
        printf("\n---------------------QUEUE IS FULL--------------------");
    }
    else
    {
        back++;
        queue[back] = x;
    }
}

void deQueue() {
    if (front == back)
    {
        printf("\n-------------------QUEUE IS EMPTY----------------------");
    }
    else
    {
        front++;
        printf("\n Element deQueued is : %d", queue[front]);
    }
}

void display() {
    printf("\n DISPLAY : ");
    for (int i = front + 1; i <= back; i++)
    {
        printf(" %d", queue[i]);
    }
}

int main(int argc, char const *argv[])
{
    front = -1;
    back = -1;
    int num;
    int ch;

    while (1)
    {
        printf("\n 1. ENQUEUE\n 2. DEQUEUE\n 3. DISPLAY\n");
        printf(" Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1: printf("\n Enter a element : ");
                    scanf("%d", &num);
                    enQueue(num);
                    break;

            case 2: deQueue();
                    break;

            case 3: display();
                    break;
        
            default: printf("\n-----------------INVALID INPUT-----------------");
                     printf("\n----------------------EXISTED FROM THE PROGRAM--------------------------");
                     exit(1);
        }
    }
    return 0;
}


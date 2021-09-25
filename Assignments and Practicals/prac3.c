#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int top;
}q;

int isEmpty()
{

}

int isFull()
{

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
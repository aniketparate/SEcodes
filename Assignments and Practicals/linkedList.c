#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp, *prevnode, *nextnode;
int count = 0;

void create()
{
    int ch;
    head = 0;
    printf(" Enter number of elements : ");
    scanf("%d", &ch);

    if (ch < 0)
    {
        printf(" --------Invalid Input--------");
    }
    else
    {
        while (ch > 0)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf(" Enter data : ");
            scanf("%d", &newnode -> data);
            newnode -> next = 0;

            if (head == 0)
            {
                head = temp = newnode;
            }
            else
            {
                temp -> next = newnode;
                temp = newnode;
            }
            ch--;
        }    
    }
}

void insertAtBegin()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf(" Enter data : ");
    scanf("%d", &newnode -> data);
    newnode -> next = head;
    head = newnode;
}

void insertAtEnd()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf(" Enter data : ");
    scanf("%d", &newnode -> data);
    newnode -> next = 0;
    temp = head;

    while (temp -> next != 0)
    {
        temp = temp -> next;
    }
    temp -> next = newnode;
}

void insertAtBetween()
{
    int pos, i = 1;
    printf(" Enter the position");
    scanf("%d", &pos);
    temp = head;

    while (temp != 0)
    {
        temp = temp -> next;
        count++;    
    }

    if (pos > count)
    {
        printf(" --------Invalid Input--------");
    }
    else
    {
        temp = head;

        while (i < pos)
        {
            temp = temp -> next;
            i++;
        }
        newnode = (struct node *)malloc(sizeof(struct node));
        printf(" Enter data : ");
        scanf("%d", &newnode -> data);
        newnode -> next = temp -> next;
        temp -> next = newnode;
    }
}

void delFromBeg()
{
    if (head == 0)
    {
        printf(" --------List is empty--------");
    }
    else
    {
        temp = head;
        head = head -> next;
        free(temp);
    }
}

void delFromEnd()
{
    temp = head;

    while (temp -> next != 0)
    {
        prevnode = temp;
        temp = temp -> next;
    }

    if (temp == head)
    {
        head = 0;
    }
    else
    {
        prevnode -> next = 0;
    }
    free(temp);    
}

void delAtPosition()
{
    int pos, i = 1;
    temp = head;

    while (i < pos - 1)
    {
        temp = temp -> next;
        i++;
    }
    nextnode = temp -> next;
    temp -> next = nextnode -> next;
    free(nextnode);
}

void display()
{
    temp = head;

    while (temp != 0)
    {
        printf(" Data : %d", temp -> data);
        temp = temp -> next;
    }
    getch();
}

void getLength()
{
    temp = head;
    count = 0;

    while (temp != 0)
    {
        count ++;
        temp = temp -> next;
    }
    printf(" Length is : %d", count);
}

int main()
{
    int ch;
    create();

    while (1)
    {
        printf(" 1. Insert At Beginning\n");
        printf(" 2. Insert At End\n");
        printf(" 3. Insert after a given Position\n");
        printf(" 4. Delete From Beginning\n");
        printf(" 5. Delete From End\n");
        printf(" 6. Delete From a Position\n");
        printf(" 7. Display the linked list\n");
        printf(" 8. Length of the linked list\n");
        printf(" 9. Exit\n");
        printf(" Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1: insertAtBegin();
                    break;

            case 2: insertAtEnd();
                    break;

            case 3: insertAtBetween();
                    break;

            case 4: delFromBeg();
                    break;

            case 5: delFromEnd();
                    break;

            case 6: delAtPosition();
                    break;
            
            case 7: display();
                    break;
            
            case 8: getLength();
                    break;
            
            case 9: printf(" --------EXIT--------");
                    exit(1);
                    break;

            default: printf(" --------Invalid Input--------");
                break;
        }
    }
    return 0;
}
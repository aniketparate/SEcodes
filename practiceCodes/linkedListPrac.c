#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp, *prevnode;
int count = 0;

void create()
{
    int ch;
    head = 0;
    printf(" Enter no of elements : ");
    scanf("%d", &ch);

    if (ch < 0)
    {
        printf(" Invalid Input ");
    }
    else
    {
        while (ch > 0)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf(" Enter data : ");
            scanf("%d", &newnode->data);
            newnode->next = 0;

            if (head == 0)
            {
                head = temp = newnode;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
            }
            ch--;
        }
    }    
}

void insertAtBeginning()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf(" Enter data : ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
}

void insertAtEnd()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf(" Enter data : ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insertAtBetween()
{
    int pos, i = 1;
    printf(" Enter the position : ");
    scanf("%d", &pos);
    temp = head;

    while (temp != 0)
    {
        temp = temp->next;
        count++;
    }
    
    if (pos > count)
    {
        printf(" Invalid Input");
    }
    else
    {
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        newnode = (struct node *)malloc(sizeof(struct node));
        printf(" Enter data : ");
        scanf("%d", &newnode->data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void deleteAtBeginning()
{
    temp = head;
    head = head->next;
    free(temp);
}

void deleteAtEnd()
{
    temp = head;
    while (temp->next != 0)
    {
        prevnode = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = 0;
    }
    else
    {
        prevnode->next = 0;
    }
    free(temp);
}

void deleteAtBetween()
{
    int pos, i =1;
    printf(" Enter the position : ");
    scanf("%d", &pos);
    temp = head;

    while (i < pos)
    {
        prevnode = temp;
        temp = temp->next;
        i++;
    }
    prevnode->next = temp->next;
    free(temp);
}

void display()
{
    temp = head;
    while (temp != 0)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    getch();
}

int main(int argc, char const *argv[])
{
    int ch;
    create();

    while (1)
    {
        printf("\n 1.Insert At Beginning\n 2.Insert At End\n 3.Insert At Between\n 4.Delete At Beginning \n 5.Delete At End\n 6.Delete At Between\n 7.Display\n 8.Exit");
        printf("\n Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1: insertAtBeginning();
                    break;

            case 2: insertAtEnd();
                    break;

            case 3: insertAtBetween();
                    break;

            case 4: deleteAtBeginning();
                    break;

            case 5: deleteAtEnd();
                    break;

            case 6: deleteAtBetween();
                    break;

            case 7: display();
                    break;

            case 8: printf(" Exit");
                    exit(1);
            
            default:printf(" Invalid Input");
                    break;
        }
    }
    return 0;
}
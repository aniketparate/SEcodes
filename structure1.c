//structure using for

#include<stdio.h>
#include<conio.h>

struct student
{
    int id;
    char name[10];
    float percentage;
}s[2];

void main()
{
    for (int i = 0; i < 2; i++)
    {
        printf(" Enter student info : ");
        scanf("%d %s %f", &s[i].id, &s[i].name, &s[i].percentage);
    }

    for (int i = 0; i < 2; i++)
    {
        printf(" Students info : ");
        printf(" Id = %d\n", s[i].id);
        printf(" Name = %s\n", s[i].name);
        printf(" Percentage = %.2f\n", s[i].percentage);
    }
    getch();
}
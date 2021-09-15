#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int id;
    char name[10];
    float percentage;
}s;

void stud(struct student s)
{
    printf(" Id is: %d \n", s.id);
    printf(" Name is: %s \n", s.name);
    printf(" Percentage is: %.2f \n", s.percentage);
}

void main()
{
    s.id = 1;
    strcpy(s.name,"Flame");
    s.percentage = 86.5;

    stud(s);
    getch();
}
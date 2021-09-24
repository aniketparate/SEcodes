#include<stdio.h>
#include<conio.h>

struct student
{
    int id;
    char name[10];
    float percentage;
}s1,s2;

void main()
{
    printf(" Enter Student's info : ");
    scanf("%d %s %f", &s1.id, &s1.name, &s1.percentage);
    printf(" Enter Student's info : ");
    scanf("%d %s %f", &s2.id, &s2.name, &s2.percentage);
    printf("\n First Student's Details : ");
    printf(" Id = %d\n", s1.id);
    printf(" Name = %s\n", s1.name);
    printf(" Percentage = %.2f\n", s1.percentage);
    printf("\n Second Student's Details : ");
    printf(" Id = %d\n", s2.id);
    printf(" Name = %s\n", s2.name);
    printf(" Percentage = %.2f\n", s2.percentage);
    getch();
}
//here we are trying to call all the inputs at once which is not possible for union to handle.
//Because in union we can access only one member of union at a time.

#include<stdio.h>
#include<string.h>
#include<conio.h>

union student
{
    int id;
    char name[5];
    float percentage;

}s;

void main()
{
    s.id=1;
    strcpy(s.name, "Raju");
    s.percentage = 86.5;
    printf(" Id is: %d \n", s.id);
    printf(" Name is: %s \n", s.name);
    printf(" Percentage is: %f \n", s.percentage);
    getch();
}
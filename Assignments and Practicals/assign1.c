//Write a function that takes an integer parameter m representing the month number of the
//year and returns the corresponding name of the month.

#include<stdio.h>
int main()
{
	int m;
	
	printf(" Enter the month number : ");
	scanf("%d",&m);
	
	printf(" Month is : ");
	
	switch(m)
	{
		case 1:
		printf("JANUARY");
		break;
		case 2:
		printf("FEBRUARY");
		break;
		case 3:
		printf("MARCH");
		break;
		case 4:
		printf("APRIL");
		break;
		case 5:
		printf("MAY");
		break;
		case 6:
		printf("JUNE");
		break;
		case 7:
		printf("JULY");
		break;
		case 8:
		printf("AUGUST");
		break;
		case 9:
		printf("SEPTEMBER");
		break;
		case 10:
		printf("OCTOBER");
		break;
		case 11:
		printf("NOVEMBER");
		break;
		case 12:
		printf("DECEMBER");
		break;
		default:
		printf(" Invalid Input");
	}
	return 0;
}
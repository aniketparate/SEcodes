//Write a program in C to design a function to Calculate the length of the string using a pointer.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],*ptr;
	int len=0;
	
	printf(" Enter a word : ");
	gets(str);
	
	ptr = &str;
	
	while(*ptr)
	{
		len++;
		ptr++;
	}
	
	printf(" Length of the string is : %d",len);
	return 0;
}
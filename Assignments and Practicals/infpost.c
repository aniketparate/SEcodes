#include<stdio.h>

char stack[20];
int top =-1;

int prec(char c)
{
	if (c == '^')
	{
		return 3;
	}
	else if (c == '*' || c == '/')
	{
		return 2;
	}
	else if (c == '+' || c == '-')
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

char infixtopostfix(char a)
{
	
}

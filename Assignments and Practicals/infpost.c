#include<stdio.h>

char stack[30];
int top =-1;

int priority(char c)
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

void push(char a)
{
	top++;
	stack[top] = a; 
}

char pop()
{
	if (stack[top] == -1)
	{
		return -1;
	}
	else
	{
		return stack[top--];
	}
}

void display()
{
	while (stack[top] != '\0')
	{
		printf("%c", stack[top--]);
	}
}

int main()
{
	char exp[30];
	char x;
	int i=0;

	printf(" Enter Infix expression : ");
	scanf("%s",exp);
	printf("\n Postfix expression : ");
	
	while (exp[i] != '\0')
	{
		if (exp[i] == '(' || stack[top] == -1)
		{
			push(exp[i]);
		}
		else if (exp[i] == ')')
		{
			while ((x = pop()) != '(')
			{
				printf("%c", x);
			}
		}
		else if (exp[i] == '^' || exp[i] == '*' || exp[i] == '/' || exp[i] == '+' || exp[i] == '-')
		{
			while (priority(stack[top]) >= priority(exp[i]))
			{
				printf("%c",pop());
			}
			push(exp[i]);
		}
		else
		{
			printf("%c",exp[i]);
		}
		i++;	
	}
	display();
	
	return 0;
}
#include<stdio.h>

char stack[30];
int top =-1;

void push(char x)
{
	stack[++top] = x;
}

char pop()
{
	if(top == -1)
	return -1;
	else
	return stack[top--];
}

int priority(char x)
{
	if(x == '(')
	return 0;
	if(x == '+' || x == '-')
	return 1;
	if(x == '*' || x == '/')
	return 2;
}

int main()
{
	char exp[30];
	char *p, x;
	printf("Enter the expression: ");
	scanf("%s", exp);
	p = exp;
	while(*p != '\0')
	{
		if(isalnum(*p))           					  // is alpha numeric
		printf("%c",*p);         
		else if(*p == '(' || stack[top] ==-1)         //if stack is empty or (
		push(*p);                  					  //value at p 
		else if(*p ==')')          
		{
			while((x = pop()) != '(')     			  //pop until (
			printf("%c", x);
		}
		else										  //operator
		{
			while(priority(stack[top]) >= priority(*p))            
			{
				printf("%c",pop()); 
			}                             
			push(*p); 
		}
		p++;
	}
	while(top != -1)        						    // until stack is empty    
	{ 
		printf("%c",pop());
	}
}
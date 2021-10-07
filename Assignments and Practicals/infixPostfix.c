#include<stdio.h>
#include<stdlib.h>

char st[20];
int top;

void push(char a)
{
	top++;
    st[top] = a;
}

char pop()
{
	if(top == -1)
    {
        return -1;
    }
	else
    {
        return st[top--];
    }
}

int priority(char a)
{
	if(a == '(')
	return 0;
	if(a == '+' || a == '-')
	return 1;
	if(a == '*' || a == '/')
	return 2;
}

int main()
{
	char exp[20];
	char *p, x;

	printf("Enter the expression: ");
	scanf("%s", exp);
	p = exp;
	
    while(*p != '\0')
	{
		if(isalnum(*p))
        {
            printf("%c",*p); 
        }         					  
		else if(*p == '(' || st[top] ==-1)         
		{
            push(*p);
        }
        else if(p ==')')          
		{
			while((x = pop()) != '(')     			  
			printf("%c", x);
		}
		else										  
		{
			while(priority(st[top]) >= priority(*p))     
			{
				printf("%c",pop());
			}                             
			push(*p); 
		}
		p++;
	}
	while(top != -1)        						      
	{ 
		printf("%c",pop());
	}
}

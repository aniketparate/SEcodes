#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
}s;

char st[20];

void push(char a)
{
	s.top++;
    st[s.top] = a;
}

char pop()
{
	if(s.top == -1)
    {
        return 1;
    }
	else
    {
        return st[s.top--];
    }
}

int priority(char a)
{
	if(a == '(')
    {
        return 0;
    } 
    else if(a == '+' || a == '-')
	{
        return 1;
    }
    else if (a == '*' || a == '/')
    {
        return 2;
    }
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
		else if(*p == '(' || st[s.top] ==-1)         
		{
            push(*p);                  					  
        }
        else if(*p ==')')          
		{
			while((x = pop()) != '(')     			  
			printf("%c", x);
		}
		else										  
		{
			while(priority(st[s.top]) >= priority(*p))            
			{
				printf("%c",pop()); 
			}                             
			push(*p); 
		}
		p++;
	}
	while(s.top != -1)        						      
	{ 
		printf("%c",pop());
	}
}

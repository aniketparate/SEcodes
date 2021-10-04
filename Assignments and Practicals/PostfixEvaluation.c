#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
}s;

char st[20];

int ischardigit(char a)
	{
		if(a >= '0' && a <= '9')
			return 1;
		else
			return 0;		
	}

int evaluateexp(int p1,int p2, char opr)
{
	if(opr == '+')
		return(p1 + p2);
	else if(opr == '-')
		return(p1 - p2);
	else if(opr == '*')
		return(p1 * p2);
	else if(opr == '/')
		return(p1 / p2);
	else if(opr == '%')
		return(p1 % p2);		
}

void push(char x)
{
	if (s.top == s.size -1)
		printf("Stack is full");
	else
	 { 
    	s.top++;
		st[s.top]=x;
		printf("\n %d inserted in stack",x);
	}
}

char pop(){
	char x = st[s.top--]; //popped
	printf("\n %d element popped out of the stack",x);
	return x;
}

int main()
{
	char op1,op2;
	char x;
	int val;

	printf("\n***PostFix Evaluation***\n");
	printf("Enter the expression:\n");

	while ((x=getchar())!='\n')
	{
		if(ischardigit(x))
			push(x-'0'); //to rectify ASCII value 
		else
		{
			if(s.top == -1)
				printf("\n Stack is Empty.");
			else
			{
				op2=pop();
				op1=pop();
				
				val=evaluateexp(op1,op2,x);
				push ((char)val);
				
			}		
		}
	}
	//val=pop();
	
	printf("\n Value of Expression= %d",(int)val);
	return 0;
}
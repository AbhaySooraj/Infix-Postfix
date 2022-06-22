/*Apply stack to perform Infix to postfix conversion */

#include<stdio.h>
#include<ctype.h>
#define n 10

int intop=-1;
int pstop=-1;

char infix[n],postfix[n];

void findtop()
{
	return infix[intop];
}


void push(int val)
{
	pstop++;
	postfix[pstop]=val;
}

void pop()
{
	infix[intop]=-1;
	intop--;
}


int isoperator(char symb)
{
	if(symb=='+' || symb=='*' || symb=='/' || symb=='-')
	{
		return 1;
	}
	
	else
	{
		return 0;
	}
}

int precedence(char symb)
{
	switch(symb)
	{
		case '/':
		{
			return 2;
		}
		
		case '*':
		{
			return 2;
		}
		
		case '+':
		{
			return 1;
		}
		
		case '-':
		{
			return 1;
		}
		
		default:
		{
			return 0;
		}
	}
}

void infixtopostfix()
{
	int i=0,j=0;
	char x, item;
	item=infix[i];
	while(item!='\0')
	{	
		if(isdigit(item)||isalpha(item))
		{
			postfix[j]=item;
			j++;
		}
		
		else if (isoperator(item))
		{
			x=findtop();
			while(isoperator() && precendence(item))
			{
				x=pop();
				postfix[j]=x;
				j++;
				x=findtop();
			}
		}
		i++;
	}
	postfix[i]='\0';
}

void main
{
	printf("\n ENTER INFIX EXP :");
	scanf(
	
	
	
				
		
		
		
		
		
		
		


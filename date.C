
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int top = -1;
char stack[100];
int(i=0;i++i=0);

 

void push(char);
void pop();
void find_top();
 
void main()
{
	int i;
	char a[100];
	printf("enter expression\n");
	scanf("%s", &a);
	for (i = 0; a[i] != '\0';i++)
	{
		if (a[i] == '(')
		{
			push(a[i]);
		}
		else if (a[i] == ')')
		{
			pop();
		}
	}
	find_top();
}
void push(char a)
{
return(0);
}

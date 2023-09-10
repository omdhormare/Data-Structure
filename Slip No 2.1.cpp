#include<stdio.h>
#include<string.h>
#define MAX 100
struct stack
{
	int a[MAX];
	int top;
}s1;

void init()
{
	s1.top=-1;
}
int isfull()
{
	if(s1.top==MAX-1)
	return 1;
	else
	return 0;
}
void push( char c)
{
	if (isfull())
	printf("\n Stack is full....");
	else 
	{
	s1.top++;
	s1.a[s1.top]=c;
    }
}
void Dis()
{
	int i;
	for(i=s1.top;i>=0;i--)
	{
		printf("%c",s1.a[i]);
	}
}
int main()
{
	char s[100];
	int i;
	init();
	printf("\n Enter String.....");
    gets(s);
    printf("\n Reverce string....");
	for(i=0;i<=strlen(s);i++)
	{
	 if (s[i] != ' ')
	 {
	push(s[i]);
   }
    else
	{
    	Dis();
    	init();
    }
    }
    Dis();
}


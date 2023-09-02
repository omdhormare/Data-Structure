#include <stdio.h>
#include <stdlib.h>
#define MAX 10
struct stack
{
	int a[MAX];
	int top;
} s1;
void init()
{
	s1.top = -1;
}
int isfull()
{
	if (s1.top == MAX - 1)
		return 1;
	else
		return 0;
}
int isempty()
{
	if (s1.top == -1)
		return 1;
	else
		return 0;
}

void push(int num)
{
	if (isfull())
	{
		printf("\nStack full...");
	}
	else
	{
		s1.top++;
		s1.a[s1.top] = num;
		printf("\nPushed successfully.....");
	}
}

void pop()
{
	int val;
	if (isempty())
		printf("\nStack is empty. Cannot perform pop operation.");
	else
	{
		val = s1.a[s1.top];
		s1.top--;
		printf("\nDeleted value = %d", val);
	}
}

void display()
{
	int i;
	if (isempty())
		printf("\nStack is empty.");
	else
	{
		printf("\nStack elements: ");
		for (i = s1.top; i >= 0; i--)
		{
			printf("%d ", s1.a[i]);
		}
	}
}
int main()
{
	int num, ch;
	init();
	do
	{
		printf("\nStack Menu");
		printf("\n1. Push");
		printf("\n2. Pop");
		printf("\n3. Display");
		printf("\n4. Exit");
		printf("Enter your choice: ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			printf("Enter a number: ");
			scanf("%d", &num);
			push(num);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("\nExiting the program.\n");
		default:
			printf("\nInvalid choice");
		}
	} while (ch != 4);
}


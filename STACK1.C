#include <stdio.h>
#include <conio.h>
struct stack {
    int a[5];
    int top;
} s1;

void init() 
{
    s1.top = -1;
}

int isempty() {
    if (s1.top == -1)
        return 1;
    else
        return 0;
}

int isfull() 
{
    if (s1.top == 4)
        return 1;
    else
        return 0;
}

void push(int num)
   {
    if (isfull())
        printf("\n STACK IS FULL. CAN'T PUSH...");
    else 
	{
        s1.top++;
        s1.a[s1.top] = num;
        printf("\n PUSH SUCCESSFULLY..");
    }
}

void pop() 
{
    int val;
    if (isempty()) 
	{
        printf("\n STACK IS EMPTY. CAN'T POP...");
    } 
	else
	{
        val = s1.a[s1.top];
        s1.top--;
        printf("\n POPPED VALUE: %d", val);
    }
}

void dis() 
{
    int i;
    for (i = s1.top; i >= 0; i--) 
	{
        printf("%d\t", s1.a[i]);
    }
}

int main() 
  {
    int ch, num;
    init();
    do {
        printf("\n 1.PUSH ...");
        printf("\n 2.POP ...");
        printf("\n 3.Display...");
        printf("\n 4.Exit...");
        printf("\n Enter A choice...:");
        scanf("%d", &ch);
        switch (ch) 
		{
            case 1:
                printf("\n Enter A No :");
                scanf("%d", &num);
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                dis();
                break;
            case 4:
                printf("\n Exiting program...");
                break;
            default:
                printf("\n Invalid choice...");
        }
    } while (ch<= 4);
    return 0;
}


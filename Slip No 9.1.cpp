#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 40000

struct stack {
    int top;
    int a[MAX];
} s1;

void init() {
    s1.top = -1;
}

int isfull() {
    if (s1.top == MAX - 1)
        return 1;
    else
        return 0;
}

int isempty() {
    if (s1.top == -1)
        return 1;
    else
        return 0;
}

void push(int num) 
{
    if (!isfull()) 
	{  
        s1.top++;
        s1.a[s1.top] = num;
    } else {
        printf("\n Stack Is full. Cannot push.\n");
    }
}

int pop() 
{
    int val;
    if (isempty()) 
	{
        printf("\n Stack Is empty. Cannot pop.\n");
        return -1;
    } 
	else 
	{
        val = s1.a[s1.top];
        s1.top--;
        return val;
    }
}


int main() 
{
    int res, num, a, b, c, d, num1, num2, i;
    char s[100];
    printf("\n Enter POSTFIX Expression: ");
    gets(s);

    printf("Enter Value for A, B, C, D: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    init();

    for (i=0;i<strlen(s);i++) 
	{  
        if (isalpha(s[i])) 
		{
            switch (s[i]) 
			{
                case 'a':
                    push(a);
                    break;
                case 'b':
                    push(b);
                    break;
                case 'c':
                    push(c);
                    break;
                case 'd':
                    push(d);
                    break;
            }
        } 
		else 
		{
            num1 = pop();
            num2 = pop();
            switch (s[i]) 
			{
                case '+':
                    res = num2 + num1;
                    break;
                case '-':
                    res = num2 - num1;
                    break;
                case '*':
                    res = num2 * num1;
                    break;
                case '/':
					res = num2 / num1;
                    break;
            }
            push(res);
        }
    }
    printf("\n Result: %d\n", pop());

}


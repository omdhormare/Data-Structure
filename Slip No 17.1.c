#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<math.h>
#define MAX 100
struct stack {
    int top;
    int a[MAX];
} s1;

void init() 
{
    s1.top = -1;
}

int pop() 
{
    int val = s1.a[s1.top];
    s1.top--;
    return val;
}
void push(int val) 
{ 
    s1.top++;
    s1.a[s1.top] = val;
}
int main() 
{
    char s2[100];
    int i, res, num1, num2, ch;
    printf("\nEnter Postfix Expression: ");
    gets(s2);
    init();
    for (i = 0; i < strlen(s2); i++) 
	{
        ch = s2[i];
        if (isdigit(ch)) 
		{
            push(s2[i]-'0');
        } 
		else 
		{
            num2 = pop();
            num1 = pop();
            switch (s2[i]) 
			{
			    case '^':
                    res =pow(num1,num2);
                    break;	
                case '+':
                    res = num1 + num2;
                    break;

                case '-':
                    res = num1 - num2;
                    break;

                case '*':
                    res = num1 * num2;
                    break;

                case '/':
                    res = num1 / num2;
                    break;
            }
            push(res);
        }
    }
    printf("Result: %d\n", res);
}


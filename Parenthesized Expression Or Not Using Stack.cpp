#include <stdio.h>
#include <stdbool.h>

#define MAX 100

struct stack
{
    char a[MAX];
    int top;
} s1;

void init()
{
    s1.top = -1;
}

int isempty()
{
    if (s1.top == -1)
        return 1;
    else
        return 0;
}

int isfull()
{
    if (s1.top == MAX - 1)
        return 1;
    else
        return 0;
}

void push(char c)
{
    if (isfull())
        printf("\nStack is Full. Cannot Push...");
    else
    {
        s1.top++;
        s1.a[s1.top] = c;
    }
}

char pop()
{
    char ch;
    if (isempty())
        return '\0'; 
    else
    {
        ch = s1.a[s1.top];
        s1.top--;
        return ch;
    }
}

int main()
{
    char e[100];
    init();
    int i;
    printf("Enter The Expression: ");
    scanf("%s",&e);
    for (i = 0; e[i] != '\0'; i++)
    {
        if (e[i] == '[' || e[i] == '{' || e[i] =='(')
        {
            push(e[i]);
        }
        else if (e[i] == ']' || e[i] == '}' || e[i] == ')')
        {
            if (isempty())
            {
                printf("\nExpression is Not Parenthesized....");
                return 0;
            }
            char top_char = pop();
            if ((e[i] == ']' && top_char != '[') ||
                (e[i] == '}' && top_char != '{') ||
                (e[i] == ')' && top_char != '('))
            {
                printf("\nExpression is Not Parenthesized....");
                return 0;
            }
        }
    }

    if (isempty())
        printf("\nExpression is Parenthesized....");
    else
        printf("\nExpression is Not Parenthesized....");

    return 0;
}


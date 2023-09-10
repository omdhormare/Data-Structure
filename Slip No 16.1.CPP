#include <stdio.h>
#define MAX 75
struct stack {
    int top;
    char a[MAX];
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

void push(char s) 
{
    if (isfull())
        printf("\n Stack is full ");
    else {
        s1.top++;
        s1.a[s1.top] = s;
    }
}
void dis()
{
    int i;
    for (i = s1.top; i >= 0; i--) 
	{
        printf("%c", s1.a[i]);
    }
}
int main()
 {
    int i;
    char s[100];
    init();
    printf("\n Enter String : ");
    gets(s); 
    for (i = 0; s[i] != '\0'; i++) 
	{
        if (s[i] == ' ') 
		{
            dis();
            printf(" ");
            init(); 
        } 
		else 
            push(s[i]);
    }
    dis();
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
	char data;
	struct node* next;
};
struct node* top;
void init()
{
	top=NULL;
}

void push(char c)
{
	struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=c;
    newnode->next=top;
    top=newnode;
}
int pop()
{
    char val;
    struct node* temp;
        temp = top;
        val = temp->data;
        top = top->next;
        free(temp);
        return val;
}

 int main() 
 {
    int i;
    int isPalindrome = 1;
    char s1[20];
    printf("\nEnter String...: ");
    gets(s1);
    init(); 
    for (i=0;i<strlen(s1);i++) 
	{
        push(s1[i]);
    }
    for (i=0;i<strlen(s1);i++) 
    {
    	if(s1[i]!=pop())
    	{
    		isPalindrome = 0;
    		break;
		}
	}
	if(isPalindrome)
	printf("Palindrom...");
	else
	printf("Not Palindrom...");
}




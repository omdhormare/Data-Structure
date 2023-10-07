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
	int num;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=c;
    newnode->next=top;
    top=newnode;
}
 
  void display()
  {
  	struct node* temp;
  	for(temp=top;temp!=NULL;temp=temp->next)
  	{
  		printf("%c",temp->data);
	}
  }
 int main() 
 {
    int i;
    char s1[20];
    printf("\nEnter String...: ");
    gets(s1);
    init(); 
    for (i=0;i<strlen(s1);i++) 
	{
        push(s1[i]);
    }
    display();
}




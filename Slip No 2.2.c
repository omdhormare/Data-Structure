#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next,*prev;
};
struct node *create(struct node* head)
{
	int i,n;
	struct node* temp,*newnode;
	printf("\n Enter A Limit ...");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter Value ..");
		scanf("%d",&newnode->data);
		if(head==NULL)
		{
			head=temp=newnode;
			newnode->next=head;
			head->prev=newnode;
		}
		else
		{
		   temp->next=newnode;
		   newnode->prev=temp;
		   temp=newnode;
		   temp->next=head;
		   head->prev=temp;
		}
	}
	return head;
}

void display(struct node* head)
{
	struct node* temp=head;
	do{
		printf("%d\t",temp->data);
		temp=temp->next;
	  }while(temp!=head);
	
}
int main()
{
	struct node* head=NULL;
	head=create(head);
	display(head);
}

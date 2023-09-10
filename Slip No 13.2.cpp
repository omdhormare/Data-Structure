#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node* next;
};
struct node* create(struct node* head)
{
	int i,n;
	struct node* newnode,*temp;
	printf("\n Enter Limit :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n Enter Value :");
		scanf("%d",&(newnode->data));
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return head;
}

void dis(struct node* head)
{
	struct node* temp;
	for(temp=head;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
}
void odd_count(struct node* head)
{
	struct node* temp;
	int cnt=0;
	for(temp=head;temp!=NULL;temp=temp->next)
		if(temp->data %2==1)
		{
		printf("%d\t",temp->data);
	    }
	    
}

int main()
{
	int num;
	struct node* head=NULL;
	head=create(head);
	dis(head);
	printf("\n Total Odd value :");
	odd_count(head);
}


















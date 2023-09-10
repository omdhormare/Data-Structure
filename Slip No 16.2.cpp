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

int ser_node(struct node* head,int num,int pos=0)
{
	struct node* temp;
	for(temp=head;temp!=NULL;temp=temp->next)
	 {
	 	if(temp->data==num)
	 	{
	 		printf("\n Number Is Present :%d",num);
	 		return 1;
		 }
	 }
	 printf("\n Number NOT Present:%d",num);
	 return 0;
}

int main()
{
	int num,pos,ch;
	struct node* head=NULL;
    head=create(head);
    dis(head);	       	
    printf("\n Enter Number To search :");
	scanf("%d",&num);
	ser_node(head,num);
	        
}

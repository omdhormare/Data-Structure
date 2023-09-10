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

struct node* insert_end(struct node* head,int num)
{
	struct node* newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=NULL;
	for(temp=head;temp->next!=NULL;temp=temp->next);
	temp->next=newnode;
	return head;
}

int main()
{
	int num,pos,ch;
	struct node* head=NULL;
do{
	printf("\n 1. Create Link list :");
	printf("\n 2. Display Link list :");
	printf("\n 3. Search No to Link list :");
	printf("\n 4. Insert At End :");
	printf("\n Enter Choice :");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:head=create(head);
	        break;
	case 2:dis(head);
	       break;  	
	case 3:printf("\n Enter Number To search :");
	        scanf("%d",&num);
	        ser_node(head,num);
	        break;
	case 4:printf("\n Enter Number To END :");
	       scanf("%d",&num);
	       head=insert_end(head,num);
	       break;
	
	 default:printf("\n Invalid choice...........");      
}
    }while(ch<5);
}


















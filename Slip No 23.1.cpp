#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* create(struct node* list)
{
	int i,n;
	struct node* newnode,*temp;
	printf(" Enter Limit :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter Number :");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(list==NULL)
		{
			list=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return list;
}
struct node* insert_End(struct node* list,int num)
{
   struct node* temp,*newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=num;
   newnode->next=NULL;
   for(temp=list;temp->next!=NULL;temp=temp->next);
   temp->next=newnode;
   return list;	
}
struct node* del_Pos(struct node* list,int pos)
{
	struct node* newnode,*temp,*temp1;
	int i;
	{
		if(pos==1)
		{
			temp=list;
			list=list->next;
			free(temp);
		}
		else
		{
            for(i=1,temp=list;i<pos-1 && temp->next!=NULL;i++,temp=temp->next );
			temp1 = temp->next;
            temp->next = temp1->next;
            free(temp1);
		}
	}
	return list;
}
void dis(struct node* list)
{
	struct node* temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
}

int main()
{
struct node* list=NULL;
int num,ch,pos;
do{
	printf("\n-----------------------------------------------\n");
	printf("1. Create Linked List  \n");
	printf("2. Display Linked List  \n");
	printf("3. Insert At End  \n");
	printf("4. Delete Node From Specific Position \n");
	printf("5. Exit  \n");
	printf("\n-----------------------------------------------\n");
	printf("\n Enter A Choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:list=create(list);
		        break;
		case 2:dis(list);
		        break;
		case 3:printf("Enter Number :");
		       scanf("%d",&num);
			   list=insert_End(list,num);
			   break;   
		case 4:printf("Enter A Position To Deleat Node  :");
		       scanf("%d",&pos);	 
			   list=del_Pos(list,pos);
			   break;       
	    default:printf("Choice Wrong ...");			        
	}
  }while(ch<6);
}











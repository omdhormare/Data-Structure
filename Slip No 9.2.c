#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
struct node* create(struct node* head)
 {
 int i,n;
 struct node* newnode,*temp;
 printf("\n Enter A Limit :  ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("\n Enter Value : ");
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

void rev(struct node* head) 
{
	struct node* temp;
    if (head == NULL)
    {
        return;
    }
    rev(head->next);
    printf("%d\t", head->data);
}

int main()
{
    struct node* head = NULL;
    head = create(head);
    dis(head);
    
    printf("\n \n Reversed List: ");
    rev(head);
}


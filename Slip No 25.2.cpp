#include<stdio.h>
#include<MALLOC.h>
struct node{
int data;
struct node* next;
};
struct node* create(struct node* head)
{
 int i,n;
 struct node* newnode,*temp;
printf("\n Enter limit :");
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


int main()
{
  struct node* head=NULL;
  int ch,num;
  do {
  printf("\n 1.Create Link list :");
  printf("\n 2.Display Link List :");
  printf("\n\n Enter A choice :");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:head=create(head);
         break;
  case 2:dis(head);
         break;
   default:printf("\n Invalid choice :");
}
}while(ch<=3);
}






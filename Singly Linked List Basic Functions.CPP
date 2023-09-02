#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
struct node{
 clrscr();
 int data;
 struct node *next;
};
 struct node* create(struct node* head)
 {
  int i,n;
  struct node* newnode,*temp;
  printf("\n Enter A Limit...:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter A value....:");
   scanf("%d",&newnode->data);
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
 struct node* insert_beg(struct node* head,int num)
 {
   struct node* newnode,*temp;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=num;
   newnode->next=head;
   head=newnode;
   return head;
 }
 struct node* insert_end(struct node* head,int num)
 {
  struct node* newnode,*temp;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=num;
  for(temp=head;temp->next!=NULL;temp=temp->next);
  newnode->next=NULL;
  temp->next=newnode;
  return head;
 }
 struct node* insert_mid(struct node* head,int num,int pos)
 {
  int i;
  struct node* newnode,*temp,*next;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=num;
  newnode->next=NULL;
  for(i=1,temp=head;i<pos-1 &&temp->next!=NULL; i++,temp=temp->next);
  newnode->next=temp->next;
   temp->next=newnode;
   return head;
 }
 struct node* del_Beg(struct node* head)
 {
   struct node* temp;
   temp=head;
   head=head->next;
   free(temp);
   return head;
 }
  struct node* del_specific(struct node* head,int pos)
  {
    struct node* temp,*temp1;
    int i;
    for(i=1,temp=head;i<pos-1 && temp->next!=NULL;i++,temp=temp->next);
    temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
    return head;
  }
  struct node* del_end(struct node* head)
  {
  	struct node* temp,*temp1;
  	for(temp=head;temp->next->next!=NULL;temp=temp->next);
  	temp1=temp->next;
  	temp->next=NULL;
  	free(temp1);
  	return head;
  }

 int main()
 {
  int num,pos,ch;
  struct node* head=NULL;
  do{
  	printf("\n 1.create Node..");
  	printf("\n 2.Display Node..");
  	printf("\n 3.Insert At Beginig Node..");
  	printf("\n 4.Insert At End Node..");
  	printf("\n 5.Insert At Middle Node..");
  	printf("\n 6.Deleate Starting Node..");
  	printf("\n 7.Deleate Specific Position Node..");
  	printf("\n 8.Deleate End Node..");
  	printf("\n Enter A choice...:");
  	scanf("%d",&ch);
  	switch(ch)
{
  case 1:head=create(head);
        break;
  case 2:dis(head);
        break;
  case 3:printf("\n Enter A Number ..:");
  scanf("%d",&num);
  head=insert_beg(head,num);
       break;

  case 4:printf("\n Enter A Number ..:");
         scanf("%d",&num);
         head=insert_end(head,num);
         break;

  case 5:printf("\n Enter A Number ..:");
        scanf("%d",&num);
        printf("\n Enter A Position : ");
        scanf("%d",&pos);
        head=insert_mid(head,num,pos);
        break;


  case 6:head=del_Beg(head);
         break;
  case 7:printf("\n Enter A Position : ");
        scanf("%d",&pos);
        head=del_specific(head,pos);
        break;
  
  case 8:head=del_end(head);
        break;
   default:printf("\n Invalid Choice.....");     
}
}while(ch<9);
  getch();
  return 0;
 }


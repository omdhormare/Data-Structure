#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
 struct node{
 int data;
 struct node* next;
 };
 struct node* top;
 void init()
 {
   top=NULL;
 }
 void push( char c)
 {
    struct node* newnode;
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
    printf(" ");
 }

 int main()
 {
   char ch[200];
   int i;
   clrscr();
   printf("Enter String..: ");
   gets(ch);
   init();
   for(ch=0;ch<strlen(ch);ch++)
   {
     if(ch=='')
     {
       display();
       init();
     }
     else
     {
	push(ch[i]);
     }
   }
     display();
     getch();
     return 0;
 }










#include<stdio.h>
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
 
 int isempty()
 {
 	if(top==NULL)
 	return 1;
 	else
 	return 0;
 }
 
 
 void push(int num)
 {
 	struct node* newnode;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	newnode->data=num;
 	newnode->next=top;
 	top=newnode;
 	printf("\n Push Succc....");
 }
 
 int pop()
 {
 	int val;
 	struct node* temp;
 	if(isempty())
 	printf("\n Stack Is Empty Not POP...");
 	
	 else{
 		temp=top;
 		val=temp->data;
 		top=top->next;
 		free(temp);
 		printf("pop value :%d",val);
		return val;
	}
 }
 void disp()
 {
 	struct node* temp;
 	for(temp=top;temp!=NULL;temp=temp->next)
 	{
 		printf("%d\n",temp->data);
	}
 }
 int main()
 {
 	int ch,num;
 	init();
 	do{
 		printf("\n ------------------------------------------\n");
 		printf("\n 1. Push.");
 		printf("\n 2. Pop.");
 		printf("\n 3. Display Stack Element.");
 		printf("\n ------------------------------------------\n");
 		printf("\n Enter Choice...");
 		scanf("%d",&ch);
 		switch(ch)
 		{
 			case 1:printf("\n Enter Number...: ");
 			       scanf("%d",&num);
 			       push(num);
 			       break;
 			case 2:pop();
			       break;
		    case 3:disp();
			       break;		          
		}
	  }while(ch<4);
 }
 
 
 
 
 
 

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
void odd_dis(struct node* head)
{
	struct node* temp;
	int cnt=0;
	for(temp=head;temp!=NULL;temp=temp->next)
		if(temp->data %2==1)
		{
		printf("%d\t",temp->data);
		cnt++;
	    }
	    printf("\nTotal Odd count :%d\n ",cnt);
}
void alternative_node(struct node* head)
 {
    struct node* temp;
    for (temp = head; temp != NULL; temp = temp->next)
    if (temp->data%2 == 0) 
    {
    printf("%d\t", temp->data);
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
struct node* insert_beg(struct node* head,int num)
{
	struct node* newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	newnode->next=head;
	head=newnode;
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
struct node* insert_mid(struct node* head,int num,int pos)
{
	int i;
	struct node* newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	for(i=1,temp=head;i<pos-1 && temp->next!=NULL;i++,temp=temp->next );
	newnode->next=temp->next;
	temp->next=newnode;
	return head;
}
struct node* Del_beg(struct node* head)
{
    struct node* temp;
    temp = head;
    head = head->next;
    free(temp);
    return head;
}

int main()
{
	int num,pos,ch;
	struct node* head=NULL;
do{
	printf("\n 1. Create Link list :");
	printf("\n 2. Display Link list :");
	printf("\n 3. Odd Number Display :");
	printf("\n 4. Alternative Node Display :");
	printf("\n 5. Search No to Link list :");
	printf("\n 6. Insert At Beginig :");
	printf("\n 7. Insert At End :");
	printf("\n 8. Insert At Middle :");
	printf("\n 9. Delete From Beg :");
	printf("\n Enter Choice :");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:head=create(head);
	        break;
	case 2:dis(head);
	       break;
	case 3:printf("\nTotal Odd values:");
           odd_dis(head);
        	break;
    case 4:
	       printf("\n Alternative node :");
	       alternative_node(head);
	       break;    	
	case 5:printf("\n Enter Number To search :");
	        scanf("%d",&num);
	        ser_node(head,num);
	        break;
	case 6:printf("\n Enter Number To Beg :");
	        scanf("%d",&num);
	        head=insert_beg(head,num);
	        dis(head);
	        break;
	case 7:printf("\n Enter Number To END :");
	       scanf("%d",&num);
	       head=insert_end(head,num);
	       dis(head);
	       break;
	case 8:printf("\n Enter Number To Mid :");
	       scanf("%d",&num);
	       printf("\n Enter position  :");
	       scanf("%d",&pos);
	       head=insert_mid(head,num,pos);
	       dis(head);
	       break;
	case 9:printf("\n After Deleted :");
	       head=Del_beg(head);
	       dis(head);
	       break;
	 default:printf("\n Invalid choice...........");      
}
    }while(ch<10);
}


















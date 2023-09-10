#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* create(struct node* head)
 {
    int i, n;
    struct node* newnode, * temp;
    printf("\n Enter limit :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
        newnode = (struct node*)malloc(sizeof(struct node));
         printf("\n Enter Value :");
        scanf("%d",&(newnode->data));
        newnode->next = NULL;
        if (head == NULL)
		 {
            head = newnode;
            temp = newnode;
        } 
		else 
		{
            temp->next = newnode;
            temp = newnode;
        }
    }
    if (temp != NULL) 
	{
        temp->next = head;
    }
    return head;
}

void dis(struct node* head) 
{
    struct node* temp= head;
    do{
      printf("%d\t", temp->data);
      temp=temp->next;
    }while(temp!= head);
}


int main() 
{
    struct node* head = NULL;
    head = create(head);
    dis(head);
}


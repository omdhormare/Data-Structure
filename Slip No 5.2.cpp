#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* create(struct node* head, int num) 
{
    struct node* newnode;
    while (num > 0) 
	{
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = num % 10;
        num = num / 10;
        newnode->next = head;
        head = newnode;
    }
    return head;
}

void dis(struct node* head) 
{
    struct node* temp;
    for (temp = head; temp != NULL; temp = temp->next) 
	{
        printf("%d", temp->data);
		{
			if (temp->next != NULL) 
            printf(",");
        }
    }
}
int main() 
{
    struct node* head = NULL;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    head = create(head, num);
    dis(head);
}


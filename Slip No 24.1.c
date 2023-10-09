 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 #include<math.h>
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
 void push(char c)
 {
   struct node* newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=c;
   newnode->next=top;
   top=newnode;
 }
 int pop()
 {
    int val;
    struct node* temp;
    temp=top;
    val=temp->data;
    top=top->next;
    free(temp);
    return val;
 }
 int main()
 {
    int num1,num2,res,i,ch;
    char s1[100];
    clrscr();
    printf("Enter Postfix Expression : ");
    gets(s1);
    init();
    for(i=0;i<strlen(s1);i++)
    {
	ch=s1[i];
	if(isdigit(ch))
	{
	   push(s1[i]-'0');
	}
	else{
	       num1=pop();
	       num2=pop();
	       switch(s1[i])
	       {
		  case '-':
		       res=num2-num1;
		       break;
		  case '*':
		       res=num2*num1;
		       break;
		 case '/':
		       res=num2/num1;
		       break;
		 case '+':
		       res=num2+num1;
		       break;

		  case '^':
		       res=pow(num2,num1);
		       break;
		  default:printf("Invalid Can not Match..");
	       }
	       push(res);
	    }
      }
      printf("\n Display Result : %d ",res);
      getch();
      return 0;
 }













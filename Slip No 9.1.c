 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 #include<ctype.h>
 #define MAX 500
 struct node{
   int top;
   int a[AMX];
 }s1;
 void init()
 {
    s1.top=-1;
 }
 void push(char ch)
 {
    s1.top++;
    s1.a[s1.top]=ch;
 }
 int pop()
 {
   int val;
   val=s1.a[s1.top];
   s1.top--;
   return val;
 }

 int main()
 {
    int num1,num2,res,i,a,b,c,d;
    char s2[100];
    printf("Enter Postfix Expression : ");
    gets(s2);
    printf("Enter A value :");
    scanf("%d",&a);
    printf("Enter B value :");
    scanf("%d",&b);
    printf("Enter C value :");
    scanf("%d",&c);
    printf("Enter D value :");
    scanf("%d",&d);
    clrscr();
    init();
    for(i=0;i<=strlen(s2);i++)
    {
       if(isalpha(s2[i]))
       switch(s2[i])
       {
	  case 'a':
		 push(a);
		 break;
	  case 'b':
		 push(b);
		 break;
	  case 'c':
		 push(c);
		 break;
	   case 'd':
		 push(d);
		 break;
       }
       else{
	   num1=pop();
	   num2=pop();
	   switch(s1[i])
	   {
	      case '-':
		   res=num2-num1;
		   break;
	      case '+':
		   res=num2+num1;
		   break;
	      case '*':
		   res=num2*num1;
		   break;
	      case '/':
		   res=num2/num1;
		   break;
	   }
	   push(res);
	  }
    }
    printf("RESULT :  %d ",res);
    getch();
    return 0;
 }





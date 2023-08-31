#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],i,n,l,flag=0;
clrscr();
printf("Enter Limit....");
scanf("%d",&n);
printf("\n Enter N Number....");
for(i=0;i<=n;i++)
scanf("%d",&a[i]);
printf("\n Enter No to search...");
scanf("%d",&l);
{
  if(a[i]==l)
  {
  flag=1;
  break;
   }
}
if(flag==1)
printf("\n No is Found...");
else
printf("\n No is Not Found...");
getch();
return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,flag=0;
	char s1[100][100],num[100];
	printf("Enter Limit....");
	scanf("%d",&n);
	printf("Enter N City Name....");
	for(i=0;i<n;i++)
	{
		scanf("%s",&s1[i]);
	}
	printf("Enter name To Serch....");
	scanf("%s",&num);
	for(i=0;i<n;i++)
	{
	   	if(strcmp(s1[i],num)==0)
	   	{
	    flag=1;
	    break;
      	}
	}
	if(flag==1)
	printf("\n City Found..");
	else
	printf("City Not Found....");
	
}

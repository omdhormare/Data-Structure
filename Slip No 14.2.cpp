#include<stdio.h>
#include<string.h>
int main()
{
	char a[20][20],temp[20],ch;
	int i,n,pass;
	printf("\n Enter A LIMIT  :");
	scanf("%d",&n);
	printf(" Enter A NAME:  ");
	for(i=0;i<n;i++)
	scanf("%s",&a[i]);
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(strcmp(a[i],a[i+1]))
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[i+1]);
				strcpy(a[i+1],temp);
			}
		}
	}
	printf("\n Ascending Order   :");
	for(i=0;i<n;i++)
	printf("%s\t",a[i]);
}

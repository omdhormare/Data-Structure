#include<stdio.h>
int main()
{
	int i,n,pass,a[100],temp;
	printf("\n Enter A Limit :  ");
	scanf("%d",&n);
	printf("\n Enter A value :  ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&n);
	}
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i+1]>a[i])
			{
				temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("\n ASC order :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}

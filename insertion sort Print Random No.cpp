//insertion sort
#include<stdio.h>
#include <stdlib.h>
int main()
{
	int a[100],j,num,i,t,n;
	printf("Enter Limit....");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	a[i]=rand()%100;
	{
		num=a[i];
		for(j=i-1;j>=0 && num <a[j];j--)
		{
			t=a[j+1];
			a[j+1]=a[j];
			a[j+1]=t;
		}
	}
	printf("\n Random  Array.....");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}

#include<stdio.h>
int main()
{
	int a[100],i,j,n,temp;
	printf("\n Enter Limit : ");
	scanf("%d",&n);
	printf("\n Enter Number : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	{
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
		    }
	    }	
    }

	printf(" sort :");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}

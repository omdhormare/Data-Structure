#include<stdio.h>
#include<string.h>
int main()
{
	char a[][20]={"Monday","Tuesday" ,"Wednesday","Thursday","Friday","Saturday","Sunday"};
	char temp[20],ch;
	int i,n,pass;
	for(pass=1;pass<7;pass++)
	{
		for(i=0;i<7-pass;i++)
		{
			if(strcmp(a[i],a[i+1])>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[i+1]);
				strcpy(a[i+1],temp);
			}
		}
	}
	printf("ASC ORDER DAYS :\n");
	for(i=0;i<7;i++)
	printf("%s\t\n",a[i]);
}

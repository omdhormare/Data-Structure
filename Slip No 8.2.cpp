#include<stdio.h>
void insort(int a[],int n)
{
int i,key,j;
for(i=1;i<n;i++)
{
key=a[i];
j=i-1;
while(j>=0 && a[j] > key)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;
}
}
int main()
{
   int n,i,a[100];
printf("Enter Limit....");
scanf("%d",&n);
printf("\n Enter N Number....");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
insort(a,n);
printf("Sorted Array...");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}

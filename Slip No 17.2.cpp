#include <stdio.h>
#include <string.h>

int main() {
    char a[100][100];
    int i, num, flag = 0;
    char t[100]; 

    printf("\nEnter Limit: ");
    scanf("%d", &num);

    printf("Enter city names:");
    for (i=0;i<num;i++) 
	{
        scanf("%s",a[i]);
    }

    printf("\nEnter the city name to search for: ");
    scanf("%s",t);
    for (i=0;i<num;i++) 
	{
        if(strcmp(a[i],t)== 0) 
		{ 
            flag=1;
            break;
        }
    }

    if (flag == 1)
        printf("City Name Found\n");
    else
        printf("City Name Not Found\n");
}



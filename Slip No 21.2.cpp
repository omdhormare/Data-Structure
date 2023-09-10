#include <stdio.h>
int main() 
{
    int a[100], i, num, n, flag = 0;
    printf("\nEnter Limit: ");
    scanf("%d", &num);

    printf("Enter %d Numbers: ", num);
    for (i = 0; i < num; i++)
    scanf("%d", &a[i]);
    printf("\nEnter Number to Search: ");
    scanf("%d", &n);
    for (i = 0; i < num; i++)
   {
        if (a[i] == n)
       {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Number Found\n");
    else
        printf("Number Not Found\n");
}


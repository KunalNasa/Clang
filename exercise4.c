#include<stdio.h>
int main()
{
    int n;
    int num;
    char star = '*';
    printf("Enter the number of rows \n");
    scanf("%d", &n);
    printf("Enter 1 for Star pattern and 0 for reverse Star pattern \n");
    scanf("%d", &num);
    if (num == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for(int j=0; j <=i; j++)
            {
                printf("%c", star);
            }
            printf("\n");
        }
    }
    else if (num == 0)
    {
        for (int i = n; i >=0; i--)
        {
            for(int j= i; j>0; j--)
            {
                printf("%c", star);
            }
            printf("\n");
        }
    }
    else
    {
        printf(" Invalid input \n");
    }
   
    return 0;
}
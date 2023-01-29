#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 0;
    char a;
    char *ptr;
    int n;
    printf("1.Enter the size of your Character ID: \n");
    scanf("%d", &n);
    // printf("enter the value of a \n");
    // getchar();
    // scanf("%c", &a); //it will take ' ' as an input and we will not be able to enter our character.
    // //to avoid these problems use getchar() before scanf.
    ptr = (char *)malloc(n * sizeof(char));
    printf("Enter your Character ID here: \n");
    scanf("%s", ptr); // pointer khud kisi ka address store karta hai.
    if (ptr == NULL)
    {
        printf("Error allocating memory \n");
        exit(1);
    }
    else
    {
        printf("Your Character id is %s \n", ptr);
    }
    while (i < 2)
    {
        printf("%d. Enter the size of your Character ID: \n", i+2);
        scanf("%d", &n);
        ptr = (char *)realloc(ptr, n * sizeof(char));
        printf("Enter your Character ID : \n");
        scanf("%s", ptr);
        if (ptr == NULL)
        {
            printf("Error allocating memory \n");
            exit(1);
        }
        else
        {
            printf("Your Character ID is %s \n", ptr);
        }
        i++;
    }
    return 0;
}
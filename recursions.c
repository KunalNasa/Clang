#include <stdio.h>
//Factorial using recursion method.
int facrecursive(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * facrecursive(n - 1));
    }
}

//Factorial using iteration method.
int faciterative(int number)
{
    int var = 1;
    for (int i = 1; i <= number; i++)
    {
        var = var * i;
    }
    return var;
}

int main()
{
    int num;
    printf("Enter your number \n");
    scanf("%d", &num);
    // printf("%d \n", facrecursive(num));
    printf("%d \n", faciterative(num));
    return 0;
}
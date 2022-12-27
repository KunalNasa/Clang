//fibonacci series - 0,1,1,2,3,5,8,........
#include <stdio.h>
int fibrecursive(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibrecursive(n-1) + fibrecursive(n-2);
    }
}


int main()
{
    printf("%d \n", fibrecursive(42));
    return 0;
}
#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        printf("%d \n", i);
        i = i + 1;
    } while (i <= 100);
    // do while loops execute at least once.
    return 0;
}
#include <stdio.h>
int isPalindrome(int n)
{
    int j, num, k = 0, r = 0;
    num = n;
    while (num > 0)
    {
        num = num / 10;
        k += 1;
    }
    j = n;
    //while loop is a better alternate for this.
    for (int i = 0; i < k; i++)
    {
        r = 10 * r + n % 10;
        n = n / 10;
    }
    if (r == j)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number;
    printf("Check whether number is a Palindrome number or not.\n");
    scanf("%d", &number);
    if (isPalindrome(number))
    {
        printf("This number is a Palindrome number.\n");
    }
    else
    {
        printf("This number is not a Palindrome number.\n");
    }
    return 0;
}
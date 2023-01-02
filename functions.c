#include <stdio.h>
int sum(int a, int b){
    return a + b;
}
void printstar(int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("%c", '*');
    }
    
}
//error in starpattern function written below.
void starpattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c \n", i * '*');
    }
}


int takenum()
{
    int k;
    printf("enter a number \n");
    scanf("%d", &k);
    return k;
}



int main()
{
    int a, b, c;
    a = 9;
    b = 9;
    c = sum(a,b);
    // printf("%d \n", c);
    // printstar(5);
    // c = takenum();
    // printf("The number is %d \n", c);
    starpattern(3);

    // int num, add = 0;
    // printf("Enter your number \n");
    // scanf("%d", &num);
    // while (num > 0)
    // {
    //     add = add + (num%10);
    //     num = num/10;
    // }
    // printf("%d \n", add);

    return 0;
}


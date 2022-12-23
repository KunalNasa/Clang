#include<stdio.h>
int main(){
    // int a = 10;
    // float b = 20;
    // float c = (float)54/5;
    // // printf("the value is %d \n", (int) b);
    //typecasting - (type) value;
    // printf("%f \n",c );
    int num, sum;
    sum = 0;
    printf("Enter your number\n");
    scanf("%d", &num);
    while (num>=0)
    {
        sum += num%10;
        num = num/10;
    }
    printf("%d \n", sum);
    

    return 0;
}

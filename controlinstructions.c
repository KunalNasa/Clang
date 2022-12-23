#include<stdio.h>
int main()
 // printf("%d \n", 4 == 4);
    // logical operators.
    // && -- AND
    // || -- OR
    // !  -- NOT
    // printf("%d \n", !((5>4) && (3>4)));

    // int a =2;
    // int b =3;
    // printf("%d \n", a&b);
    
    // ^ - XOR- exclusive Or - gives True if one is True
    // and other is False otherwise gives False
    

    // a = a + b, can be written as a += b
    // int a = 4;
    // int b = 2;
    // printf("%d \n",b -= a);
    // char stars = '**'  // it will give error as we 
    //can store only one value in a char.
{
    int n1, n2, n3;
    printf("enter your three numbers \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("The average of three numbers: %d \n", (n1 + n2 + n3)/3);
    return 0;
}

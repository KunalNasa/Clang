//Call by value - No change in original value. Only copy of value is passed to the function.
//Call by reference - We can change the original value as we have address of that function.
//Call by value - copies the value.
//Call by reference - copies the address.
#include<stdio.h>
/*
int function(int *ptrx)
{
    printf("CALL BY REFERENCE \n");
    printf("The adress of x is %d \n", ptrx);
}
int function2(int x)
{
    printf("CALL BY VALUE \n");
    printf("The value of x is %d \n", x);
}
*/
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y; /* put y into x */
    *y = temp;
    return;

}
int main()
{
    int a = 30;
    int b = 50;
    swap(&a, &b);
    printf("%d %d \n", a, b);


    // int x = 20;
    // function(&x);
    // function2(x);
}

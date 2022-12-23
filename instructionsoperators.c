#include <stdio.h>
#include <math.h>
int main(){
//     int a = 10;
//     int b = a;
//     printf("%d \n", b);
//     int c = b + 1;
//     printf("%d \n", c);
    int d = 1, e; //valid statement because value of d is defined(but not of e). 

    //given below is wrong code as we have declared value of years after assigning it.
    /*
    int oldAge = 22;
    newAge = oldAge + years;
    int years = 2
    */
    // int x = y = z = 4 // wrong code because value of z is not given to compiler yet. So value
    //of x and y is not declared.


    int x,y,z;
    x = y = z = 4;
    printf("%d \n", x);
    printf("%d \n", y);
    printf("%d \n", z);
 
    // a + b // a and b are operands and + is a operator
    // single variable of L.H. //e.g var = a + b + c - d 
    /*
    valid -- a = b + c
    invalid -- b + c = a
    valid -- c = a/b
    invalid -- c = a^b
    */
//    int a;
//    scanf("enter the value of a %d", &a);
//    printf("%d", a/a);
// ^ -- xor operator
    float a = 10;
    float b = 2;
    float k = pow(a,b);
    printf("%f \n", k);
    printf("%d \n", -4%3); // It gives remainder.
    // for positive numerator remainder will be positive
    // and for negative numerator remainder will be negative.


    printf("%f \n" , 2.0 * 2);
    
    
    int j = (int) 1.9999;
    printf("%d \n", j);
    printf("%d \n", 5*2-3*2);

    return 0;
}
 



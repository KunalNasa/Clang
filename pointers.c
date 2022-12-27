//variable which stores the address of another variable.
//size depends on the architecture. 2bytes for 32 bit.
//Pointer in C can be declared using '*' symbol.
//'&' returns the address of variable. int a = 7, ("&a" means address of a).
//Ankit lives at 64/3 Shivaji Nagar. "&Ankit" means 64/3 Shivaji Nagar.
// "*" is the dereference operator.(also known as indirection operator).
//The pointer that is not assigned any value but NULL is known as NULL pointer.

#include <stdio.h>
int main()
{
    printf("POINTERS \n");
    int a = 20;
    int *ptr_a = &a;
    int *ptr2 = NULL;
    // printf("The value of a is %d %d \n", a, *ptr_a);
    // printf("The value of a is %x \n", ptr_a); //%x - number in hexadecimal(base 16).
    printf("The address of a is %p \n", ptr_a); //%p - an address (or pointer).
    printf("The address of a is %p \n", &a);
    printf("The address of pointer to a is %p \n", &ptr_a);
    printf("The address of some garbage is %p \n", ptr2);
    return 0; 
}

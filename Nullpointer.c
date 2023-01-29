// NULL pointer is a pointer which has a value reserved for indicating that the pointer or
// reference does not refer to a valid objet.
// NULL pointer gives a functionality to C programmer to check whether a pointer is legitimate or not.
// A NULL pointer should not be dereferenced.
//-----USES OF NULL POINTER-----
// To check for a null pointer before accessing any pointer variable(by using if statement).
// To initialize a pointer variable when that pointer variable hasn’t been assigned any valid memory address yet.
// To pass a null pointer to a function argument when we don’t want to pass any valid memory address.
// NOTE : NULL pointer is a value whereas void pointer is a type.
// NOTE : 1. Always initialize pointer variables to NULL.
//        2. Always perform a NULL check before accessing any pointer.

#include <stdio.h>
int main()
{
    int a = 34;
    int *ptr = NULL;

    if (ptr != NULL)
    {
        printf("The address of ptr is %d \n", *ptr);
    }
    else
    {
        printf("The pointer is a NULL pointer and can not be dereferenced. \n");
    }
    // printf("%f", NULL);
    // printf("%lu \n",sizeof(void));

    // int *i, *j; //ye dono unitialized pointers same memory ko point nahi karenge. different memory location ko point karenge.
    // int *ii = NULL, *jj = NULL; //ye dono pointer same memory location ko point karenge jinka address 0(not int 0) hai.
    // if (i == j)
    // {
    //     printf("This might get printed if both i and j are same by chance.");
    // }
    // if (ii == jj)
    // {
    //     printf("This is always printed coz ii and jj are same.\n");
    // }
    return 0;
}
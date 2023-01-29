//Unitialized pointers are known as wild pointers.
//These pointer point to some arbitary location in memory and may cause a program to crash or behave badly.
//

#include<stdio.h>
int main()
{
    int a = 20;
    int *ptr = NULL; //wild pointer
    //*ptr = 30; //undefined behaviour.This is not a good thing to do.
    ptr = &a; // ptr is no longer a wild pointer.
    printf("The value of a is %d\n",*ptr);
    return 0;
}
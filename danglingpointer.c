//Dangling meaning ---- Hanging
//pointer pointing to a freed memory location or the location whose content has been deleted.
//------CAUSES OF DANGLING POINTER------
//Deallocation of memory.
//Returning local variables in function calls.
//Variable going out of scope.
//Dangling pointers can introduce nasty bugs in our C program.
//We can avoid issues caused by dangling pointer by initializing pointer to NULL.
 
#include<stdio.h>
#include<stdlib.h>
int *functiondang()
{
    int a, b, sum;
    a =34;
    b =35;
    sum = a+b;
    return &sum; 
}
int main()
{
    //Case 1: Deallocation of a memory block.
   int *ptr = (int*)malloc(7*sizeof(int));
   ptr[0] = 35;
   ptr[1] = 45;
   ptr[2] = 55;
   ptr[3] = 65;
   free(ptr); //ptr is now a dangling pointer.
   //printf("%p", ptr);

   //Case 2: Function returning local variable address.
   int *dangptr = functiondang(); //dangptr is now dangling pointer.
   //printf("%p", dangptr);
   
   int *danglingptr3;
   //Case 3: If variable goes out of scope.
   {
    int a = 12;
    danglingptr3 = &a;
   }
   printf("%d",danglingptr3);
   //Here variable goes out of scope which means danglingptr3 is pointing to a 
   //location which is freed and hence danglingptr3 is now a dangling pointer.
   return 0;
}
//A storage class defines scope , default initial value & lifetime of a variable.
//scope - where the variable is availabel.
//Default initial value - int a; value inside a.
//Lifetime - Kab tak uplabdh hoga.
//scope - kaha tak uplabdh hoga.
//four types of storage classes most oftenly used:
//1. Auto
//2. Extern
//3. Static
//4. Register
//--------AUTO LOCAL CLASS---------
//Scope : Local to the function they are defined in.
//Default value : Garbage value(a random value).
//Lifetime : Till the end of the function block they are defined in.
//A variable defined without any storage class specification is by default an automatic variable.
//(int a) and (auto int a are same).
//-------EXTERNAL STORAGE CLASS------
//They are same as global variable.
//scope- Global to the program they are defined in.
//default intial value : 0
//Lifetime : They are avialable throughout the lifetime of the program.
//A global variable can be changed by any function in the program.
//-------EXTERN KEYWORD---------
//extern keyword is used to inform our C compiler that a given variable is declared somewhere else.
//using extern will not allocate space for the variable.
//-------STATIC STORAGE CLASS-------
//scope : local to the block they are defined in.
//Default initial value : 0
//Lifetime : They are available throughout the lifetime of the program.
//-------REGISTER STORAGE CLASS-------
//scope : Local to the function they are declared in.
//Default initial value : Garbage value.
//Lifetime : They are available till the end of the function block, in which variable is defined.
//requests compiler to store the variable in the CPU register instead of storing it in memory to have faster access.
//Generally this is done for the variables which are being frequently used.
//NOTE - We can not obtain the address of the registered variables using pointers.
#include<stdio.h>
#include "storageclass2.c"
// int sum;
// int func(int a , int b)
// {
//     // auto int sum;
//     sum = a + b;
//     return sum;
// }

extern int sum;
int main()
{
    // int sum = func(3,5);
    
    // printf("The sum is %d \n",sum);
    return 0;
}
//Declaration : Telling the compiler about the variable(No space reserved). 
    //Definition : Declaration + space reservation
    
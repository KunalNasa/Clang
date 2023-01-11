// If the local and global variable has same name, local variable will take preference.
// arguments which are mentioned in function definition are called formal arguments.
// static variables are variables which have a property of preserving their values even
// when they go out of scope.
// static variable remains in memory throughout the span of the program.
// static variable's value is stored in memory before running main function.So, we have to assign it 
//constant value.
//if no value is assigned to static variable then it starts from zero.

#include <stdio.h>
int func1()
{
    static int a1 = 10;
    a1++;
    return a1;
}

int b = 30;
int func2(int b)
{
    printf("The value of b inside a function is %d \n", b); // ans- 10, because b =10 is local var.
    // printf("The address of b inside func2 is %p \n", &b);
    return b * 10;
}

int func3(int c)
{
    static int myvar = 98;
    printf("The value of myvar is %d \n", myvar);
    myvar++;
    return c + myvar;
}

int main()
{
    int c1 = 10;
    int val = func3(c1);
    val = func3(c1);
    val = func3(c1);
    val = func3(c1);
    val = func3(c1);
    printf("%d \n", func3(c1));

    /*
    int b = 10;
    // printf("The address of b inside main is %p \n", &b);
    int val = func2(b);
    int *ptr = &val;
    printf("The value of func2 is %d \n", val);
    */

    /*
    int a;
    a = func1();
    printf("%d \n", a);
    a = func1();
    printf("%d \n",a);
    */
    return 0;
}
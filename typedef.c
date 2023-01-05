#include <stdio.h>
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
}std;

int main()
{
    // int* a, b; //means ek pointer a naam ka or ek integer b naam ka.
    // int c = 20;
    // a = &c;
    // // b = &c; // gives warning as b stores int values.
    // b = c;
    typedef int* intPointer; // (int*) - jo ki ek pointer hota hai uska naam intPointer rakh diya.
    intPointer a, b;
    int c = 20;
    a = &c;
    b = &c;

    std s1, s2;
    s1.id = 12;
    s2.id = 15;
    printf("The value of s1 is is %d \n", s1.id);
    printf("The value of s2 is is %d \n", s2.id);

/*
    // typedef <previous_name> <alias_name>;
    typedef unsigned long ul;
    typedef int integer; //int ka naam typedef se integer kardia.
    ul l1, l2, l3;
    integer a = 4; //int ki jagah integer likhkr value assign kardi.
    printf("value of a is %d \n", a);
*/

    return 0;
}
//difference between structures and unions lies in the fact that in structures,
//each member has its own storage allocation, whereas members of a union uses a
//single shared memory location.
//This single shared memory location is equal to the size of its largest data member.
//union can not handle all members at once.
#include <stdio.h>
#include<string.h>

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
};


int main()
{
    union Student S1;
    S1.id = 1;
    S1.marks = 40;
    S1.fav_char = 'K';
    strcpy(S1.name, "Kunal");

    printf("The id is %d \n", S1.id);
    printf("The marks are %d \n", S1.marks);
    printf("The favourite character is %c \n", S1.fav_char);
    printf("The name is %s \n", S1.name);
    
    return 0;
}
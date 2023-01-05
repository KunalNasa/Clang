//user defined data types.
//allow us to combine data of different types.
//array elements are accessed using subscript value.
//(.) is called as "structure member operator".
#include<stdio.h>
#include<string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[50];
};
struct Student Kunal, Ravi, Harry; //Global variable.
void print()
{
    printf("%s \n", Kunal.name);
}
int main()
{
    // struct Student Kunal, Ravi, Harry; //local variable.
    Kunal.id = 1;
    Ravi.id = 2;
    Harry.id = 3;
    Kunal.marks = 30;
    Ravi.marks =20;
    Harry.marks = 10;
    Kunal.fav_char = 'k';
    Ravi.fav_char = 'k';
    Harry.fav_char = 'k';
    strcpy(Kunal.name, "Kannu");
    // printf("Kunal got %d marks, Ravi got %d marks and Harry got %d marks. \n", Kunal.marks
    // , Ravi.marks, Harry.marks);
    // printf("The id of Kunal, Ravi and Harry are %d, %d and  %d respectively \n", Kunal.id, Ravi.id, Harry.id);
    // printf("Nick name of kunal is %s. \n", Kunal.name);
    print();
    return 0;
}
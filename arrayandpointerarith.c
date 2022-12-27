//Addition of pointers depends on the size of architecture.
//if size of int is 4 bytes and we add 1 to pointer of any integer(suppose 'a').
//Then the new pointer will have value 4 greater than the old one.
#include<stdio.h>
int main()
{
/*
    int a = 30;
    int *ptr_a = &a;
    printf("Reference \n");
    printf("%d \n", ptr_a);
    ptr_a++;
    printf("%d \n", ptr_a);
*/

/*
    int arr[10];
    int *ptr = arr; //stores the address of arr[0].
    //arr[i] == *(arr + i)
    //if arr is a pointer to arr[0] then arr + i is a pointer to arr[i].
*/

    int array[] = {1,2,3,4,5};
    //array++ - This will throw an error. 
    printf("The value at position 3 is %d \n", array[3]);
    printf("The address of first element of array is %d \n", &array[0]);
    printf("The address of second element of array is %d \n", &array[1]); //address of second element = address of first element + sizeof(int).


    printf("The value at address of first element of array is %d \n", *(&array[0]));
    printf("The value at address of second element of array is %d \n", *(&array[1])); 
    printf("The value at address of third element of array is %d \n", array[2]);
    return 0;
}
#include <stdio.h>
int func(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d \n", i , array[i]);
    }
    // array[0] = 32; //If we change any value here it gets reflected in main.   
    return 0;
}
void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        // printf("The value at %d is %d \n", i , ptr[i]);
        printf("The value at %d is %d \n", i , *(ptr+i));
    }
    *(ptr + 2) = 365;

}

int main()
{
    int arr[] = {1,2,3,4};
    printf("The value at index 0 is %d \n", arr[0]);
    func(arr);
    printf("The value at index 0 is %d \n", arr[0]);
    func2(arr);
    func2(arr);
    return 0;
}

#include <stdio.h>
void arrayreversal(int *array, int *arrayrev)
{
    printf("Array before reversing is given below \n");
    for (int i = 0; i<=4; i++)
    {
        printf("The value at %d is %d \n", i+1 , array[i]);
    }
    printf("\nArray after reversing is given below \n");
    for (int j = 4; j>=0; j--)
    {
        printf("The value at %d is %d \n", j+1, arrayrev[j]);
    }
}

int main()
{
    int array1[] = {1,2,3,4,5};
    arrayreversal(array1, array1);
    return 0;
}

    // printf("Array before reversing is given below \n");
    // for (int i = 0; i<5; i++)
    // {
    //     printf("The value at %d is %d \n", i , array1[i]);
    // }
    // printf("Array after reversing is given below \n");
    // for (int j = 4; j>=0; j--)
    // {
    //     printf("The value at %d is %d \n", j, array1[j]);
    // }
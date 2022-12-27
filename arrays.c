// an array is a collection of data of the same type.
// one directional array-list
// two directional array - matrix
// The C language places no limits on the number of dimensions in an array.

//Poor time complexity of insertion and deletion.
//wastage of memory since arrays are fixed in size.
//It is not possible to increase the size of array, once we have declared the array.

#include <stdio.h>
int main()
{
    int marks[2][4] = {{2, 30, 43, 444}, {1, 2, 3, 4}};
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array\n", i);
    //     scanf("%d",&marks[i]);
    // }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("The value of %d,%d element of the array is %d \n", i, j, marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
 

    // marks[0] = 20;
    // printf("Marks of Ramesh is %d \n",marks[0]);
    int arr[] = {1,2,3,4,5,6};
    printf("%d \n", arr[1]);
    return 0;
}
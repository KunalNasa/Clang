#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the number of rows and columns of your first matrix.\n");
    scanf("%d%d",&a,&b);
    printf("Enter the number of rows and columns of your second matrix.\n");
    scanf("%d%d",&c,&d);
    int matrix1[a][b];
    int matrix2[c][d];
    int matrix3[a][d];
    int sum = 0;
    int k = 0;
    if (b==c)
    {
        for(int i =0; i<a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("Enter the element at position %d%d of your first matrix",i+1,j+1);
                scanf("%d",&matrix1[i][j]);
            } 
        }
        for(int i =0; i<a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("Enter the element at position %d%d of your second matrix",i+1,j+1);
                scanf("%d",&matrix2[i][j]);
            }
        }
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < d; j++)
                {
                    matrix3[i][j]=0;
                    for(int k = 0; k<b; k++)
                    {
                    matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
                }
            sum = 0;     
            }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("%d  ", matrix3[i][j]);
            }
        printf("\n");
        }
    }
    else
    {
        printf("MATRIX MULTIPLICATION IS NOT POSSIBLE!!!!!!\n");
    }
    return 0;
}
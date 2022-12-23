#include<stdio.h>
int main()
{
    // label:
    //     printf("We are inside a label. \n");
    //     goto end;
    // printf("GO TO LABEL. \n");
    // goto label;
    // end:
    //     printf("We are out. \n");
    int num;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number. (Enter 0 for exit). \n");
        scanf("%d", &num);
        if (num == 0)
        goto end;
    }
    end:
        printf("exited \n");
    return 0; 
}


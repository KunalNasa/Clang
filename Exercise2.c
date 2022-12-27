#include <stdio.h>
int main()
{
    int n;
    float num;
    int value;
    start:
        printf("Press 1 for converting KM to Miles. \nPress 2 for converting inches to foot. \nPress 3 for converting CMs to inches. \nPress 4 for converting pound to KGs. \nPress 5 for converting inches to metres. \n");
        // printf("Press 1 for converting KM to Miles. \n);
        // printf("Press 2 for converting inches to foot. \n");
        // printf("Press 3 for converting CMs to inches. \n");
        // printf("Press 4 for converting pound to KGs. \n");
        // printf("Press 5 for converting inches to metres. \n");
        scanf("%d",&n);
        printf("Enter your number");
        scanf("%f", &num);
        switch (n)
        {
        case 1: printf("%f \n",num / (1.6));
            break;
        case 2: printf("%f \n", num / (12));
            break;
        case 3: printf("%f \n", num / (2.54));
            break;
        case 4: printf("%f \n", num / (2.20));
            break;
        case 5: printf("%f \n", num / (39.37));
            break;
        default: printf("Invalid number for conversion \n");
            break;
        }
        // if (n == 1)
        // {
        //     printf("%f \n", num * (1.6));
        // }    
        // else if (n == 2)
        // {
        //     printf("%f \n", num / (12));
        // }
        // else if (n == 3)
        // {
        //     printf("%f \n", num / (2.54));
        // }
        // else if (n == 4)
        // {
        //     printf("%f \n", num / (2.20));
        // }
        // else if (n == 5)
        // {
        //     printf("%f \n", num / (39.37));
        // }
        // else
        // {
        //   printf("Invalid number for conversion");
        // }
        printf("press 0 to start again and any other number to exit. \n");
        scanf("%d", &value);
    if (value == 0)
    {
        goto start;
    }
    else 
    {
        printf("Thankyou for using our programme. \n");
    }
    return 0;
}
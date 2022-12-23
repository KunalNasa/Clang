#include <stdio.h>
int main()
{
    int i = 0;
    char k;
    while(i<5)
    {
        printf("Enter your character \n");
        scanf("%c", &k);
        if(k == 'a')
        {
            printf("you are out \n");
            break;
        }
        i++;
    }
    return 0;
}
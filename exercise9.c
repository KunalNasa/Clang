#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int j = 0;
    int i;
    int k;
    int comp_score = 0;
    int your_score = 0;
    while (j < 3)
    {
        srand(time(NULL));
        k = rand() % 3;
        printf("Enter 1 for Snake.\nEnter 2 for Gun.\nEnter 3 for Water.\n");
        scanf("%d", &i);
        if (k == 0 && i == 1)
        {
            printf("computer response:Snake\nTie.\n");
        }
        else if (k == 0 && i == 2)
        {
            printf("computer response:Snake\nYou have won.\n");
            your_score++;
        }
        else if (k == 0 && i == 3)
        {
            printf("computer response:Snake\nYou have lost.\n");
            comp_score++;
        }
        else if (k == 1 && i == 1)
        {
            printf("computer response:Water\nYou have won.\n");
            your_score++;
        }
        else if (k == 1 && i == 2)
        {
            printf("computer response:Water\nYou have lost.\n");
            comp_score++;
        }
        else if (k == 1 && i == 3)
        {
            printf("computer response:Water\nTie.\n");
        }
        else if (k == 2 && i == 1)
        {
            printf("computer response:Gun\nYou have lost.\n");
            comp_score++;
        }
        else if (k == 2 && i == 2)
        {
            printf("computer response:Gun\nTie.\n");
        }
        else if (k == 2 && i == 3)
        {
            printf("computer response:Gun\nYou have won.\n");
            your_score++;
        }
        else
        {
            printf("YOU HAVE ENTERED WRONG INPUT!!!!\n");
        }
        j++;
    }

    printf("Your score is %d\n", your_score);
    printf("Computer score is %d\n", comp_score);
    if (comp_score>your_score)
    {
        printf("******YOU HAVE LOST*******\n");
    }
    else if (comp_score<your_score)
    {
       printf("******YOU HAVE WON******\n");
    }
    else
    {
        printf("******GAME TIED******\n");
    }

    return 0;
}
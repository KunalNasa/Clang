//We can express strings using array of characters terminsted by a null character('\0').
#include<stdio.h>
void printstr(char str[])
{
    int i = 0;
    while (str[i] !='\n')
    {
        printf("%c", str[i]);
        i++;   
    }
}
int main() 
{
    
    // char name[] = "Kunal";
    // printf(name);
    // char str[] = {'k', 'a', 'n', 'n', 'u', '\0'};
    // printstr(str);
    // printf(str);
    char str[35];
    gets(str); //to take string input from the user.
    printf("Using printf %s \n", str);
    printf("Using Puts: \n");
    puts(str);

    return 0;
}
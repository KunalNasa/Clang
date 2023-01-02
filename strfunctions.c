//strcat() - concatenate or combine two strings.(not working in mac)
//strlen() - show len of string.
//strrev() - Show reverse of a string.(not working)
//strcpy() - copy one string to other.
//strcmp() - compare two given strings.
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[] = "Kunal";
    char s2[] = "Yash";
    char s3[100];
    printf("The strcmp for s1 and s2 returned %d \n",strcmp(s1, s2));
    // puts(strcat(s1, s2)); Trace trap error.
    // printf("The length of s1 and s2 is %d and %d\n",strlen(s1), strlen(s2));
    // puts(strrev(s1));
    /* strcpy(s3, strcat(s1, s2));
     puts(s3);*/ //Trace trap error.

    return 0;
}
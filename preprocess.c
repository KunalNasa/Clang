//preprocessing -> compilation -> assembly -> linking .
//preprocessing - removal of comments, expansion of macros, expansion of includes and files.
//compilation - assembly level instructions are generated.
//assembly - assembly level instrutions are converted to machine code.
//linking - links the function implementation.
//preprocessor is not a part of a compiler.
//#include<headerfile.h//The angle brackets say to look in the standard system directories.
//#include"myFile.h"//The quotation marks say to look in the current directory.
//The #define preprocessor directive can be used to globally replace a word with a number.
//#define directive can be used for debugging.We can have printing statements that we only want active when debugging.
//we can "protect" them in a "ifdef" block.
//#define 
#define PI 3.14
#include<stdio.h>
#include"strngs.c"
#define SQUARE(r) r*r
int main()
{
    float var = PI;
    int r = 4;
    // SQUARE(r);
    printf("Time now is %s\n",__TIME__);
    printf("Date now is %s\n",__DATE__);
    printf("File name is %s\n",__FILE__);
    printf("This is my var %f \n",var);
    printf("The area of the square is %d \n", SQUARE(r));

    return 0;
}
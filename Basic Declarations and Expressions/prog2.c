#include<stdio.h>
/*
Write a C program to get the C version you are using.
Expected Output:

We are using C18!
*/

int main(int argc, char** argv)
{
    if (__STDC_VERSION__ == 201710)
        printf("STDC version: %d%c\nC version: C2x",__STDC_VERSION__);
    return 0;
}

#include<stdio.h>
/*
Write a C program that accepts three integers and find the maximum of three.
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35
*/
int main()
{
    int f_int, s_int, t_int;

    //Taking Inputs
    printf("Input the first integer: ");
    scanf("%d", &f_int);
    printf("Input the second integer: ");
    scanf("%d", &s_int);
    printf("Input the third integer: ");
    scanf("%d", &t_int);

    if (f_int > s_int && f_int > t_int)
    {
        printf("Maximum value of three integers: %d", f_int);
    }
    if (s_int > f_int && s_int > t_int)
    {
        printf("Maximum value of three integers: %d", s_int);
    }
    if (t_int > f_int && t_int > s_int)
    {
        printf("Maximum value of three integers: %d", t_int);
    }
    return 0;
}

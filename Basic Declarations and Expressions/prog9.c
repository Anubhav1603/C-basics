#include<stdio.h>
/*
Write a C program that accepts two integers from the user and calculate the sum of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 38
Expected Output:
Sum of the above two integers = 63
*/
int main()
{
    int first_int, second_int;
    printf("Input the first integer: ");
    scanf("%d",&first_int);
    printf("Input the second integer: ");
    scanf("%d",&second_int);
    printf("Sum of the above two integers = %d", first_int+second_int);
    return 0;
}

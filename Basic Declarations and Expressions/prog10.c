#include<stdio.h>
/*
 Write a C program that accepts two integers from the user and calculate the product of the two integers. Go to the editor
Test Data :
Input the first integer: 25
Input the second integer: 15
Expected Output:
Product of the above two integers = 375
*/
int main()
{
    int first_int, second_int;
    printf("Input the first integer: ");
    scanf("%d",&first_int);
    printf("Input the second integer: ");
    scanf("%d",&second_int);
    printf("Sum of the above two integers = %d", first_int*second_int);
    return 0;
}

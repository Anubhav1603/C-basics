#include<stdio.h>
/*
Write a C program that read 5 numbers and sum of all odd values between them.
Test Data :
Input the first number: 11
Input the second number: 17
Input the third number: 13
Input the fourth number: 12
Input the fifth number: 5
Expected Output:
Sum of all odd values: 46
*/
int main()
{
    int num[5], sum = 0;

    printf("Input the first number: ");
    scanf("%d",&num[0]);

    printf("Input the second number: ");
    scanf("%d",&num[1]);

    printf("Input the third number: ");
    scanf("%d",&num[2]);

    printf("Input the fourth number: ");
    scanf("%d",&num[3]);

    printf("Input the fifth number: ");
    scanf("%d",&num[4]);

    for (int i=0;i<5;i++)
    {
        if ((num[i]%2) != 0)
        {
            sum += num[i];
        }
    }
    printf("Sum of all odd values: %d", sum);

    return 0;
}

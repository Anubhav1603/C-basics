#include<stdio.h>
/*
Write a C program that read 5 numbers and sum of all odd values between them.
Test Data :
Input the first number: 5
Input the second number: 7
Input the third number: 9
Input the fourth number: 10
Input the fifth number: 13
Expected Output:
Sum of all odd values: 34
*/
int main()
{
    int num[5], total=0;

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

    for (int i = 0; i<5; i++)
    {
        if (num[i]%2 != 0)
        {
            total+=num[i];
        }
    }

    printf("Sum of all odd values: %d",total);

    return 0;
}
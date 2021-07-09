#include<stdio.h>
/*
Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values.
Test Data :
Input the first number: 5
Input the second number: 8
Input the third number: 10
Input the fourth number: -5
Input the fifth number: 25
Expected Output:
Number of positive numbers: 4
Average value of the said positive numbers: 12.00
*/
int main()
{
    float num[5], total=0, avg;
    int count=0;

    printf("Input the first number: ");
    scanf("%f",&num[0]);

    printf("Input the second number: ");
    scanf("%f",&num[1]);

    printf("Input the third number: ");
    scanf("%f",&num[2]);

    printf("Input the fourth number: ");
    scanf("%f",&num[3]);

    printf("Input the fifth number: ");
    scanf("%f",&num[4]);

    for (int i = 0; i<5; i++)
    {
        if (num[i] > 0)
        {
            total+=num[i];
            count += 1;
        }
    }

    if (avg != 0)
    {
        avg = total/count;
    }

    printf("Number of positive numbers: %d\n", count);
    printf("Average value of the said positive numbers: %.2f\n", avg);

    return 0;
}
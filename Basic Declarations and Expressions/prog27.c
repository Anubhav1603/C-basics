#include<stdio.h>
/*
Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers.
Test Data :
Input the first number: 5
Input the second number: -4
Input the third number: 10
Input the fourth number: 15
Input the fifth number: -1
Expected Output:
Number of positive numbers: 3
Number of negative numbers: 2

*/
int main()
{
    float num[5];
    int pos_count = 0, neg_count = 0;

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
            pos_count +=1;
        }
        else{
            neg_count +=1;
        }
    }

    printf("Number of positive numbers: %d\n",pos_count);
    printf("Number of negative numbers: %d\n",neg_count);

    return 0;
}

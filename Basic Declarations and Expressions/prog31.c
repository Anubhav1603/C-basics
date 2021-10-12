#include<stdio.h>
/*
31. Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.
Test Data :
Input an integer: 13
Expected Output:
Positive Odd
*/
int main()
{
    int num;//declaring variable
    char num_type;

    printf("Please enter a number:");//displaying comment on output screen

    scanf("%d", &num);

    if (num % 2 == 0)
    {
        if (num >= 0)
        {
            printf("Postive even");
        }
        else{
            printf("Negative Even");
        }
    }
    else{
        if (num > 0)
        {
            printf("Postive odd");
        }
        else{
            printf("Negative odd");
        }
    }

    return 0;
}

#include<stdio.h>
/*
Write a C program that reads an integer and check the specified range where it belongs. Print an error message if the number is negative and greater than 80.

Specified Range: [0, 20], [21, 40], [41, 60], [61, 80]

Test Data :
Input an integer: 15
Expected Output:
Range [0, 20]
*/
int main()
{
    int num;
    printf("Input an integer: ");
    scanf("%d",&num);

    if (num >= 0 && num <=20)
    {
        printf("Range - [0, 20]");
    }

    else if (num >= 21 && num <=40)
    {
        printf("Range - [21, 40]");
    }

    else if (num >= 41 && num <=60)
    {
        printf("Range - [41, 60]");
    }

    else if (num >= 61 && num <=80)
    {
        printf("Range - [61, 80]");
    }

    else{
        printf("Outside the range");
    }

    return 0;
}

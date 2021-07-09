#include<stdio.h>
/*
Write a C program that reads three floating values and check if it is possible to make a triangle with them. Also calculate the perimeter of the triangle if the said values are valid.
Test Data :
Input the first number: 25
Input the second number: 15
Input the third number: 35
Expected Output:
Perimeter = 75.0
*/
int main()
{
    float side1, side2, side3, perimeter;

    printf("Input the first number: ");
    scanf("%f",&side1);

    printf("Input the second number: ");
    scanf("%f",&side2);

    printf("Input the third number: ");
    scanf("%f",&side3);

    if (side1 < (side2 + side3) && side2 < (side1 + side3) && side3 < (side1 + side2))
    {
        perimeter = side1 + side2 + side3;
        printf("Perimeter = %.1f",perimeter);
    }
    else{
        printf("Not possible to create a triangle..!");
    }

    return 0;
}

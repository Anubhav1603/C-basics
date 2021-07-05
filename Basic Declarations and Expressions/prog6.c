#include<stdio.h>
/*
Write a C program to compute the perimeter and area of a circle with a given radius 6.
[Take π as 3.14]

Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches
*/
int radius;
float perimeter,area;

int main()
{
    radius = 6;
    area = 3.14*radius*radius;
    perimeter = 2*3.14*radius;
    printf("Perimeter of the Circle = %f inches\n",perimeter);
    printf("Area of the Circle = %f square inches\n",area);
    return 0;
}

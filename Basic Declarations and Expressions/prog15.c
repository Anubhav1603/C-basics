#include<stdio.h>
#include<math.h>
/*
Write a C program to calculate the distance between the two points.
 _____________________________________
|Formula -> d=√((x_2-x_1)²+(y_2-y_1)²)|
 ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣
Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803
*/

int main()
{
    float x1, x2, y1, y2, d;

    //Accepting values
    printf("Input x1: ");
    scanf("%f", &x1);
    printf("Input x2: ");
    scanf("%f", &x2);
    printf("Input y1: ");
    scanf("%f", &y1);
    printf("Input y2: ");
    scanf("%f", &y2);

    //Finding distance between two points
    d = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("Distance between the said points: %.4f", d);

    return 0;
}

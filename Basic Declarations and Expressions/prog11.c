#include<stdio.h>
/*
Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444
*/
int main()
{
    double c_item1, c_item2, weight1, weight2, average;

    //Taking value and weight of item1
    printf("Number of item1:\n");
    scanf("%lf",&c_item1);
    printf("Weight of item1:\n");
    scanf("%lf",&weight1);

    //Taking value and weight of item2
    printf("Number of item2:\n");
    scanf("%lf",&c_item2);
    printf("Weight of item2:\n");
    scanf("%lf",&weight2);

    //Finding average value of items
    average = ((c_item1 * weight1) + (c_item2 * weight2)) / (c_item1 + c_item2);
    printf("Average value of items is: %lf\n", average);

    return 0;

}

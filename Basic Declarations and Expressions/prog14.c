#include<stdio.h>
/*
Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).
Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000
*/
int main()
{
    int t_dis;
    double fuel, avg_c;

    //Taking inputs total distance and fuel consumed
    printf("Input total distance in km: ");
    scanf("%d", &t_dis);
    printf("Input total fuel spent in liters: ");
    scanf("%lf", &fuel);
    
    //calculating average consumption
    avg_c = t_dis/fuel;
    printf("Average consumption (km/lt) %.3f", avg_c);

    return 0;
}

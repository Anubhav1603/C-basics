#include<stdio.h>
#include<math.h>
/*
Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.
 __________________________
|Formula -> ax2 + bx + c = y|
 ￣￣￣￣￣￣￣￣￣￣￣￣￣￣
Test Data :
Input the first number(a): 25
Input the second number(b): 35
Input the third number(c): 12
Expected Output:
Root1 = -0.60000
Root2 = -0.80000
*/
int main()
{
    double a, b, c, discrimant;
    printf("Input the first number(a): ");
    scanf("%lf", &a);
    printf("Input the second number(b): ");
    scanf("%lf", &b);
    printf("Input the third number(c): ");
    scanf("%lf", &c);

    discrimant =  (b*b) - (4*(a)*(c));
    if (discrimant>0 && a !=0)
    {
        double x,y;
        discrimant = sqrt(discrimant);
        x = (-b + discrimant)/(2*a);
        y = (-b - discrimant)/(2*a);
        printf("Root1 = %.5lf\n",x);
        printf("Root1 = %.5lf\n",y);
    }
    else{
        printf("It is not possible to find the roots");
    }

    return 0;
}

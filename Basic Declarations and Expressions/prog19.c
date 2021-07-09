#include<stdio.h>
/*
Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".
Test Data :
Input the first integer: 25  
Input the second integer: 35
Input the third integer: 15
Input the fourth integer: 46
Expected Output:
Wrong values
*/
int main()
{
    int p,q,r,s;

    printf("Input the first integer: ");
    scanf("%d",&q);
    printf("Input the second integer: ");
    scanf("%d",&r);
    printf("Input the third integer: ");
    scanf("%d",&s);
    printf("Input the fourth integer: ");
    scanf("%d",&p);

    if (q > r && s > p && (r+s) > (p+q) && (r > 0) && (s > 0) && (p%2 == 0))
    {
        printf("Correct value");
    }
    else
    {
        printf("Wrong values");
    }
    return 0;
}

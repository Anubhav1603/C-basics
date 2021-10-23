/*
Write a program to print first n natural numbers using for loop.
*/
#include<stdio.h>

int main()
{
    int n;

    printf("Please enter a number to print counting till that: ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    
}
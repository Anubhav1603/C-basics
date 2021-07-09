#include<stdio.h>
/*
Write a C program to find and print the square of each one of the even values from 1 to a specified value.
Test Data :
List of square of each one of the even values from 1 to a 4 :
Expected Output:
2^2 = 4
4^4 = 16
*/
int main()
{
    int spc_value;
    printf("Enter value :");
    scanf("%d", &spc_value);

    printf("List of square of each one of the even values from 1 to a %d :\n",spc_value);

    for (int i = 1; i<=spc_value;i++)
    {
        if (i%2==0 && i <=spc_value)
        {
            printf("%d ^ %d = %d\n", i, i, (i*i));
        }
    }

    return 0;
}

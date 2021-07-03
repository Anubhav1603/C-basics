#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter number a\n");//printf use to print statement in console
    scanf("%d", &a);//scanf takes the user input

    printf("Enter number b\n");
    scanf("%d", &b);

    printf("The sum is: %d\n", a+b);

    return 0;
}

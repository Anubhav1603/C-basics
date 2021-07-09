#include<stdio.h>
/*
Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.
Test Data :
Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00
*/
int main()
{
    int amt, total;
    printf("Input the amount: ");
    scanf("%d",&amt);

    //Breaking the amount into smallest possible number of bank notes.
    total = amt/100;
    printf("%d Note(s) of 100.00\n", total);

    amt = amt - (total*100);
    total  = amt/50;
    printf("%d Note(s) of 50.00\n", total);

    amt = amt - (total*50);
    total  = amt/20;
    printf("%d Note(s) of 20.00\n", total);

    amt = amt - (total*20);
    total  = amt/10;
    printf("%d Note(s) of 10.00\n", total);

    amt = amt - (total*10);
    total  = amt/5;
    printf("%d Note(s) of 5.00\n", total);

    amt = amt - (total*5);
    total  = amt/2;
    printf("%d Note(s) of 2.00\n", total);

    amt = amt - (total*2);
    total  = amt/1;
    printf("%d Note(s) of 1.00\n", total);

    return 0;

}

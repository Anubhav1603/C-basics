/*
Write a program to 4X4 matrix. Input the elements in the matrix and rotate the elements by one position of each row.Use loops to write the solution.

Sample Input:
            -------------
            | 1| 2| 3| 4|
            -------------
            | 5| 6| 7| 8|
            -------------
            | 9|10|11|12|
            -------------
            |13|14|15|16|


Sample Output:
            -------------
            | 2| 3| 4| 1|
            -------------
            | 6| 7| 8| 5|
            -------------
            |10|11|12| 9|
            -------------
            |14|15|16|13|
*/

#include<stdio.h>

void main()
{
    int forward = 0, reverse = 1,str=1,count = 1;
    /*
    forward -> normal matrix
    reverse -> for printing the reverse coulmn
    str-> to print element other than reverse column
    count -> to keep track of counting for reversal
    */
    printf("YOUR MATRIX BEFORE REVERSAL: \n");
    for(int r =1;r <= 4;r++)
    {
        for(int c=1;c<=4;c++ )
        {
            forward += 1;
            printf("%d",forward);
        }
        printf("\n");
    }
    printf("YOUR MATRIX AFTER REVERSAL: \n");
    for(int r =1;r <= 4;r++)
    {
        for(int c=1;c<=4;c++ )
        {
            for(int r=1;r<=3;r++)
            {
                str+=1;
                printf("%d",str);
            }
            str+=1;// +1 so it can be get alligned with count variable
            printf("%d",reverse);
            count+=4;// for making row which will be shifted
            reverse = count;//for reinitiating reverse to shift column
            break;
        }
        printf("\n");//for getting to nxt line
    }
}

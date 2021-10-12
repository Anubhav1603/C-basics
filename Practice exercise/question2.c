#include<stdio.h>

int main() {
    int length, width , area;

    printf("Please enter length of rectangle: ");
    scanf("%d", &length);

    printf("Please enter width of rectangle: ");
    scanf("%d", &width);

    area = length *width;

    printf("Area of Rectangle = %d cm square", area);

}
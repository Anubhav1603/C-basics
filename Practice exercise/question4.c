#include<stdio.h>

int main() {
    float pi, area;
    int height, radius;

    pi = 3.14;
    height = 3;
    radius = 2;

    area = 2*pi*radius*height + 2*pi*radius*radius;

    printf("Area of Cylinder = %.2f cm square", area);

}
// Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
    float radius, area, circumference;
    float pi = 3.14;

    // Input radius
    scanf("%f", &radius);

    // Calculate area and circumference
    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    // Display results with 2 decimal places
    printf("Area=%.2f, Circumference=%.2f", area, circumference);

    return 0;
}

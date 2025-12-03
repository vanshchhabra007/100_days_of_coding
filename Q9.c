// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;

    // Input principal, rate, and time
    scanf("%f %f %f", &principal, &rate, &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    // Display results
    printf("Simple Interest=%.2f, Compound Interest=%.2f", simple_interest, compound_interest);

    return 0;
}

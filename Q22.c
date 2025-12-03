// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cp, sp, percent;

    // Input cost price and selling price
    scanf("%f %f", &cp, &sp);

    // Check profit or loss
    if (sp > cp) {
        percent = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%", percent);
    } 
    else if (sp < cp) {
        percent = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%", percent);
    } 
    else {
        printf("No Profit No Loss");
    }

    return 0;
}

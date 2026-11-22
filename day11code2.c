//wap to find profit or loss percentage given cost price and sp?
#include <stdio.h>

int main() {
    float cp, sp, diff, percent;

    printf("Enter cost price: ");
    scanf("%f", &cp);

    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        diff = sp - cp;
        percent = (diff / cp) * 100;
        printf("Profit = %.2f\n", diff);
        printf("Profit Percentage = %.2f%%\n", percent);
    } 
    else if (cp > sp) {
        diff = cp - sp;
        percent = (diff / cp) * 100;
        printf("Loss = %.2f\n", diff);
        printf("Loss Percentage = %.2f%%\n", percent);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
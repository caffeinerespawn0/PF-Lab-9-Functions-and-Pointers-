#include <stdio.h>

float tax_calc(float gross_income) {
    float tax=0;
    float net_income=0;

    if (gross_income <= 20000) {
        tax = 0;
    }
    else if (gross_income<=50000) {
        tax = 0.10*(gross_income-20000);
    }
    else {
        tax = (0.10*30000) + (0.20*(gross_income - 50000));
    }

    net_income = gross_income - tax;

    printf("Calculated Tax: $%.2f\n", tax);
    printf("Net Income After Tax: $%.2f\n", net_income);

    return tax;
}

int main(){
    float gross_income, total_tax;

    printf("Enter your gross income: ");
    scanf("%f", &gross_income);

    total_tax = tax_calc(gross_income);

    printf("Total Tax Deducted: $%.2f\n", total_tax);

    return 0;
}

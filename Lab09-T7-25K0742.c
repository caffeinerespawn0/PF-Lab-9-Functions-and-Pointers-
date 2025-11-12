#include <stdio.h>

float rental_cost(int days, float kilometers) {
    float total_cost=0;
    float base_rate=40*days;
    float allowed_km=100*days;
    float extra_charge=0;
    float discount=0;

    if (kilometers>allowed_km) {
        extra_charge=0.25*(kilometers-allowed_km);
    }

    total_cost=base_rate+extra_charge;

    if (days>=7) {
        discount=0.10*total_cost;
        total_cost=total_cost-discount;
    }

    return total_cost;
}

int main() {
    int days;
    float kilometers, final_cost;

    printf("Enter number of rental days: ");
    scanf("%d",&days);

    printf("Enter total kilometers driven: ");
    scanf("%f",&kilometers);

    final_cost=rental_cost(days,kilometers);

    printf("Your final rental cost is: $%.2f\n", final_cost);

    return 0;
}
#include <stdio.h>

float electricityBill(int units);

int main() {
    int unit;
    scanf("%d", &unit);
    float bill = electricityBill(unit);
    printf("%.2f", bill);  // Print the bill as a float with two decimal places
    return 0;
}

float electricityBill(int units) {
    float charge = 0, charge1 = 0, charge2 = 0, charge3 = 0, totalCharge = 0;

    for (int i = 1; i <= units && i <= 200; i++) {
        charge = 100;
    }

    for (int i = 201; i <= units && i <= 400; i++) {
        charge1 = (i-200) * 1.2;
    }

    for (int i = 401; i <= units && i <= 600; i++) {
        charge2 = (i-400) * 1.8;
    }

    for (int i = 601; i <= units; i++) {
        charge3 = (i-600) * 2.0 + 0.15 * charge;
    }

    totalCharge = charge + charge1 + charge2 + charge3;

    return totalCharge;
}

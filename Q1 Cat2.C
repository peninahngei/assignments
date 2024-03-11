#include <stdio.h>

int main() {
    // Variables
    int customerID, unitsConsumed;
    char customerName[50];
    float chargesPerUnit, totalAmount, surcharge = 0.0;

    // Prompt user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate charges based on units consumed
    if (unitsConsumed <= 300) {
        chargesPerUnit = 175.0;
    } else if (unitsConsumed <= 600) {
        chargesPerUnit = 200.0;
    } else if (unitsConsumed <= 800) {
        chargesPerUnit = 800.0;
    } else {
        chargesPerUnit = 400.0;
    }

    // Calculate total bill before surcharge
    totalAmount = unitsConsumed * chargesPerUnit;

    // Apply surcharge if total bill exceeds Kshs. 500
    if (totalAmount > 500.0) {
        surcharge = 0.2 * totalAmount;
    }

    // Add surcharge and ensure the minimum bill is Kshs. 200
    totalAmount += surcharge;
    if (totalAmount < 200.0) {
        totalAmount = 200.0;
    }

    // Display the result
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: Ksh %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: Ksh %.2f\n", totalAmount);

    return 0;
}

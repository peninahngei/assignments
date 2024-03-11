#include <stdio.h>

int main() {
    // Variables
    float yearlySalary, tax;

    // Prompt user for input
    printf("Enter Yearly Salary: ");
    scanf("%f", &yearlySalary);

    // Calculate tax based on given conditions
    if (yearlySalary <= 400000) {
        tax = 0.01 * yearlySalary;
    } else if (yearlySalary > 400000 && yearlySalary <= 1000000) {
        tax = 0.01 * 400000 + 0.15 * (yearlySalary - 400000);
    } else {
        tax = 0.01 * 400000 + 0.15 * 600000 + 0.25 * (yearlySalary - 1000000);
    }

    // Display the result
    printf("\nYearly Salary: %.2f\n", yearlySalary);
    printf("Tax to be paid: %.2f\n", tax);

    return 0;
}



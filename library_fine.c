#include <stdio.h>

// Function to calculate fine
int calculateFine(int days) {
    if (days > 5) {
        return (days * 2);  // ₹2 per day
    } else {
        return 0; // No fine
    }
}

int main() {
    int days, fine;

    // Input
    printf("Enter number of late days: ");
    scanf("%d", &days);

    // Function call
    fine = calculateFine(days);

    // Output
    if (fine > 0) {
        printf("Fine = %d\n", fine);
    } else {
        printf("No Fine\n");
    }

    return 0;
}

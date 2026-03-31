#include <stdio.h>

// Function to calculate total marks
int calculateTotal(int m1, int m2, int m3, int m4, int m5) {
    return m1 + m2 + m3 + m4 + m5;
}

// Function to calculate percentage
float calculatePercentage(int total) {
    return total / 5.0;
}

int main() {
    int m1, m2, m3, m4, m5, total;
    float percentage;

    // Input marks
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    // Function calls
    total = calculateTotal(m1, m2, m3, m4, m5);
    percentage = calculatePercentage(total);

    // Output
    printf("Total = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    return 0;
}

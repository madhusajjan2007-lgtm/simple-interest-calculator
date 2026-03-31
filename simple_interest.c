#include <stdio.h>

// Function to calculate simple interest
float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate, time, interest;

    // Taking input from user
    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    // Function call
    interest = calculateSimpleInterest(principal, rate, time);

    // Display result
    printf("Simple Interest = %.2f\n", interest);

    return 0;
}

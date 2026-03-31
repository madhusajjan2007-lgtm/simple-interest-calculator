#include <stdio.h>

// Function to check whether a number is prime
int isPrime(int num) {
    int i;

    if (num <= 1)
        return 0; // Not prime

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int main() {
    int num;

    // Input
    printf("Enter number: ");
    scanf("%d", &num);

    // Function call and output
    if (isPrime(num)) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}

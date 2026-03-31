#include <stdio.h>

int main() {
    int id, original, reversed = 0, remainder;

    // Input
    printf("Enter ID: ");
    scanf("%d", &id);

    original = id;

    // Reverse the number
    while (id != 0) {
        remainder = id % 10;
        reversed = reversed * 10 + remainder;
        id = id / 10;
    }

    // Check palindrome
    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}

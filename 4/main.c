#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is divisible by both 3 and 5
bool isDivisibleBy3And5(int num) {
    return (num % 3 == 0) && (num % 5 == 0);
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isDivisibleBy3And5(number)) {
        printf("%d is divisible by both 3 and 5.\n", number);
    } else {
        printf("%d is not divisible by both 3 and 5.\n", number);
    }

    return 0;
}
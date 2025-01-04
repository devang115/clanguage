#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    // Prompt the user to enter a 3-digit positive integer
    printf("Enter a 3-digit positive integer: ");
    scanf("%d", &num);

    // Check if the number is a 3-digit positive integer
    if (num < 100 || num > 999) {
        printf("Invalid input. Please enter a 3-digit positive integer.\n");
        return 1; // Indicate an error
    }

    // Extract the last digit
    int last_digit = num % 10;

    // Extract the first digit
    int first_digit = num / 100;

    // Calculate the sum of the first and last digits
    int sum = first_digit + last_digit;

    // Print the result
    printf("The sum of the first and last digit is: %d\n", sum);

    return 0; // Indicate successful execution
}
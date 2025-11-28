#include <stdio.h>

int main() {
    int num1, num2;

    // Input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculations
    int sum = num1 + num2;
    int diff = num1 - num2;
    int product = num1 * num2;

    // Prevent division by zero
    if (num2 != 0) {
        int quotient = num1 / num2;
        int remainder = num1 % num2;

        // Output
        printf("\n=== Results ===\n");
        printf("Addition: %d\n", sum);
        printf("Subtraction: %d\n", diff);
        printf("Multiplication: %d\n", product);
        printf("Division: %d\n", quotient);
        printf("Modulus: %d\n", remainder);
    } else {
        printf("\n=== Results ===\n");
        printf("Addition: %d\n", sum);
        printf("Subtraction: %d\n", diff);
        printf("Multiplication: %d\n", product);
        printf("Division: Error! Cannot divide by zero.\n");
        printf("Modulus: Error! Cannot modulus by zero.\n");
    }

    return 0;
}

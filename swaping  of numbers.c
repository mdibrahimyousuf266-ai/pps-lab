#include <stdio.h>

int main() {
    int a, b;

    // Prompt and read user input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Perform and display arithmetic operations
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);

    // Check to prevent division by zero runtime error
    if (b != 0) {
        printf("Division: %d / %d = %d\n", a, b, a / b);
        printf("Remainder: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division and Remainder: Cannot divide by zero.\n");
    }

    return 0;
}

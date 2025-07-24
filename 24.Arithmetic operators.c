#include <stdio.h>

int main() {
    int a, b;
    int sum, difference, product, remainder;
    float quotient;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Perform arithmetic operations
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = (float)a / b;  // Typecast to float for accurate division
    remainder = a % b;

    // Display the results
    printf("\nResults of Arithmetic Operations:\n");
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, difference);
    printf("%d * %d = %d\n", a, b, product);
    printf("%d / %d = %.2f\n", a, b, quotient);
    printf("%d %% %d = %d\n", a, b, remainder);

    return 0;
}


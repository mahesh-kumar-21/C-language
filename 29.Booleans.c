#include <stdio.h>
#include <stdbool.h>  // Enables use of bool, true, false

int main() {
    int a, b;
    bool isEqual, isPositive;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Boolean expressions
    isEqual = (a == b);           // true if a equals b
    isPositive = (a > 0 && b > 0); // true if both numbers are positive

    // Print results
    printf("\nBoolean Evaluations:\n");
    printf("Are a and b equal? %s\n", isEqual ? "True" : "False");
    printf("Are both a and b positive? %s\n", isPositive ? "True" : "False");

    // Using boolean in condition
    if (!isEqual) {
        printf("a and b are not equal.\n");
    }

    return 0;
}


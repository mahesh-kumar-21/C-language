#include <stdio.h>

int main() {
    int a, b;

    // Input two integer values
    printf("Enter two integers (non-zero is true, 0 is false): ");
    scanf("%d %d", &a, &b);

    // Display results of logical operations
    printf("\nResults of Logical Operations:\n");

    printf("%d && %d = %s\n", a, b, (a && b) ? "True" : "False");
    printf("%d || %d = %s\n", a, b, (a || b) ? "True" : "False");
    printf("!%d = %s\n", a, (!a) ? "True" : "False");
    printf("!%d = %s\n", b, (!b) ? "True" : "False");

    return 0;
}


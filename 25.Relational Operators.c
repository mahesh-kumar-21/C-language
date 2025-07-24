#include <stdio.h>

int main() {
    int a, b;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Perform relational operations and display the results
    printf("\nResults of Relational Operations:\n");

    printf("%d == %d : %s\n", a, b, (a == b) ? "True" : "False");
    printf("%d != %d : %s\n", a, b, (a != b) ? "True" : "False");
    printf("%d > %d  : %s\n", a, b, (a > b) ? "True" : "False");
    printf("%d < %d  : %s\n", a, b, (a < b) ? "True" : "False");
    printf("%d >= %d : %s\n", a, b, (a >= b) ? "True" : "False");
    printf("%d <= %d : %s\n", a, b, (a <= b) ? "True" : "False");

    return 0;
}


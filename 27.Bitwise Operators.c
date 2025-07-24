#include <stdio.h>

int main() {
    int a, b;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Perform bitwise operations
    printf("\nResults of Bitwise Operations:\n");

    printf("%d & %d = %d\n", a, b, a & b);       // AND
    printf("%d | %d = %d\n", a, b, a | b);       // OR
    printf("%d ^ %d = %d\n", a, b, a ^ b);       // XOR
    printf("~%d = %d\n", a, ~a);                 // NOT (1's complement of a)
    printf("~%d = %d\n", b, ~b);                 // NOT (1's complement of b)
    printf("%d << 1 = %d\n", a, a << 1);         // Left shift a by 1
    printf("%d >> 1 = %d\n", a, a >> 1);         // Right shift a by 1

    return 0;
}


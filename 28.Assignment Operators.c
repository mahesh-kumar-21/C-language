#include <stdio.h>

int main() {
    int a, b;

    // Input two integers
    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal a = %d, b = %d\n", a, b);

    a += b;
    printf("After a += b  => a = %d\n", a);

    a -= b;
    printf("After a -= b  => a = %d\n", a);

    a *= b;
    printf("After a *= b  => a = %d\n", a);

    if (b != 0) {
        a /= b;
        printf("After a /= b  => a = %d\n", a);

        a %= b;
        printf("After a %%= b => a = %d\n", a);
    } else {
        printf("Division and modulus skipped (b = 0)\n");
    }

    a = 5; b = 3; // Reset values for bitwise operations

    a &= b;
    printf("After a &= b  => a = %d\n", a);

    a |= b;
    printf("After a |= b  => a = %d\n", a);

    a ^= b;
    printf("After a ^= b  => a = %d\n", a);

    a <<= 1;
    printf("After a <<= 1 => a = %d\n", a);

    a >>= 1;
    printf("After a >>= 1 => a = %d\n", a);

    return 0;
}


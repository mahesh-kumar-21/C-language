#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a > 0) {
        if (b > 0) {
            printf("Both numbers are positive.\n");
        } else {
            printf("a is positive but b is not.\n");
        }
    } else {
        printf("a is not positive.\n");
    }

    return 0;
}


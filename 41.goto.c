#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 0)
        goto error;

    printf("You entered: %d\n", num);
    return 0;

error:
    printf("Error: Number must be positive.\n");
    return 1;
}


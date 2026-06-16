#include <stdio.h>

void reverse() {
    int num, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10; // Removes the last digit
    }

    printf("Reversed number = %d\n", reverse);

//    return 0;
}


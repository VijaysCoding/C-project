#include <stdio.h>

void factorial() {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
    //    return 1;
    }

    // Factorials do not exist for negative numbers
    if (n < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        // Multiply numbers from 1 to n
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

//    return 0;
}


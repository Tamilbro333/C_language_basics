#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is less than or equal to 1
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check for factors from 2 up to the square root of the number
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Output the result based on the isPrime flag
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

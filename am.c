#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Ask the user to input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Find the number of digits in the input number
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the nth powers of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the result is equal to the input number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

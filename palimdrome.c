#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number to compare later
    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original number and the reversed number are the same
    if (originalNum == reversedNum)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);

    return 0;
}

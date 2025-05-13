#include <stdio.h>
#include <string.h>

void findDuplicateLetters(char word[]) {
    int count[256] = {0}; // Array to store frequency of each character
    int i;

    // Calculate the frequency of each character
    for (i = 0; word[i] != '\0'; i++) {
        count[(int)word[i]]++;
    }

    // Print characters with frequency greater than 1
    printf("Duplicate letters in the word '%s' are:\n", word);
    for (i = 0; i < 256; i++) {
        if (count[i] > 1) {
            printf("%c occurs %d times\n", i, count[i]);
        }
    }
}

int main() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    findDuplicateLetters(word);

    return 0;
}

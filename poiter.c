#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int *p = arr;  // Pointer to the first element

    for (int i = 0; i < 4; i++) {
        printf("Value at arr[%d]: %d\n", i, *(arr+i));
    }

    return 0;
}

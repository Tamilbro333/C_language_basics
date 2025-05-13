#include <stdio.h>

void rightRotate(int arr[], int n, int d) {
    int temp[d];
    
    // Step 1: Store the last d elements in a temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }
    
    // Step 2: Shift the remaining elements of the array to the right
    for (int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }
    
    // Step 3: Copy the elements from the temporary array to the beginning
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    printf("Original array: ");
    printArray(arr, n);

    rightRotate(arr, n, d);

    printf("Array after right rotation: ");
    printArray(arr, n);

    return 0;
}

#include <stdio.h>

void leftRotate(int arr[], int n, int d) {
    int temp[d];
    
    // Step 1: Store the first d elements in a temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    
    // Step 2: Shift the remaining elements of the array
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }
    
    // Step 3: Copy the elements from the temporary array to the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
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

    leftRotate(arr, n, d);

    printf("Array after left rotation: ");
    printArray(arr, n);

    return 0;
}

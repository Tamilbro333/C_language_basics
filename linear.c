#include <stdio.h>

int main() {
    int size, target, element_found = 0;
    int found_index = -1; 

    printf("\nEnter the size:\n");
    scanf("%d", &size);

    int arr[size];
    printf("\nEnter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the target element:\n");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            element_found = 1;
            found_index = i; 
            break;
        }
    }

    if (element_found == 1) {
        printf("Element found at index %d\n", found_index);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

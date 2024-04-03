#include <stdio.h>

#define MAX_SIZE 100

// Function to delete an element at a specific position
void deleteElement(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position\n");
        return;
    }

    // Shift elements to the left
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease size of array
    (*size)--;
}

// Function to display the array
void displayArray(int arr[], int size) {
    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete (0-indexed): ");
    scanf("%d", &position);

    // Delete element at the specified position
    deleteElement(arr, &size, position);

    // Display the array after deletion
    displayArray(arr, size);

    return 0;
}

#include <stdio.h>

#define MAX_SIZE 100

// Function to display all elements of an array using pointers
void displayArray(int *arr, int size) {
    printf("Elements of the array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Passing the array and its size to the function using pointer
    displayArray(arr, size);

    return 0;
}

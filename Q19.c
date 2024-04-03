#include <stdio.h>

#define MAX_SIZE 100

// Function to display all even numbers present in an array using pointers
void displayEvenNumbers(int *arr, int size) {
    printf("Even numbers in the array: ");
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) {
            printf("%d ", *(arr + i));
        }
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
    displayEvenNumbers(arr, size);

    return 0;
}

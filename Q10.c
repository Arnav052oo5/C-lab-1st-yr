#include <stdio.h>

// Function to find the second largest element in an array
int findSecondLargest(int arr[], int size) {
    int firstLargest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {5, 8, 1, 6, 9, 3, 7, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);

    printf("Second largest element: %d\n", secondLargest);

    return 0;
}

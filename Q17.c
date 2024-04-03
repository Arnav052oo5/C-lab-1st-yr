#include <stdio.h>

#define MAX_SIZE 100

// Function to merge two integer arrays
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int i, j, k;

    // Copy elements of the first array to the merged array
    for (i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }

    // Merge elements of the second array to the merged array
    for (j = 0, k = size1; j < size2; j++, k++) {
        mergedArr[k] = arr2[j];
    }
}

// Function to display the merged array
void displayArray(int arr[], int size) {
    printf("Merged array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergedArr[MAX_SIZE];
    int size1, size2, mergedSize;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter %d elements for the first array: ", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    printf("Enter %d elements for the second array: ", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the arrays
    mergedSize = size1 + size2;
    mergeArrays(arr1, size1, arr2, size2, mergedArr);

    // Display the merged array
    displayArray(mergedArr, mergedSize);

    return 0;
}

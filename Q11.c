#include <stdio.h>

// Function to display all factors of a number
void displayFactors(int num) {
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function to display factors
    displayFactors(number);

    return 0;
}

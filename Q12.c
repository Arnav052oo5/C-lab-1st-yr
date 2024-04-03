#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to check if a number is strong
int isStrong(int num) {
    int originalNum = num;
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == originalNum);
}

// Function to display all strong numbers between 1 and 1000
void displayStrongNumbers() {
    printf("Strong numbers between 1 and 1000 are:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isStrong(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    displayStrongNumbers();
    return 0;
}

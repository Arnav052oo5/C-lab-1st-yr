#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the last digit of the number
    lastDigit = num % 10;

    // Find the first digit of the number using a loop
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;

    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);

    return 0;
}

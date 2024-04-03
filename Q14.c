#include <stdio.h>

// Function to check if the triangle is possible
int isTrianglePossible(int side1, int side2, int side3) {
    // Check triangle inequality theorem
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        return 1; // Triangle is possible
    } else {
        return 0; // Triangle is not possible
    }
}

int main() {
    int side1, side2, side3;

    printf("Enter the lengths of three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (isTrianglePossible(side1, side2, side3)) {
        printf("It is possible to construct a triangle with sides %d, %d, and %d.\n", side1, side2, side3);
    } else {
        printf("It is not possible to construct a triangle with sides %d, %d, and %d.\n", side1, side2, side3);
    }

    return 0;
}

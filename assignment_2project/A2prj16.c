#include <stdio.h>
#include <math.h>
// function without parameter or no args;
// Function prototype
void sumOfSqr();

void sumOfSqr() {
    int num1, num2, sumOfSqr;

    for (int i = 0; i < 5; i++) {
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2); // Reading two integers

        if (num1 < num2) {
            // Calculate sum of squares
            sumOfSqr = (int)(pow(num1, 2)) + (int)(pow(num2, 2));
            printf("Sum of squares: %d\n", sumOfSqr);
        } else {
            // Calculate sum of cubes
            sumOfSqr = (int)(pow(num1, 3)) + (int)(pow(num2, 3));
            printf("Sum of cubes: %d\n", sumOfSqr);
        }
    }
}

int main() {
    sumOfSqr(); // Call the function to execute
   // return 0; // Return from main
}

//find a largest & smallest digit in a number:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, lrgdgt, smldgt, dgt;

    // Read input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Make the number positive
    num = abs(num);

    // Initialize smallest digit with the last digit
    smldgt = num % 10;
    lrgdgt = smldgt;

    // While there are digits left in the number
    while(num > 0) {
        dgt = num % 10; // Get the last digit

        // Update largest digit if the current digit is larger
        if(dgt > lrgdgt) {
            lrgdgt = dgt;
        }

        // Update smallest digit if the current digit is smaller
        if(dgt < smldgt) {
            smldgt = dgt;
        }

        // Remove the last digit from num
        num /= 10;
    }

    // Output the results
    printf("Largest digit: %d\n", lrgdgt);
    printf("Smallest digit: %d\n", smldgt);

    return 0;
}

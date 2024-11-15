//print ASCII charcter:
#include <stdio.h>

int main() {

    int i = 32; // Start from ASCII value 32 (space character)
    char ch;

    do {
        // Print the ASCII value and corresponding character
        printf("ASCII value is %d character: '%c'\n", i, i);
        
        // Ask user if they want to continue
        printf("Do you want to see the next character? (y/n): ");
        scanf(" %c", &ch); // Notice the space before %c to consume any leftover newline

        i++; // Increment the ASCII value
    } while(ch == 'y' || ch == 'Y');

    printf("Program terminated\n");

    return 0;
}
//op - ASCII value is 32 character: ' '
/*
Do you want to see the next character? (y/n): y
ASCII value is 33 character: '!'
Do you want to see the next character? (y/n): y
ASCII value is 34 character: '"'
Do you want to see the next character? (y/n): n
Program terminated 
    */

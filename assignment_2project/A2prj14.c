//count voters:
#include <stdio.h>

int main() {
    int votes_a = 0, votes_b = 0, total_values = 15; // Total number of voters
    char votes;
    int i;

    for(i = 1; i <= total_values; i++) {
        printf("Voter %d, enter 'a' for A & 'b' for B: ", i);
        
        // Use a space before %c to consume any previous newline character
        scanf(" %c", &votes);

        if(votes == 'a' || votes == 'A') {
            votes_a++;
        } else if(votes == 'b' || votes == 'B') {
            votes_b++;
        } else {
            printf("Invalid input, please enter 'a' for A or 'b' for B.\n");
            i--; // Decrement i to repeat this iteration for valid input
        }
    }

    // Output results
    printf("\nVotes for A: %d\nVotes for B: %d\n", votes_a, votes_b);

    return 0;
}

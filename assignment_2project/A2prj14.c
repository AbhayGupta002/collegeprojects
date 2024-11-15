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
//op - Voter 1, enter 'a' for A & 'b' for B: a
/*
Voter 2, enter 'a' for A & 'b' for B: b
Voter 3, enter 'a' for A & 'b' for B: b
Voter 4, enter 'a' for A & 'b' for B: b
Voter 5, enter 'a' for A & 'b' for B: b
Voter 6, enter 'a' for A & 'b' for B: a
Voter 7, enter 'a' for A & 'b' for B: b
Voter 8, enter 'a' for A & 'b' for B: a
Voter 9, enter 'a' for A & 'b' for B: b
Voter 10, enter 'a' for A & 'b' for B: b
Voter 11, enter 'a' for A & 'b' for B: b
Voter 12, enter 'a' for A & 'b' for B: a
Voter 13, enter 'a' for A & 'b' for B: a
Voter 14, enter 'a' for A & 'b' for B: a
Voter 15, enter 'a' for A & 'b' for B: a

Votes for A: 7
Votes for B: 8
*/

=== Code Execution Successful ===




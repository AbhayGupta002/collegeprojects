//inifix to postfix
#include <stdio.h>
#include <ctype.h> // Required for isalnum function
#define SIZE 15

char st[SIZE];
int top = -1;

void push(char v) {
    if (top < SIZE - 1) {
        top++;
        st[top] = v;
    } else {
        printf("Stack overflow\n");
    }
}

char pop() {
    if (top >= 0) {
        return st[top--];
    } else {
        printf("Stack underflow\n");
        return '\0'; // Return null character if stack is empty
    }
}

int pre(char t) {
    switch (t) {
    case '#':
        return 0;
    case '(':
        return 1;
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 3;
    case '$':
        return 4;
    default:
        return -1; // Return -1 for invalid characters
    }
}

int main() {
    char infix[SIZE], post[SIZE];
    char ch, e;
    int i = 0, j = 0;
    printf("\nEnter infix notation => ");
    scanf("%s", infix);
    
    push('#'); // Push '#' to signify the bottom of the stack

    while ((ch = infix[i++]) != '\0') {
        if (ch == '(') {
            push(ch);
        } else if (isalnum(ch)) { // Check if the character is an operand
            post[j++] = ch;
        } else {
            if (ch == ')') {
                while (st[top] != '(') {
                    post[j++] = pop();
                }
                e = pop(); // Pop the '(' from stack
            } else {
                while (pre(st[top]) >= pre(ch)) { // Changed to >= for right associativity
                    post[j++] = pop();
                }
                push(ch);
            }
        }
    }

    while (st[top] != '#') {
        post[j++] = pop();
    }
    post[j] = '\0'; // Null-terminate the postfix expression

    printf("\nPostfix notation = %s\n", post);
    return 0; // Return statement added
}

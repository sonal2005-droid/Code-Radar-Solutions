#include <stdio.h>

int main() {
    int a, b;
    char c;

    // Read two integers and an operator
    scanf("%d %d %c", &a, &b, &c);

    // Perform operations based on the operator
    if (c == '+') {
        printf("%d", (a + b));
    } else if (c == '-') {
        printf("%d", (a - b));
    } else if (c == '*') {
        printf("%d", (a * b));
    } else if (c == '/') {
        if (b != 0) {
            printf("%d", (a / b));
        } else {
            printf("Error: Division by zero");
        }
    } else {
        printf("Error: Invalid operator");
    }

    return 0;
}
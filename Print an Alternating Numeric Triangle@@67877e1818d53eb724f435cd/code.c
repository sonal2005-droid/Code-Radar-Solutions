#include <stdio.h>

int main() {
    int N, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            // Print 1 if the sum of the row and column indexes is even, else print 0
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }

    return 0;
}

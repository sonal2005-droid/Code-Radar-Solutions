#include <stdio.h>

int main() {
    int N, i, j;

    
    scanf("%d", &N);

    for (i = N; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int N, i, j;

    
    scanf("%d", &N);

    for (i = 0; i <=N; i++) {
        for (j = 0; j <= i; j++) {
            
            printf("%d ", (i + j) / 2);
        }
        printf("\n");
    }

    return 0;
}

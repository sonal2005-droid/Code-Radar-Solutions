#include <stdio.h>



int main() {
    int num , shifted,i;
    scanf("%d", &num) ;
    for(i=1;i<=num;i++){
        shifted=num<<i;
        
    }
    printf("%d\n",shifted);
    return 0;
}

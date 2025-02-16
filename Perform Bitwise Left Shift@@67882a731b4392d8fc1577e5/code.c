#include <stdio.h>



int main() {
    int num , shifted,i=1;
    scanf("%d", &num) ;
    while(i<=num){
    
        shifted=num<<i;
        printf("%d", shifted);
        
        
    }
    i++;
    
    
    
    return 0;
}

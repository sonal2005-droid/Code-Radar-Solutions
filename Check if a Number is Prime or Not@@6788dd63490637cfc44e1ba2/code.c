#include <stdio.h>

int main(){

    int a , isPrime=1;
    scanf("%d", &a);

    if(a>0){
        isPrime = 0;
    }
    else{
        for(i=2;i <= a/2;i++){
            if(a%i==0);
            break;
        }
    }
    if(isPrime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}
#include <stdio.h>

int main(){

    int number,n,result;
    scanf("%d%d",&number,&n);

    result= ~(1<<n);
    printf("%d", result);

    return 0;
}
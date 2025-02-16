#include <stdio.h>

int main(){

    int number,n,result;
    scanf("%d%d",&number,&n);

    result= return number & ~(1 << n);
    printf("%d", result);

    return 0;
}
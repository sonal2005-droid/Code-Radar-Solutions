#include <stdio.h>

int main(){

    int a,result;
    scanf("%u",&a);

    result= __builtin_ctz(a);
    printf("%d", result);

    return 0;
}
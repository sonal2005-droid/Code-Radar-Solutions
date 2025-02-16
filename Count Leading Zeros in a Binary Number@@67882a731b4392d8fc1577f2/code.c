#include <stdio.h>

int main(){

    int a,result;
    scanf("%u",&a);

    result= __builtin_clz(a);
    printf("%d", result);

    return 0;
    
}
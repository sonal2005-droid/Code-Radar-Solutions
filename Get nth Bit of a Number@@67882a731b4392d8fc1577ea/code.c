#include <stdio.h>

int main(){

    int number,n,bitValue;
    scanf("%d%d",&number,&n);

    bitValue=(number >> n) & 1;
    printf("%d", bitValue);

    return 0;
}
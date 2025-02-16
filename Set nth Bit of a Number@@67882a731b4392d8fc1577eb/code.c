#include <stdio.h>

int main(){

    int a,b,mask,r;
    scanf("%d%d",&a,&b);

    mask=1<<b;
    r=a|mask;

    printf("%d",r);
    return 0;
}
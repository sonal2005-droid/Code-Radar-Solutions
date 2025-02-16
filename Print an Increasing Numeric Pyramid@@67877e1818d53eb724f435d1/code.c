#include <stdio.h>

int main(){
    int a,i,j,k=1;
    scanf("%d",&a);

    for(i=1;i<=a;i++){

        for(j=i;j<=a-1;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d " k);
        }
        printf("\n");
    }
    return 0;
}
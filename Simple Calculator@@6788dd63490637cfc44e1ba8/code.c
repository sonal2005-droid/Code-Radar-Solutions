#include <stdio.h>

int main(){
    int a , b ,c;

    scanf("%d%d%d", &a,&b,&c);

    if(c=='+'){
        printf("%d",(a+b));
    }
    else if(c=='-'){
        printf("%d",(a-b));
    }
    else if(c=='*'){
        printf("%d",(a*b));
    }
    else if(c=='/'){
        printf("%d",(a/b));
    }
    else{
        printf("Invalid");
    }
    return 0;
}
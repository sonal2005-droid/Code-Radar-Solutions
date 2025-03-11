# include <stdio.h>
defPrime

int  main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
    defPrime(){
        if(num==0||num==1){
            printf("0");
        }
        else {
            for(t=0;t<=num;t++){
                if(num%t==0){
                    printf("0");
                }
                else{
                    printf("1");
                }
            }
        }
    }
}
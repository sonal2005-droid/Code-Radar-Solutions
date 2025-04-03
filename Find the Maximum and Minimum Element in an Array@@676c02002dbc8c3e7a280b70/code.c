#include <stdio.h>
int integer(int N,int a[]){
    int max=a[0];
    int min=a[0];
    for(int i=0;i<N;i++){
        if(max>a[i]){
            max=a[i];
            printf("%d",max);
        }
        else(min>a[i]){
            min=a[i];
            printf("%d",,min);
        }
    }
    return;
}


int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        int a[i];
        scanf("%d",&a[i]);
    }
    int temp=integer(N,a[]);
    printf("%d",temp);
    
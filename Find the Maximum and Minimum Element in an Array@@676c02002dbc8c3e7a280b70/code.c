#include <stdio.h>
#include<limits.h>

int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        int a[i];
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[-1];
    for(int i=0;i<N;i++){
        if(max>a[i]){
            max=a[i];
        }
        else if(min<a[i]){
            min=a[i];
        }
    }
    printf("%d",max);
    printf("%d",min);

}
#include <stdio.h>

int main(){
    char z;
    scanf("%c",&z);

    if(z=='A'){
        printf("Excellent");
    }
    else if(z=='B'){
        printf("Good");
    }
    else if(z=='C'){
        printf("Average");
    }
    else if(z=='D'){
        printf("Below Average");
    }
    else if(z=='F'){
        printf("Fail");
    }
    else{
        printf("Invalid Input");
    }
}
#include <stdio.h>

int main(){
    int a , b ,c;

    scanf("%d%d%d", &a,&b,&c);

    switch(c);
    case 1:'+'
    {
      printf("%d",&(a+b));
    }
    case 2:'-'
    {
        printf("%d",&(a-b));
    }
    case 3:'*'{
        printf("%d",&(a*b));
    }
    case 4:'/'{
        printf("%d",&(a/b));
    }
    case default:
    {
        printf("Invalid");
    }
}
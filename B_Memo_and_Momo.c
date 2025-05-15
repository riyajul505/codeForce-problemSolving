#include<stdio.h>

int main(){

    long long int memo, momo;
    long long int divisor;
    scanf("%lld %lld %lld", &memo, &momo, &divisor);

    if((memo%divisor ==0 ) && (momo%divisor==0)){
        printf("Both");
    }
    else if((memo%divisor ==0 ) && (momo%divisor!=0)){
        printf("Memo");
    }
    else if((memo%divisor != 0 ) && (momo%divisor==0)){
        printf("Momo");
    }
    else{
        printf("No One");
    }
    return 0;
}
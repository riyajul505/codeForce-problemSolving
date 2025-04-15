#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    long long int max = 0;
    for (int i = 0; i < n; i++)
    {
        long long int input;
        scanf("%lld", &input);
        if(input>max){
            max = input;
        }
    }
    printf("%lld", max);
    
    return 0;
}
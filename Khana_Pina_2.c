#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(n%3==0 || n%5==0){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
}
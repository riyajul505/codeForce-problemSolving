#include<stdio.h>
void printNTimes(int n){
    if(n==0){
        return;
    }
    printf("%d", n);
    if(n==1){
        //
    }
    else{
        printf(" ");
    }
    printNTimes(n-1);
}
int main(){

    int input; 
    scanf("%d", &input);
    printNTimes(input);
    return 0;
}
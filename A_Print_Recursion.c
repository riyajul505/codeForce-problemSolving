#include<stdio.h>
void printNTimes(int n){
    if(n==0){
        return;
    }
    printNTimes(n-1);
    printf("I love Recursion\n");
}
int main(){

    int input; 
    scanf("%d", &input);
    printNTimes(input);
    return 0;
}
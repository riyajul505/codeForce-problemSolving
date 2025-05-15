#include<stdio.h>

int main(){

    int weight;
    scanf("%d", &weight);

    if(weight <= 3){
        printf("NO");
    }
    else if(weight%2==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
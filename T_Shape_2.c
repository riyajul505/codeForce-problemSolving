#include<stdio.h>

int main(){

    int input;
    scanf("%d", &input);

    for(int i=0; i<input; i++){
        // space
        for(int j=0; j<input-i-1;j++){
            printf(" ");
        }
        for(int k=0; k<(i*2)+1; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
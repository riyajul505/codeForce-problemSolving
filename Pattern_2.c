#include<stdio.h>

int main(){

    int input;
    scanf("%d", &input);

    for(int i=0; i<input; i++){

        // spaces
        for(int j=0; j<input-i-1; j++){
            printf(" ");
        }
        // printing numbers
        for(int k=0; k<i+1; k++){
            printf("%d", i+1-k);
        }

        printf("\n");
    }
    return 0;
}
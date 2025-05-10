#include<stdio.h>

int main(){

    int input;
    scanf("%d", &input);


    // first half
    for(int i=0; i<input; i++){
        // spaces
        for(int k=0; k<input-i-1; k++){
            printf(" ");
        }

        // half pyramid
        for(int j=0; j<(i*2)+1; j++){
            if((i+1)%2==0){
                printf("-");
            }
            else{
                printf("#");
            }
            
        }
        printf("\n");
    }

    // second half
    int n = input-1;
    for(int j=0; j<n; j++){
        // space
        for(int k=0; k<j+1; k++){
            printf(" ");
        }
        // pattern
        for(int m=0; m<(n*2)-(j*2)-1; m++){
            if(n%2==1){
                if((j+1)%2==1){
                    printf("#");
                }
                else{
                    printf("-");
                }
            }
            else if(n%2==0){
                if((j+1)%2==1){
                    printf("-");
                }
                else{
                    printf("#");
                }
            }
            
        }
        printf("\n");
    }
    return 0;
}
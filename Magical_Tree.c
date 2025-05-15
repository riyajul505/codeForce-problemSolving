#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    scanf("%d",&n);

    int star = abs((1-n)/2)+6;
// pyramid
    for(int i=0; i<star; i++){

        // printing space
        for(int m=0; m<star-i-1; m++){
            printf(" ");
        }

        // printing star
        for(int j=0; j<(i*2)+1; j++){
            printf("*");
        }
        printf("\n");
    }


    // bow

    for(int i=0; i<5; i++){

        // space
        for(int m=0; m<5; m++){
            printf(" ");
        
        }    
        // star
        for(int j=0; j<n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
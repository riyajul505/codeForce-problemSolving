#include<stdio.h>
#include <stdlib.h>

int main(){

    int input; 
    scanf("%d", &input);

    int arr[input][input];
    
    int primary = 0;
    int secondary = 0;

    // taking input on the matrix
    for(int i=0; i<input; i++){
        for(int j=0; j<input; j++){

            scanf("%d", &arr[i][j]);


            // primary diagonal
            if(i==j){
                primary += arr[i][j];
            }

            // secondary diagonal
            if(i+j == (input-1)){
                secondary += arr[i][j];
                // printf("%d\n", arr[i][j]);
            }
        }
    }

    printf("%d", abs(primary-secondary));
    
    return 0;
}
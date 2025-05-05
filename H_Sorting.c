#include<stdio.h>

int main(){

    int input;
    scanf("%d", &input);
    int arr[1000];
    for(int i=0; i<input; i++){
        scanf("%d", &arr[i]);
    }

    for(int j=0; j<input-1; j++){
        for(int k=j+1; k<input; k++){
            if(arr[j]>arr[k]){
                // swap
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
    for(int i=0; i< input; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
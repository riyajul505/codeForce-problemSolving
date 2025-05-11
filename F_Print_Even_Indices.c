#include<stdio.h>

void printEvenIndices(long long int arr[], int n, int i){
    if(i==n){
        return;
    }
    printEvenIndices(arr, n, i+1);
    
    if(i%2==0){
        printf("%d ",arr[i]);
    }
}

int main(){

    int input;
    scanf("%d", &input);
    long long int arr[input];
    // array input
    for(int i=0; i<input; i++){
        scanf("%d", &arr[i]);
    }
    printEvenIndices(arr, input, 0);
    return 0;
}
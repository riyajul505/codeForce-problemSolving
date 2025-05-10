#include<stdio.h>
int count_before_one(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            break;
        }
        count+=1;
    }
    return count;
}
int main(){

    int input;
    scanf("%d", &input);

    int arr[1000];
    // array input
    for(int i=0; i<input; i++){
        scanf("%d", &arr[i]);
    }

    int result = count_before_one(arr, input);
    printf("%d", result);

    return 0;
}
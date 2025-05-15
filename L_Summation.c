#include<stdio.h>

long long int sum_of_numbers(long long int arr[], int size, int i){
    if(i==size){
        return 0;
    }
    
    
    return arr[i]+ sum_of_numbers(arr, size, i+1);
}

int main(){

    int n;
    scanf("%d", &n);

    // taking input
    long long int arr[10000];
    for(int i=0; i<n; i++){
        scanf("%lld", &arr[i]);
    }
    
    long long int result = sum_of_numbers(arr, n, 0);
    printf("%lld", result);
    
    return 0;
}
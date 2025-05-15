#include<stdio.h>

int find_max(long long int arr[], int size, int i){
    if(i==size){
        return arr[i-1];
    }
    
    long long int max = find_max(arr, size, i+1);
    
    if(arr[i]>max){
        max = arr[i];
    }
   
   
    return max;
}

int main(){

    int n;
    scanf("%d", &n);

    // taking input
    long long int arr[1001];
    for(int i=0; i<n; i++){
        scanf("%lld", &arr[i]);
    }
    

    long long int result = find_max(arr, n, 0);
    printf("%lld", result);
    
    return 0;
}
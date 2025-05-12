#include<stdio.h>

int main(){

    int input;
    scanf("%d", &input);
    long long int arr[input];
    for(int i=0; i<input; i++){
        scanf("%lld", &arr[i]);
    }
    int s=0;
    int e=input-1;
    while (s<=e)
    {   
        // for odd number
        if(s==e){
            printf("%lld",arr[s]);
        }
        else{ //universal
            printf("%lld %lld ", arr[s], arr[e]);
        }
        
        s++; e--;
    }
    
    return 0;
}
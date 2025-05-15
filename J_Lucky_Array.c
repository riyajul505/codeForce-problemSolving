#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    long long arr[1000];
    long long minimum;

    // Adding element to the array and finding minimum
    for(int i=0; i<n; i++){
        scanf("%lld", &arr[i]);
        if(arr[i] < minimum){
            minimum = arr[i];
        }
    }

    // Counting the minimum value frequency
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==minimum){
            count++;
        }
    }

    if(count%2==0){
        printf("Unlucky" );
        
    }
    else{
        printf("Lucky" );
    }




    return 0;
}
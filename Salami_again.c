#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    int arr[100000];
    int max = 0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int j=0; j<n; j++){
        arr[j] = max - arr[j];
        printf("%d ", arr[j]);
    }
   
    return 0;
}

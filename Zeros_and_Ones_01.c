#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int arr[100000];
    int zero = 0;
    int one = 0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            zero++;
        }
        else{
            one++;
        }
    }

    printf("%d %d", zero, one);
    return 0;
}
#include<stdio.h>

int main(){
    int n;
    int m;
    scanf("%d", &n);
    int arr[100000];
    int max = 0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d", &m);

    if(arr[m-1]==0){
        arr[m-1]=1;
    }
    else{
        arr[m-1]=0;
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
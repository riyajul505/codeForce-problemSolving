#include<stdio.h>
#include <stdlib.h>

int main(){

    int n, m; 
    scanf("%d %d", &n, &m);

    int arr[n][m];

    // taking input on the matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int finding;
    scanf("%d", &finding);
    int flag = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==finding){
                flag = 1;
               
            }
        }
    }
    if(flag==1){
        printf("will not take number");
    }
    else{
        printf("will take number");
    }
    

  
    return 0;
}
#include<stdio.h>
#include<stdbool.h>

int main(){

    int n,m;

    scanf("%d %d", &n, &m);

    int arr[n][m];

    // adding element to the array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    bool is_jadu = true;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           
            if(i==j){
                if(arr[i][j]==1){
                    continue;
                }
                else{
                    is_jadu = false;
                    break;
                }
            }
            else if(m-i-1==j){

                if(arr[i][j]==1){
                    continue;
                }
                else{
                    is_jadu = false;
                    break;
                }
                
            }
            else if(arr[i][j] >= 1){
                is_jadu = false;
                break;
            }
           

        }
    }
    if(n!=m){
        printf("NO");
    }
    else if(is_jadu == true){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
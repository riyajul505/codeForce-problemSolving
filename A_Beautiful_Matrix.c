#include<stdio.h>

int main(){

    int arr[5][5];
    int i_th_position[2];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j]==1){
                i_th_position[0] = i;
                i_th_position[1] = j;
            }
        }
    }
    
    int stepCalculation = abs(i_th_position[1]-2)+abs(2-i_th_position[0]);
    printf("%d",stepCalculation);



    return 0;
}
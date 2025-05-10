#include<stdio.h>
void odd_even(){
    int input;
    scanf("%d", &input);
    long long int arr[1000];

    // input
    for(int j=0; j<input; j++){
        scanf("%d", &arr[j]);
    }
    

    int odd = 0;
    int even = 0;
    for(int i=0; i<input; i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d", even, odd);
}
int main(){

    odd_even();
    return 0;
}
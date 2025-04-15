#include<stdio.h>

int main(){

    //taking input
    int n;
    scanf("%d", &n);

    int even = 0, odd = 0, positive = 0, negative = 0;
    //condition 
    for(int i=0; i<n; i++){
        long long int input;
        scanf("%lld", &input);
        // even & positive
        if (input==0){
            even++;
        }
        else if((input%2==0) && (input>=0)){
            even++;
            positive++;
        }
        // odd & positive
        else if((input%2!=0) && (input>=0)){
            odd++;
            positive++;
           
        }
        else if((input%2!=0) && (input<0)){
            negative++;
            odd++;
            
        }
        else if ((input%2==0) && (input<0)){
            even++;
            negative++;
        }
        else if (input>0){
            positive++;
        }
        else{
            negative++;
        }
        
    }
    
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);
    return 0;
}
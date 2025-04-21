#include<stdio.h>

int main(){
    // input for number of test cases
    int numberOfTestCase;
    scanf("%d", &numberOfTestCase);
    
    // loop for the given test case
    for(int i=0; i<numberOfTestCase; i++){
        int widht, height;
        scanf("%d %d", &widht, &height);
        if(widht == height){
            printf("Square\n");
        }
        else{
            printf("Rectangle\n");
        }
    }

    return 0;
}
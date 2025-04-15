#include<stdio.h>

int main(){

    while (1)
    {
        int input; 
        scanf("%d", &input);
        if (input == 1999)
        {
            printf("Correct");
            break;
        }
        else{
            printf("Wrong\n");
        }
        
    }
    
    return 0;
}
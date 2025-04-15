#include<stdio.h>

int main(){

    int input;
    scanf("%d", &input);

    for (int i = 1; i <= 12; i++)
    {   
        int mul = input * i;
        printf("%d * %d = %d\n", input, i, mul);
    }
    
    return 0;
}
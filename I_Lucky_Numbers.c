#include<stdio.h>

int main(){

    int number;
    scanf("%d", &number);
    int secondDigit = number % 10;
    int firstDigit = number / 10;

    if (secondDigit == 0)
    {
        printf("YES");
    }
    else if (firstDigit % secondDigit == 0)
    {
        /* code */
        printf("YES");
    }
    else if (secondDigit % firstDigit == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}
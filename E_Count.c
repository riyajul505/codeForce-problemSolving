#include<stdio.h>
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    char string[1000001];
    scanf("%s", &string);
    int stringSize = strlen(string);
    int sum = 0;
    for(int i = 0; i<stringSize; i++){
        int num = (string[i]-48);
        sum += num;
    }
    printf("%d", sum);
    return 0;
}
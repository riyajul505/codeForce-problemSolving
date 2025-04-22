#include<stdio.h>

int main(){

    char firstString[21], secondString[21];
    scanf("%s %s", &firstString, &secondString);
    int result = strcmp(firstString, secondString);

    if(result == 0){
        printf("%s", firstString);
    }
    else if(result < 0){
        printf("%s", firstString);
    }
    else{
        printf("%s", secondString);
    }

    return 0;
}
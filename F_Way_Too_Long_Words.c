#include<stdio.h>

int main(){
    int testCase;
    
    scanf("%d", &testCase);

    // taking string as input
    for(int i=0; i<testCase; i++){
        char string[101];
        scanf("%s", &string);
        // check if string length > 10
        if(strlen(string)>10){
            printf("%c%d%c\n",string[0],strlen(string)-2,string[strlen(string)-1]);
        }
        else{
            printf("%s\n", string);
        }
    }

    return 0;
}
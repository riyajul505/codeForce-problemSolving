#include<stdio.h>
#include<string.h>
int main(){

    int testCase;
    scanf("%d", &testCase);

    for(int i=0; i<testCase; i++){
        // taking input for the test cases
        char firstString[51], secondString[51];
        scanf("%s %s", firstString, secondString);

        int sizeOfFirstString = strlen(firstString);
        int sizeOfSecondString = strlen(secondString);

        if(sizeOfFirstString > sizeOfSecondString){
            int n = 0;
            while(n<sizeOfSecondString){
                printf("%c%c",firstString[n],secondString[n]);
                n++;
            }
            for(int i = n; i<=sizeOfFirstString; i++){
                printf("%c", firstString[i]);
            }
        }
        else if(sizeOfFirstString < sizeOfSecondString){
            int n = 0;
            while(n<sizeOfFirstString){
                printf("%c%c",firstString[n],secondString[n]);
                n++;
            }
            
            for(int i = n; i<sizeOfSecondString; i++){
                printf("%c", secondString[i]);
            }
        }
        else{
            int n = 0;
            while(n<sizeOfFirstString){
                printf("%c%c",firstString[n],secondString[n]);
                n++;
            }
        }
        printf("\n");

    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){

    char firstWord[101];
    char secondWord[101];
    scanf("%s %s", firstWord, secondWord);
    int firsWordLength = strlen(firstWord);
    int secondWordLength = strlen(secondWord);
    int frequencyArray[26] = {0};
    for(int i=0; i<firsWordLength; i++){
        int index = firstWord[i]-'a';
        frequencyArray[index]++; 
    }
    int n=0;
    while (n<secondWordLength)
    {
        /* code */
        int index = secondWord[n]-'a';
        if(frequencyArray[index]==0){
            printf("No");
            break;
        }
        n++;
    }
    
    if(n==secondWordLength){
        printf("Yes");
    }
    
    return 0;
}
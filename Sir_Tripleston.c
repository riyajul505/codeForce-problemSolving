#include<stdio.h>

int main(){

    char sentence[78];
    scanf("%s", sentence);

    int frequencyArray[26] = {0};

    for(int i=0; i<77; i++){
        int index = sentence[i]-'a';
        frequencyArray[index]++;
    }
    for(int i=0; i<26;i++){
        if(frequencyArray[i]==3){
            // printf("%d", frequencyArray[i]);
            continue;
           
        }
        else{
            printf("%c",i+'a');
        }
    }

    return 0;
}
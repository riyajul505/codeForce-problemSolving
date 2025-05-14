#include<stdio.h>

int count_vowel(char str[], int i){
    if(str[i] == '\0'){
        return 0;
    }
    int count = count_vowel(str, i+1);
    
    if((str[i] == 'a') || (str[i]=='e') || (str[i] == 'i') || (str[i]=='o') || (str[i]=='u') || (str[i] == 'A') || (str[i]=='E') || (str[i] == 'I') || (str[i]=='O') || (str[i]=='U')){
        count ++;
    }
    
    return count;
}

int main(){

    char str[201];
    fgets(str, 201, stdin);

    int result = count_vowel(str, 0);
    printf("%d", result);
    return 0;
}
#include<stdio.h>

int main(){

    char string[1001];
    scanf("%s", &string);
    int count = 0;

    // for loop for half of the string length
    for(int i = 0; i<(strlen(string)/2); i++){
        // checking string[first] == string[last] and so on
        if(string[i] != string[strlen(string)-1-i]){
            printf("NO");
            break;
        }
        
        count++;
        
    }
    // if counter is equal string length div 2
    if(count == strlen(string)/2){
        printf("YES");
    }
    return 0;
}
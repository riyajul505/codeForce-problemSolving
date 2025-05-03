#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char word[101];
    scanf("%s", word);
    char copy[101];
    strcpy(copy, word);
   
    int wordLength = strlen(word);
    char firstLetter = word[0];
    char lastLetter = word[wordLength-1];
    char temp = word[0];
    
//     swap
    word[0] = lastLetter;
    word[wordLength-1] = temp;
    int result = strcmp(copy, word);
    if (result==0)
    {
        /* code */
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    
    
    return 0;
}

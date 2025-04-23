#include<stdio.h>
#include<string.h>
int main(){

    char string[1000001];
    scanf("%s", string);

    // frequency array initialization
    int alphabets[26] = {0};

    int stringSize = strlen(string);

    // iterate the string and update the frequency array value
    for(int i=0; i<stringSize; i++){
        // lets suppose alphabet[0] = a and ... alphabet[26] = z
        if(string[i]>= 'a' && string[i] <= 'z'){
            int index = string[i]-'a';
            alphabets[index] += 1;
        }
       
    }

    // printing the alphabets index 0 -> a -> ascii 97
    for(int j=0; j<26; j++){
        if(alphabets[j]>0){
            printf("%c : %d\n", j+'a', alphabets[j]);
        }
        
    }
    return 0;
}
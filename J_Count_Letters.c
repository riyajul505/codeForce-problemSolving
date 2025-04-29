#include<stdio.h>
#include<string.h>
int main(){

    char s[10000001];
    scanf("%s", s);

    // frequency array initialization
    int alphabets[26] = {0};

    int sSize = strlen(s);
 
    // iterate the s and update the frequency array value
    for(int i=0; i<sSize; i++){
        // lets suppose alphabet[0] = a and ... alphabet[26] = z
        int index = s[i]-'a';
        alphabets[index] += 1;
       
    }

    // printing the alphabets index 0 -> a -> ascii 97 lll
    for(int j=0; j<26; j++){
        if(alphabets[j]>0){
            printf("%c : %d\n", j+'a', alphabets[j]);
        }
        
    }

    return 0;
}
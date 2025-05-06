#include <stdio.h>
#include<string.h>
#include<stdbool.h>

bool isPalindrome(char* s) {
    int stringLength = strlen(s);
    char newArray[stringLength+1];
	// int firstCharacterAscii = s[0];
	// if((firstCharacterAscii>90) && (firstCharacterAscii<97)){
    //     return false;
    // }
	// else if(firstCharacterAscii < 65){
	// 	return false;
	// }
	// else if(firstCharacterAscii > 122){
	// 	return false;
	// }

	// pre processing
	int newArrayIndex = 0;
    for(int i=0; i<stringLength; i++){
        int asciiValue = (int)s[i];
		
        if((asciiValue>=65) && (asciiValue<=90)){
			char character = (char)asciiValue+32;
            newArray[newArrayIndex] = character;
			newArrayIndex++;
        }
        else if(asciiValue>=97 && asciiValue<=122){
			char character = (char)asciiValue;
            newArray[newArrayIndex] = character;
			newArrayIndex++;
			
        }
		else if(asciiValue>=48 && asciiValue<=57){
			char character = (char)asciiValue;
			newArray[newArrayIndex] = character;
			newArrayIndex++;
		}
    }

    int newArrayLength = newArrayIndex;
    int n=0;
	// if(newArrayLength == 0 ) return true;
	// if((newArrayLength == 1) &&  (stringLength==1)) return true;
    while(n<newArrayLength){
        if(newArray[n] != newArray[newArrayLength-1-n]){
            return 0;
        }
        n++;
    }
    
    return 1;
}

int main(){
    char *str = "a";
	bool result = isPalindrome(str);
	printf("%d result", result);
	
	return 0;
}



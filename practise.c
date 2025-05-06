#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
bool isAlphaNum(char c){
	if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
		return true;
	}
	else if(c>= '0' && c <= '9'){
		return true;
	}
	return false;
}
bool isPalindrome(char* s) {

	int start=0, end = strlen(s)-1;
	while (start < end)
	{
		
		if(!isAlphaNum(s[start])){
			start++;
			continue;
		}
		if(!isAlphaNum(s[end])){
			end--;
			continue;
		}
		if(tolower(s[start]) != tolower(s[end])){
			return false;
		}
		start++; end--;
	}
	return true;
		
 }

int main(){
    char *str = "0P";
	bool result = isPalindrome(str);
	printf("%d result", result);
	
	return 0;
}



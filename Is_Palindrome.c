#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int is_palindrome(char arr[]){
    int stringLength = strlen(arr);
    int st=0;
    int end = stringLength-1;
    while (st<end)
    {
        if(arr[st] != arr[end]){
            return 0;
        }
        st++; end--;
    }
    return 1;
    
}
int main(){

    char arr[1001];
    scanf("%s", &arr);
    bool palindrome = is_palindrome(arr);
    if(palindrome){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }

    return 0;
}
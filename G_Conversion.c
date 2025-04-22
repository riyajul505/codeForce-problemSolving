#include<stdio.h>

int main(){

    char string[100001];
    fgets(string, 100001, stdin);

    int n = 0;
    while (n < strlen(string)-1)
    {
        
        if(string[n] <= 90 && string[n] >= 65){
            string[n] = string[n]+32;
            printf("%c", string[n]);
            n++;
        }
        else if('a'<= string[n] && string[n] <= 'z'){
            string[n] = string[n]-32;
            printf("%c", string[n]);
            n++;
        }
        else if(string[n] == ','){
            string[n] = ' ';
            printf("%c", string[n]);
            n++;
        }
        else if(string[n] == ' '){
            string[n] = ',';
            printf("%c", string[n]);
            n++;
        }
    }
    

    return 0;
}
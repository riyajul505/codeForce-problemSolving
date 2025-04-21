#include<stdio.h>
#include<string.h>
int main(){
    char string[1000001];
    fgets(string, 1000001, stdin);
    int stringSize = strlen(string);

    for(int i = 0; i<stringSize; i++){
        if(string[i]=='\\')
            {
                break;
            }
        else{
            printf("%c", string[i]);
        }
    }

    return 0;
}
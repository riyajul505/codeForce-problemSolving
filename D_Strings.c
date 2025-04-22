#include<stdio.h>

int main(){
    char string1[11];
    char string2[11];
    scanf("%s %s", &string1, &string2);
    printf("%d %d\n", strlen(string1), strlen(string2));
    printf("%s%s\n", string1, string2);
    char temp = string1[0];
    string1[0] = string2[0];
    string2[0] = temp;
    printf("%s %s", string1, string2);
    return 0;
}
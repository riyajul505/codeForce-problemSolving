#include<stdio.h>
#include<string.h>
int main(){

    char t[1001];
    char s[1001];
    // taking input from user
    scanf("%s %s", &t, &s);

    // printing the string length and string
    printf("%d %d\n", strlen(t), strlen(s));
    printf("%s %s", t, s);

    return 0;
}
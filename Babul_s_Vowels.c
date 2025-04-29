#include<stdio.h>

int main(){

    char alphabet;
    scanf("%c", &alphabet);
    if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}
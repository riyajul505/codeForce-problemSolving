#include<stdio.h>

int main(){
    int n;
    char numbers[1000001];
    scanf("%d %s",&n, &numbers);

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += (numbers[i]-'0');
    }
    printf("%d", sum);
    return 0;
}
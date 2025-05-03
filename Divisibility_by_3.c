#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    char numbers[10000001];
    scanf("%s", numbers);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        sum += numbers[i]-'0';
    }
    
    if(sum % 3 ==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}
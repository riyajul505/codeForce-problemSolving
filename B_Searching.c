#include<stdio.h>
#include<stdbool.h>

int main(){

    int sizeOfArray;
    scanf("%d", &sizeOfArray);

    int arr[sizeOfArray];

    // taking input
    for (int i = 0; i < sizeOfArray; i++)
    {
        scanf("%d", &arr[i]);
    }

    // third input
    int find;
    bool found = false;
    scanf("%d", &find);

    // find 
    for (int i = 0; i < sizeOfArray; i++)
    {
        if(find == arr[i]){
            found = true;
            printf("%d", i);
            break;
        }
    }

    if(found == false){
        printf("-1");
    }

    return 0;
}
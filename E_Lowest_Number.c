#include<stdio.h>

int main(){

    int sizeOfArray;
    scanf("%d", &sizeOfArray);

    long long int arr[sizeOfArray];

    // taking input
    for (int i = 0; i < sizeOfArray; i++)
    {
        scanf("%lld", &arr[i]);
    }


    long long int lowest = arr[0];
    int index = 1;
    // finding lowest
    for (int i = 1; i < sizeOfArray; i++)
    {
        if(arr[i] < lowest){
            lowest = arr[i];
            index = i+1;
        }
    }

    printf("%lld %d", lowest, index);

    return 0;
}
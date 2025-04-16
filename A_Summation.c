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

    long long int suma = 0;
    for (int i = 0; i < sizeOfArray; i++)
    {
        suma += arr[i];
    }

    if(suma < 0){
        printf("%lld", suma*-1);
    }
    else{
        printf("%lld", suma);
    }


    return 0;
}
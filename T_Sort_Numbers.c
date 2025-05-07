#include<stdio.h>
#include <stdlib.h>
#include <stdio.h>

void sortNumber(long long int arr[]){
       for(int i=0; i<2; i++){
        for(int j=i+1; j<3; j++){
            if(arr[i]>arr[j]){
                long long int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
       }
       for(int i=0; i<3; i++){
        printf("%lld\n", arr[i]);
       }
}
int main()
{
   long long int x,y,z;
   scanf("%lld %lld %lld", &x, &y, &z);
   long long int arr[3] ={x,y,z};
   sortNumber(arr);
   printf("\n%lld\n%lld\n%lld", x,y,z);
    return 0;
}
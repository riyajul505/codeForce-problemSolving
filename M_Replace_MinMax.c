#include<stdio.h>

int main(){

     // taking input from user for array size
     int n;
     scanf("%d", &n);
     // array declaration
     int arr[n];
 
     // taking input for array element
     for(int i = 0; i<n; i++){
         scanf("%d", &arr[i]);
     }

    // reversing the array

     int i=0;
     int j=n-1;
     while (i<j)
     {
         // swaping value
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
     }
     
   

    //  printing the updated value
    for (int i = 0; i < n; i++)
    {
        printf("%lld ", arr[i]);
    }

    return 0;
}
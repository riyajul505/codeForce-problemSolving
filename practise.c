#include <stdio.h>

int main()
{
    // taking input from user for array size
    int n;
    scanf("%d", &n);
    // array declaration
    int arr[n];

    // taking input for array element
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // taking input for index that value will be deleted 
    int index;
    scanf("%d", &index);

    // shifting elements from index to delete the value
    for(int i = index; i<n-1; i++){
        arr[i] = arr[i+1];
    }

    // printing the updated array
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    

    return 0;
}
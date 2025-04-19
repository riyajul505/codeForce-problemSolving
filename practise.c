#include <stdio.h>

int main()
{
    // taking input from user for array size
    int n;
    scanf("%d", &n);
    // array declaration
    int arr[n+1];

    // taking input on array
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // taking input for index and value 
    int index, value;
    scanf("%d %d", &index, &value);

    // shifting elements to make space for the new value
    int arraySize = n;
    while (arraySize > index)
    {
        arr[arraySize] = arr[arraySize-1];
        arraySize--;
    }
    
    // placing the value at the shifted index
    arr[index] = value;

    // printing the updated array

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    

    return 0;
}
#include <stdio.h>

int main()
{

    int sizeOfArray;
    scanf("%d", &sizeOfArray);

    long long int arr[sizeOfArray];

    // taking input
    for (int i = 0; i < sizeOfArray; i++)
    {
        scanf("%lld", &arr[i]);
    }

    // showing output
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arr[i] > 10)
        {
            continue;
        }
        else if (arr[i] <= 10)
        {
            printf("A[%d] = %d\n", i, arr[i]);
        }
    }
    return 0;
}
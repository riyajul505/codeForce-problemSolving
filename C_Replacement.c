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
        if (arr[i] == 0)
        {
            printf("0 ");
        }
        else if (arr[i] >= 0)
        {
            printf("1 ");
        }
        else
        {
            printf("2 ");
        }
    }

    return 0;
}
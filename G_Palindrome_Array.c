#include <stdio.h>

int main()
{

    // taking input from user for array size
    int n;
    scanf("%d", &n);
    // array declaration
    long long int arr[n];

    // taking input for array element
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    int flag = 0;
 
    // Loop till array size n/2.
    for (int i = 0; i <= n / 2 && n != 0; i++) {
 
        // Check if first and last element are different
        // Then set flag to 1.
        if (arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;
        }
    }
 
    // If flag is set then print Not Palindrome
    // else print Palindrome.
    if (flag == 0)
        printf("YES");
    else{ 
        printf("NO");
    }
        

    return 0;
}
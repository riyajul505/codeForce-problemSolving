#include <stdio.h>

int main()
{

    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int value;
        scanf("%d", &value);
        if (value == 0)
        {
            printf("0");
        }
        else
        {
            while (value != 0)
            {

                int lastDigit = value % 10;
                value = value / 10;
                printf("%d ", lastDigit);
            }
        }

        printf("\n");
    }

    return 0;
}
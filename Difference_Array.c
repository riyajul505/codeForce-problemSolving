#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    for(int k=1; k<=testCase; k++){

        int size;
        scanf("%d", &size);

        int arr[1000];
        int sorted_array[1000];
        int c_array[1000];
        for(int i=0; i<size; i++){
            scanf("%d", &arr[i]);
        }

        // copying array

        for(int x=0; x<size; x++){
            sorted_array[x] = arr[x];
        }

    //    sorting array
        for(int j=0; j<size-1; j++){
            for(int m=j+1; m<size; m++){
                if(sorted_array[j]>sorted_array[m]){
                    int temp = sorted_array[j];
                    sorted_array[j] = sorted_array[m];
                    sorted_array[m] = temp;
                }
            }
        }

        
        for(int p=0; p<size; p++){
            c_array[p] = abs(arr[p]-sorted_array[p]);
        }

        for(int p=0; p<size; p++){
            printf("%d ", c_array[p]);
        }

        
        printf("\n");
    }
    
    return 0;
}

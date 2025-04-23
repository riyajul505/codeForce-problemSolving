#include<stdio.h>

int main(){

    int n,m;
    scanf("%d %d", &n, &m);
    int arr[n];
   
    // taking input element for array
    for(int k=0; k<n; k++){
        scanf("%d", &arr[k]);
    }
    
    // building frequency array
    int frequencyArray[m];
     // Initialize the frequency array to 0
     for (int i = 0; i < m; i++) {
        frequencyArray[i] = 0;
    }

    // Loop 1-> N
    for(int i=0; i<n; i++){
        // increate the value of the frequencyArray[arr[i]] ie frequency[0]
        frequencyArray[arr[i]-1] += 1;
    }
    
    // printing output
    for(int j=0; j<m; j++){
        printf("%d\n", frequencyArray[j]);
    }
    return 0;
}
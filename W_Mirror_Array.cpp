#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n,m;
    cin>>n; cin>>m;
    int arr[100][100];

    // Taking input to the array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    

//    Mirroring the array

    for(int i=0; i<n; i++){

        int s = 0;
        int e = m-1;

        // Swaping the elements
        while(s<e){
            int temp = arr[i][s];
            arr[i][s] = arr[i][e];
            arr[i][e] = temp;
            s++;
            e--;
        }
    }

    // Printing output
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
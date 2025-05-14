#include <iostream>
using namespace std;

long long int factorial(int n){

    if(n==0){
        return 1;
    }

    // cout<<n<<endl;

    return n*(factorial(n-1));

}

int main() {
   

    int n;
    cin>>n;
    long long int result = factorial(n);
    cout<<result;


   return 0; 
}
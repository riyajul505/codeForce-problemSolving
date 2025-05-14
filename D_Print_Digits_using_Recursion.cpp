#include <iostream>
using namespace std;

void printDigit(long long int n){
    if(n==0){
        return;
    }

    long long int last_digit = n%10;
    printDigit(n/10);
    cout<<last_digit<<" ";
}

int main() {

   int test_case;
   cin>> test_case;

   for(int i=0; i<test_case; i++){

    // taking input
        long long int input;
        cin>> input;

         if (input == 0) {
            cout << "0";
            
        }
        else{
            printDigit(input);
        
        }
    // using recursion
        cout<<endl;

   }
   
    return 0;
}
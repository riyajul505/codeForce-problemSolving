#include <iostream>
#include <map>
#include <string>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <vector>
#include <unordered_map>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {

    int n, k;
    cin>>n>>k;

    vector<long long> arr(1000);

    // inserting elements
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    
    // sort arr in descending
    sort(arr.begin(),arr.end(), greater<long long>());

    long long sum=0;
    // travers till k and non negative
    for(int i=0; i<k; i++){
        if(arr[i]>0){
            sum += arr[i];
        }
        else{
            break;
        }
    }

    cout<<sum<<endl;

   return 0; 
}
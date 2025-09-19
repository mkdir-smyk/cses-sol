#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin>> n;
    vector<long long> arr(n);
    
    for(auto i=0; i<n; ++i){
        cin>> arr[i];
    }

    long long sum=arr[0];
    long long sumSoFar= arr[0];

    for(int i=1; i<n; ++i){

        sumSoFar= max(arr[i], sumSoFar+ arr[i]);
            
        sum= max(sum, sumSoFar);        
    }

    cout<< sum <<endl;
    return 0;
}
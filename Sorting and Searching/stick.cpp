#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int n;
    cin>> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    sort(arr.begin(), arr.end());


    int m= arr[n/2];
    long long k= 0;

    for(int i=0; i<n; i++){
        k+= abs(arr[i]-m);
    }
    cout<< k;

    return 0;
}
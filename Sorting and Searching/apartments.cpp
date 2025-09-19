#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m,k;
    cin>> n >> m >> k;
    vector<int> arr(n);
    vector<int> arr2(m);

    for(int i=0; i<n; ++i){
        cin>> arr[i];
    }

    for(int i=0; i<m; ++i){
        cin>> arr2[i];
    }

    sort(arr.begin(), arr.end());
    sort(arr2.begin(), arr2.end());

    int x=0;
    int y=0;
    int total= 0;

    while(x < n){
        while(y<m && arr2[y]<arr[x]-k){
            y++;
        }   
        if(abs(arr2[y]-arr[x])<=k){    
            x++;
            y++;
            total++;
        }
        else
            x++;

        
    }
    cout<< total;
    return 0;
}
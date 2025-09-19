#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    vector<pair<int,int>> event;

    for (int i=0; i<n; ++i){
        int arr, leave;
        cin>> arr >> leave;

        event.push_back({arr,1});
        event.push_back({leave,-1});
    }

    sort(event.begin(), event.end());

    int temp=0; int maxCust=0;
    for(int i=0; i< event.size(); ++i){
        temp += event[i].second;
        maxCust= max(maxCust, temp);
    }

    cout<< maxCust <<endl;
    return 0;

}
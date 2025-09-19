#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    cin>> n;
    set<int> s;
    int k;

    for(int i=0; i<n; ++i){
        cin>> k;
        s.insert(k);
    }

    cout<< s.size() <<endl;
    return 0;

}
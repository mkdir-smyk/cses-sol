#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    long long totalSum = (long long)n * (n+1)/2;
    long long givenSum=0;

    for (int i=0; i< n-1; i++){
        int x;
        cin>> x;
        givenSum += x;
    }

    cout << totalSum - givenSum << endl;
    return 0;
}
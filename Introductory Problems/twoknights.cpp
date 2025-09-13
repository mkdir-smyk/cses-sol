#include <iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    long long a=0;

    for(int i=1; i<=n; ++i){

        if(i==1){
            cout<< 0 <<endl;
            continue; 
        }
        
        
        long long ans;
        long long k= i*i;
        ans= (((k)*(k-1))/2) - (8*a);
        a+=i-1;
        cout<< ans<< endl;

    }
    return 0;

}
#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>> n;

    if(n==1){
        cout<< 1 << endl;
        return 0;
    }
    else if(n==2 || n==3){
        cout<< "NO SOLUTION"<< endl;
        return 0;
    }

    for(auto i=1; i<n+1; i++){
        if(i%2==0){
            cout<< i << " ";
        }
    }

    for(auto i=1; i<n+1; i++){
        if(i%2!=0){
            cout<< i << " ";
        }
    }

    return 0;

}
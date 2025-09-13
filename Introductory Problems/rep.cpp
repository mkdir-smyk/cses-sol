#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string dna;
    getline(cin, dna);
    int maxSub=1;
    int maxSoFar=1;
    char a= dna[0];

    for(auto i=1; i <dna.length(); i++){        

        if (a== dna[i]){
            maxSub++;
            maxSoFar= max(maxSoFar, maxSub);
        }
        else{

            a= dna[i];
            maxSub= 1;

        }               
    }

    cout<< maxSoFar << endl;
    return 0;

    
}

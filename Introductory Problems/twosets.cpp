#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long total = n * (n + 1) / 2;

    if (total % 2 != 0) {
        cout << "NO" << endl;
    } else {

        cout << "YES" << endl;
        total = total / 2;    

        vector<int> set1, set2;

        for (int i = n; i >= 1; --i) {
            if (total - i >= 0) {
                set1.push_back(i);
                total -= i;
            } else {
                set2.push_back(i);
            }
        }

        cout << set1.size() << endl;
        for (int i = 0; i < set1.size(); ++i) {
            cout << set1[i] << " ";
        }
        cout << endl;

        cout << set2.size() << endl;
        for (int j = 0; j < set2.size(); ++j) {
            cout << set2[j] <<" ";
        }
        cout << endl;
    }

    return 0;
}
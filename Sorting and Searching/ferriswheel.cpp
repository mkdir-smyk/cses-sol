#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    
    int gondolas = 0;
    int left = 0, right = n - 1;
    while (left <= right) {
        if (left == right) {
            gondolas++; 
            break;
        }
        if (arr[left] + arr[right] <= x) {
            gondolas++;
            left++;
            right--;
        } else {
            gondolas++; 
            right--;
        }
    }
    cout << gondolas << endl;
    return 0;
}
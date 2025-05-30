#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

string output(const vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int diff = abs(arr[i] - arr[i+1]);
        if (diff != 5 && diff != 7) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;
        vector<int> input1(n);
        for (int i = 0; i < n; i++) {
            cin >> input1[i];
        }
        cout << output(input1) << endl;
    }

    return 0;
}

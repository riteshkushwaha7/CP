#include <bits/stdc++.h>
using namespace std;

int output(int n) {
    vector<int> C;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int maxIndex = -1;
    int minIndex = -1;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        C.push_back(temp);

        if(temp > maxi) {
            maxi = temp;
            maxIndex = i;
        }
        if(temp < mini) {
            mini = temp;
            minIndex = i;
        }
    }

    swap(C[0], C[maxIndex]);
    swap(C[1], C[minIndex == 0 ? maxIndex : minIndex]);

    maxi = INT_MIN;
    mini = INT_MAX;

    for(int i = 0; i < n; i++) {
        maxi = max(maxi, C[i]);
        mini = min(mini, C[i]);
        sum += (maxi - mini);
    }

    return sum;
}

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << output(n) << endl;
    }

    return 0;
}

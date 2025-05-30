#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

long long calculateWrongBinomialCoefficient(int n, int k) {
    vector<long long> C(k + 1, 0);
    C[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = min(i, k); j > 0; j--) {
            C[j] = (C[j] + C[j - 1]) % MOD;
        }
    }
    return C[k];
}

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        cout << calculateWrongBinomialCoefficient(n, k) << endl;
    }
    
    return 0;
}

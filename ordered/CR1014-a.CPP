#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Custom GCD function (iterative Euclidean algorithm)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int maxPleasure(int n, vector<int>& a) {
    sort(a.begin(), a.end());  // Sorting the beauty levels
    
    int g = 0;
    for (int i = 1; i < n; i++) {
        g = gcd(g, a[i] - a[i - 1]);  // Compute GCD of all adjacent differences
    }
    
    return g;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        cout << maxPleasure(n, a) << "\n";
    }
    
    return 0;
}

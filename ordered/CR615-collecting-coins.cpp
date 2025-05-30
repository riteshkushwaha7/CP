#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        long long maxi = max({a, b, c});
        long long num = (maxi - a) + (maxi - b) + (maxi - c);

        if (num <= n && (n - num) % 3 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

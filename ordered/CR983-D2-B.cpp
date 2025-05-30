#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
int n, k; cin >> n >> k;
        if(n == 1) {
            cout << "1\n1\n";
        } 
        else if(k == 1 || k == n || (k - 1) % 2 != (n - k) % 2) cout << -1 << "\n";
        else {

            int sz = min(k - 1, n - k) * 2 + 1;
            cout << sz << "\n";
            
            for(int i = 1; i <= min(k - 1, n - k); i++) cout << i << " "; 
            cout << k << " ";
            for(int i = 1; i <= min(k - 1, n - k); i++) cout << k + i << " "; cout << "\n";
    }

}
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        set<int> s;
        for(int i = 1; i <= n; i++) s.insert(i);

        for(int i = 0; i < n; i++){
            auto k = s.find(a[i]);
            if(k != s.end()){
                b[i] = a[i];
                s.erase(a[i]);
            } else {
                b[i] = *s.begin();
                s.erase(s.begin());
            }
        }
        for(int i = 0; i < n; i++) cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}

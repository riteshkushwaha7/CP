#include <bits/stdc++.h>
using namespace std;

long long fun() {
    long long n, a, b, c, ans;
    cin >> n >> a >> b >> c;

    long long x = a, y = a + b, z = a + b + c;  
    
    ans = n / z * 3;  
    
    long long rem = n % z;
    
    if (rem > 0) {
        ans += 1; 
        rem -= a;
    }
    if (rem > 0) {
        ans += 1; 
        rem -= b;
    }
    if (rem > 0) {
        ans += 1;
    }

    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << fun() << endl;
    }
    return 0;
}

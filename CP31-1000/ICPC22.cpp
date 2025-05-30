#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        pair<long long, long long> p = {1, n - 1};
        long long mini = lcm(p.first, p.second);

        for (long long d = 1; d * d <= n; d++) {
            if (n % d == 0) {
                long long a1 = d, b1 = n - d;
                if (a1 > 0 && b1 > 0) {
                    long long LCM = lcm(a1, b1);
                    if (LCM < mini) {
                        mini = LCM;
                        p = {a1, b1};
                    }
                }

                long long a2 = n / d, b2 = n - a2;
                if (a2 > 0 && b2 > 0) {
                    long long LCM = lcm(a2, b2);
                    if (LCM < mini) {
                        mini = LCM;
                        p = {a2, b2};
                    }
                }
            }
        }
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}

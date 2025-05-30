#include <bits/stdc++.h>
using namespace std;

int fun(){
    int n, k;
    cin >> n >> k;
    int sum = ((n + k - 1) / k) * k;  
    return (sum + n - 1) / n; 
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cout << fun() << endl;
    }
    return 0;
}

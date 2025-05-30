#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        long long ans = 0;
        ans+=m-c;

        ans+=(2*m-1)*(n-r);
        cout<<ans<<endl;
    }
    
    return 0;
}

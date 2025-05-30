#include<bits/stdc++.h>
using namespace std;
#define int long long

int solve(){
    int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int cnt = INT_MAX;
        int even = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                cnt++;
            if (a[i] % k == 0)
                cnt = 0;
            cnt = min(cnt, (k - a[i] % k));
        }

        if (k == 4)
        {
            if (even >= 2)
                cnt = min(cnt, 0LL);
            else if (even == 1)
                cnt = min(cnt, 1LL);
            else if (even == 0)
                cnt = min(cnt, 2LL);
        }
    return cnt;

}
int32_t main(){
    ios::sync_with_stdio(false);
cin.tie(nullptr);

    int n;
    cin>>n;
    while(n--){
        cout<<solve()<<endl;
    }
}
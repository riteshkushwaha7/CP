#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++) cin>>v[i];
        for(int j = 0; j<n; j++){
            for(int i = 1; i<n-1; i++){
            if(v[i]>v[i-1] && v[i]>v[i+1]) swap(v[i],v[i+1]);
            }
        }
        bool yes = true;
        for(int i = 1; i<n; i++){
            if(v[i]>v[i-1]) continue;
            else yes = false;
        }
        if(!yes) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
    return 0;
}

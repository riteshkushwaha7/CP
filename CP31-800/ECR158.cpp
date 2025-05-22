#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<int> v(n);
        int mini = INT_MIN;
        for(int i = 0; i<n; i++) cin>>v[i];
        int prev = 0;
        for(int i = 0; i<n; i++){
            mini = max(mini, v[i]-prev);
            prev = v[i];
        }
        mini = max(mini, 2*(x-v[n-1]));
        cout<<mini<<endl;
    }
}
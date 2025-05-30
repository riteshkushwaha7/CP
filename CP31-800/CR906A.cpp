#include <bits/stdc++.h>
using namespace std;

bool solve(){
    int n;
    cin >> n;
    unordered_map<int,int> mpp;
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        mpp[temp]++;
    }
    if(mpp.size()>2) return false;
    else{
        if(mpp.size()==1) return true;
        vector<int> v;
        for(auto it: mpp){
            v.push_back(it.second);
        }
        if(n%2==0 && v[0]==v[1]) return true;
        if(n%2 && abs(v[0]-v[1])==1) return true;
        else return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        if(solve()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}

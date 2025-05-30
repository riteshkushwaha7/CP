#include <bits/stdc++.h>
using namespace std;

struct cmp {
    bool operator()(pair<int, int> &a, pair<int, int> &b) {
        if (a.second != b.second)
            return a.second < b.second;  
        return a.first > b.first;        
    }
};
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int,int>> v(n);
        for(int i = 0; i<n; i++){
            int temp; cin>>temp;
            temp = temp%k;
            v[i]={i+1,temp};
        }
        vector<int> ans;
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq(v.begin(), v.end());
        while(!pq.empty()){
            auto it  = pq.top();
            pq.pop();
            if(it.second<=0){ 
                ans.push_back(it.first); 
                continue;
            }
            else {
                it.second-=k;
                pq.push(it);
            }
        }
        for(int i = 0; i<ans.size(); i++) cout<<ans[i]<<" ";
        cout<<endl;

        
    }
    return 0;
}

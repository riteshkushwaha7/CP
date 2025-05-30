#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void fun()
    {
        int n;
        cin >> n;
        if(n<=4){
            cout<<"-1\n";
            return;
        } 
        for(int i = 1; i<=n; i+=2){
            if(i!=5) cout<<i<<" ";
        }
        cout<<5<<" "<<4<<" ";
        for(int i = 2; i<=n; i+=2){
            if(i!=4) cout<<i<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    int t;
    cin >> t;
    Solution sol;

    while (t--)
    {
        sol.fun();
    }

    return 0;
}

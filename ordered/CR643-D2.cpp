#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minmax (int a) {
        int mini = INT_MAX, maxi = INT_MIN;
        while(a){
            mini = min(mini, a%10);
            maxi = max(maxi,a%10);
            a/=10;
        }
        return mini*maxi;
    }
    long long recur(int a, int k){
        if(k==1) {
            return a;
        }
        long long an = recur(a,k-1);
        long long ans = an + minmax(an);
        return ans;
    }
    void fun()
    {
        int a,k;
        cin >> a >> k;

        cout<<recur(a,k);
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

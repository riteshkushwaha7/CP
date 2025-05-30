#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void fun()
    {
        int n;
        cin >> n;
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            mpp[temp]++;
        }
        for (auto i : mpp)
        {
            int key = i.first;
            if ((n - 2) % key != 0)
                continue;
            int target = (n - 2) / key;
            if (key == target)
            {
                if (mpp[key] >= 2)
                { 
                    cout << key << " " << target << endl;
                    return;
                }
            }
            else if (mpp.find(target) != mpp.end())
            {
                cout << key << " " << target << endl;
                return;
            }
        }
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

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int helps(vector<int> temp, int n, int k) {
        int count = 0;
        int storage = 0;
        for(int i = 0; i<n; i++){
            if(temp[i]>=k){
                storage+=temp[i];
            }
            else if(temp[i]==0 && storage){
                storage--;
                count++;
            }
        }
        return count;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    for (int i = 0; i < t; i++) {
        int n,k;
        cin >> n >> k;
        vector<int> temp(n);
        for(int j = 0; j<n; j++){
        cin>>temp[j];
        }
        cout << sol.helps(temp,n,k) << endl;
    }

    return 0;
}

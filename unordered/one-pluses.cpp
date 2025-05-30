#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pluses(int a, int b, int c) {
        int bananas = a*b*c;
        vector<int> vector={a,b,c};
        sort(vector.begin(),vector.end());
        int p= (vector[0]+5)*vector[1]*vector[2];
        int q= (vector[0]+4)*(vector[1]+1)*vector[2];
        int r= (vector[0]+3)*(vector[1]+2)*vector[2];
        int s= (vector[0]+3)*(vector[1]+1)*(vector[2]+1);
        int t= (vector[0]+2)*(vector[1]+2)*(vector[2]+1);
        
        bananas = max({bananas, p, q, r, s, t});

        
        return bananas;

    }
};

int main() {
    int t;
    cin >> t;

    Solution sol;

    for(int i=0;i<t;i++) {
        int a,b,c;
        cin >> a>>b>>c;
        cout << sol.pluses(a,b,c) << endl;
    }

    return 0;
}

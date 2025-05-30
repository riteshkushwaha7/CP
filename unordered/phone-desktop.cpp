#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int screens(int x, int y) {
        int screen = 0;
        int forx = x/7;
        int fory = y/2;
        if(y%2 !=0) fory++;
        if(x%7 !=0 && y%2 == 0) forx++;
        screen += fory;
        if(forx<fory)
        return screen;
        else return screen+(fory-forx);
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    for (int i = 0; i < t; i++) {
        int x,y;
        cin >> x >> y;
        cout << sol.screens(x,y) << endl;
    }

    return 0;
}

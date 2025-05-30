#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int legs(int n) {
        int animal=0;
        if(n%4==0)
        return n/4;
        else{
            n=n-2;
            animal = 1+ n/4;
        }
        
        return animal;

    }
};

int main() {
    int t;
    cin >> t;

    Solution sol;

    for(int i=0;i<t;i++) {
        int n;
        cin >> n;
        cout << sol.legs(n) << endl;
    }

    return 0;
}

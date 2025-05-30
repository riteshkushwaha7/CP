#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string impnumber(int a) {
        if(a<102)
        return "NO";

        string s = to_string(a);
        if (s[0] == '1' && s[1] == '0') {
            s.erase(0, 2);
        } else {
            return "NO";
        }


        int n = s.size();
        int p = stoi(s);
        
        int m = pow(10,n-1);
        if(m==1 && p>=2){
        return "YES";}
        else if (p>=m){
        return "YES";}
        else return "NO";
    }
};

int main() {
    int t;
    cin >> t;

    Solution sol; 

    for (int i = 0; i < t; i++) {
        int a;
        cin >> a;
        string result = sol.impnumber(a); 
        cout << result << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int digits(int n){
        int digit = 0;
        while(n){
            digit+=n%10;
            n/=10;
        }
        if(digit>9) digits(digit);
        return digit;
    }
    void cp() {
        string s;
        cin >> s;
        int sum = 0;

        for(int i = 0; i<s.size(); i++){
            sum+=s[i]-'0';
        }
        if(digits(sum) == 3 || digits(sum) == 6 || digits(sum) == 9){
            cout<<"red";
        }else cout<<"cyan";
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;
    while (t--) {
        sol.cp();
        cout << endl;
    }
    return 0;
}

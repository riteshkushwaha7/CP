#include <bits/stdc++.h>
using namespace std;

string check(int n, int m)
{
    if(n>=m){
        if(n==m || (n%2==0 && m%2 ==0) || (n%2==1 && m%2==1))
        return "YES";

        else return "NO";
    }
    else return "NO";
};

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n>> m;
        string result = check(n,m);
        cout << result << endl;
    }
    return 0;
}
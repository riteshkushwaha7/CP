
#include <bits/stdc++.h>
using namespace std;

int fun(){
    int n;
    cin>>n;
    return --n;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cout << fun() << endl;
    }
    return 0;
}

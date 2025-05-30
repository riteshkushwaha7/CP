#include <bits/stdc++.h>
using namespace std;

long long fun() {
    int n;
    cin>>n;
    long long ans = 2*(pow(2,n)-1);
    return ans;
}

int main() {
    cout<<fun()<<endl;
    return 0;
}

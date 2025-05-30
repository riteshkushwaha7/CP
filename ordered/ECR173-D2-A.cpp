#include <bits/stdc++.h>
using namespace std;
int magic() {
    long long n,ans = 1;
    cin>>n;

    while(n>3){
        n/=4;
        ans*=2;
    }
    
    return ans;
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
    cout << magic() << endl;
    }
    return 0;
}
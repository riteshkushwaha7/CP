#include <iostream>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    ll maxi1=0,maxi2=0,c1=0,c2=0;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        if(a>=maxi1){
            maxi1=a;
            c1=max(c1,b);
        }
        if(b>=maxi2){
            maxi2=b;
            c2=max(c2,a);
        }
    }
    if(c1==maxi2){
        cout<<(maxi1+maxi2)*2<<endl;
        return;
    }
    cout<< 2*(maxi1+maxi2)<<endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
    solve();
    }
    
    return 0;
}

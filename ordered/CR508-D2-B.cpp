#include <bits/stdc++.h>
using namespace std;

void fun(){
    int n;
    cin>>n;
    if(n==1 || n == 2) {
        cout<<"No"<<endl;
        return;
    }
    else if(n%2 == 1 && ((n+1)/2)%2 == 1){
        cout<<"Yes"<<" ";
        cout<<1<<" "<<endl;
        cout<<n-1<<" ";
        for(int i = 2; i<=n; i++) cout<<i<<" ";
        cout<<endl;
        return;
    }else{
    cout<<"Yes"<<endl;
    cout<<((n+1)/2)<<" ";
    for(int i = 1; i<=n; i+=2) cout<<i<<" ";
    cout<<endl;
    cout<<(n/2)<<" ";
    for(int i = 2; i<=n; i+=2) cout<<i<<" ";
    cout<<endl;
    return;
    }

}

int main() {

    fun();
    return 0;
}

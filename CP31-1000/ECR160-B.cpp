#include<iostream>
using namespace std;

int solve(){
    string s;
    cin>>s;
    int zero=0, one=0;
    int n = s.size();
    for(int i = 0; i<n; i++){
        if(s[i]=='0') zero++;
        else one++;
    }
    for(int i = 0; i<n; i++){
        if(s[i]=='0'&& one) one--;
        else if(s[i]=='1' && zero) zero--;
        else return n-(i);
    }
    return 0;

}
int main(){
    int n;
    cin>>n;
    while(n--){
        cout<<solve()<<endl;
    }
}
#include <iostream>
#include <string>
using namespace std;

bool output(string s){
    bool ans = s[0];
    for(int i =1; i<s.size();i++){
        if(i%2==1) ans = ans&s[i];
        else ans = ans|s[i];
    }
    return ans;
}

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n; 
        string s;
        cin >> n >> s;
        cout<<output<<endl;
    }


    return 0;
}

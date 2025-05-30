#include <bits/stdc++.h>
using namespace std;

string fun(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> A(n);
    vector<int> B(m);
    vector<int> K(k);

    for(int i = 0; i<n; i++) cin>>A[i];
    for(int i = 0; i<m; i++) cin>>B[i];
    for(int i = 0; i<k; i++) cin>>K[i];

    vector<vector<int>> M(n,vector<int>(m));
    for(int i = 0; i<n; i++)
    for(int j = 0; j<m; j++)
        M[i][j]=A[i]*B[j];
    
    int sum = 0;

    for(int i = 0; i<n; i++)
    for(int j = 0; j<m; j++)
        sum+=M[i][j];

    for(int i = 0; i<k; i++){
        for(int l = 0; l<n; l++)
        for(int j = 0; j<m; j++){
            if(M[l][j]=sum-K[i]){
                cout<<"YES"<<endl;
                break;
            }
        }
    }
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

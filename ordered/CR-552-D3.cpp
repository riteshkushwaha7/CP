#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void THREENUMBERS() {
        vector<int> arr(4);
        for(int i = 0; i<4; i++){
            int temp;
            cin>>temp;
            arr[i]=temp;
        }
        sort(arr.begin(),arr.end());
        cout<<arr[3]-arr[2]<<" "<<arr[3]-arr[1]<<" "<<arr[3]-arr[0];
    }
};

int main() {
    Solution sol;
    sol.THREENUMBERS(); 
    return 0;
}

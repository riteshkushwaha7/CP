#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    string square(int n, string binary) {
        int c = sqrt(n);
        if (c * c != n)  
            return "NO";


        for (int i = 0; i < c; i++) {
            if (binary[i] != '1' || binary[c * (c - 1) + i] != '1')
                return "NO";
        }

    
        for (int i = 0; i < c; i++) {
            if (binary[i * c] != '1' || binary[i * c + c - 1] != '1')
                return "NO";
        }


        for (int i = 1; i < c - 1; i++) {
            for (int j = 1; j < c - 1; j++) {
                if (binary[i * c + j] != '0')
                    return "NO";
            }
        }

        return "YES";
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string binary;
        cin >> binary;
        cout << sol.square(n, binary) << endl;
    }

    return 0;
}

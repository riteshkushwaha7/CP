#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string chara() {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> freq(26, 0);

        for (char c : s) {
            freq[c - 'a']++;
        }

        int maxFreq = INT_MIN;
        int minFreq = INT_MAX;
        char maxChar = '\0', minChar = '\0';

        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) { 
                if (freq[i] > maxFreq) {
                    maxFreq = freq[i];
                    maxChar = 'a' + i;
                }
                if (freq[i] <= minFreq) { 
                    minFreq = freq[i];
                    minChar = 'a' + i;
                }
            }
        }

        for (char &c : s) {
            if (c == minChar) {
                c = maxChar;
                break; 
            }
        }

        return s;
    }
};

int main() {
    int t;
    cin >> t;
    Solution sol;

    while (t--) {
        cout << sol.chara() << endl;
    }
    return 0;
}

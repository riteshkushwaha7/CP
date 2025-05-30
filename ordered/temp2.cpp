#include <iostream>
#include <string>
using namespace std;

string maximizeString(string s) {
    int n = s.size();
    bool modified;
    
    do {
        modified = false;
        
        for (int i = 1; i < n; i++) {
            if (s[i] - s[i - 1] >= 2) {
                s[i]--;
                swap(s[i], s[i - 1]);
                modified = true;
                i = max(i - 2, 0);
            }
        }
    } while (modified);

    return s;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        cout << maximizeString(s) << endl;
    }

    return 0;
}

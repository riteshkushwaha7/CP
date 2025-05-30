#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int r = red / 2;
        int b = blue / 2;

        int maximum = max(r, b);
        int minimum = min(r, b);

        int diff = maximum - minimum;
        if (diff >= 2) {
            maximum = minimum + 1;
        }
        return maximum + minimum;
    }
};

int main() {
    int t;
    cin >> t;

    Solution solution;
    for (int i = 0; i < t; i++) {
        int red, blue;
        cin >> red >> blue;
        int result = solution.maxHeightOfTriangle(red, blue);
        cout << result << endl;
    }

    return 0;
}

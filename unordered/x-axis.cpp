#include <bits/stdc++.h>
using namespace std;

int finda(int x1, int x2, int x3)
{
    vector<int> v = {x1, x2, x3};
    sort(v.begin(), v.end());
    int a = v[0], b = v[2];
    int min_val = abs(b - x1) + abs(b - x2) + abs(b - x3);

    while (b >= a)
    {
        int cal = abs(b - x1) + abs(b - x2) + abs(b - x3);

        if (min_val > cal)
            min_val = cal;

        b--;
    }

    return min_val;
};

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        int result = finda(x1, x2, x3);
        cout << result << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

void maxindex()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = *max_element(a.begin(), a.end());
    while (m--)
    {
        char c;
        int l, r;
        cin >> c >> l >> r;
        if (c == '+' && mx <= r && mx >= l)
        {
            mx++;
        }
        else if (c == '-' && mx <= r && mx >= l)
        {
            mx--;
        }
        cout << mx << ' ';
    }
    cout << '\n';
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        maxindex();
    }
    return 0;
}
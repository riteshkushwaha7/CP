#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef vector<ll> vll;
#define io                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    io;
    ll tc;
    cin >> tc;
    while (tc--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        int grp = b + 1;
        int q = r / grp;
        int rem = r % grp;
        string s = "";
        for (int i = 0; i < grp; i++)
        {
            s += string(q + (rem > 0), 'R');
            if (rem > 0) rem--;
            if (i < b) s += 'B';
        }
        cout << s << '\n';
    }
    return 0;
}

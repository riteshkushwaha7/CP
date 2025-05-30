#include <bits/stdc++.h>
using namespace std;

string istie(int x1, int y1, int x2, int y2)
{
    if(x1-y2 == x2-y1){
    return "NO";
    } else {
        return "YES";
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int x1, y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        string result = istie(x1, y1, x2, y2);
        cout << result << endl;
    }
    return 0;
}
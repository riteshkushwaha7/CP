#include <bits/stdc++.h>
using namespace std;

void timetoblend()
{
    long long n, x, y;
    cin >> n >> x >> y;
    long long time = 0;
    long long c = 0;  
    
    while (n > 0) {
        c+= min(n, y);  
        
        long long blend = min(c, x); 
        c -= blend; 
        n -= blend; 
        time++;  
    }
    
    cout << time << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        timetoblend();
    }
    return 0;
}

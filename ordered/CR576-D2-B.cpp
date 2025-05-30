#include <bits/stdc++.h>
using namespace std;

#define M_PI_2 1.5707963267948966  

class Solution
{
public:
    double cp() {
        int h, l;
        cin >> h >> l;
        double tanratio = h / (double)l;  
        double alpha = atan(tanratio);
        double beta = M_PI_2 - alpha;  
        double gamma = beta - alpha;
        double len = tan(gamma) * l;
        return len;
    }
};

int main() {
    Solution sol;      
    cout << fixed << setprecision(6) << sol.cp() << endl;  
    return 0;
}

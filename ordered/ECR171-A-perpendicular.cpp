#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int X, Y, K;
        cin >> X >> Y >> K;

        // Horizontal segment: ensure length >= K and within bounds 0 <= Bx <= X
        int Ax = 0, Ay = 0, Bx = min(K, X), By = 0;

        // Vertical segment: ensure length >= K and within bounds 0 <= Dy <= Y
        int Cx = 0, Cy = 0, Dx = 0, Dy = min(K, Y);

        // Output the first segment (horizontal)
        cout << Ax << " " << Ay << " " << Bx << " " << By << endl;
        // Output the second segment (vertical)
        cout << Cx << " " << Cy << " " << Dx << " " << Dy << endl;
    }

    return 0;
}

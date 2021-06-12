#include <iostream>
#include <cmath>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, y, p;
    cin >> n >> y >> p;
    y *= 12;
    int s = 0;
    while (y--)
    {
        int m = n / 100 * p;
        cout << m << "\n";
        s += m;
    }
    cout << s;
}
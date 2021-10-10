#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.141592653589793

const int MAX = 1e5 + 5;

int main()
{
    freopen("GEOMETRY.inp","r",stdin);
    freopen("GEOMETRY.out","w",stdout);
    int t;
    cin >> t;

    while (t --) {
        double r1, r2;
        cin >> r1 >> r2;

        double a = atan(r1 / (r1 + r2));
        double ans = 0.5 * ((r1 + r2) * r1 - (r2 * r2 * a + r1 * r1 * (0.5 * PI - 2 * a) + (2 * r1 * r1 * r1 * (r1 + r2)) / (r1 * r1 + (r1 + r2) * (r1 + r2))));

        cout.precision(4);
        cout << fixed << ans << "\n";
    }
}

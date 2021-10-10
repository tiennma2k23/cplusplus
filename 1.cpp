#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define lpn lastPosOfN
#define pgnsn posOfGreatestNumberSmallerthanN
#define ll long long
#define vi vector<int>
#define vll vector<ll>

ll a[5005];
int f[5005], lpn[5005];

int pGnsN(ll x, int l, int r)
{
    int mid = 0;
    int res;

    while (l <= r) {
        mid = (l + r) / 2;
        if (a[mid] < x) {
            res = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("triangle.inp", "r", stdin);
    //freopen("triangle.out", "w", stdout);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i ++)
        cin >> a[i];

    sort(a + 1, a + n + 1);

    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i ++) {
        if (a[i] != a[i - 1]) {
            f[i] = f[i - 1] + 1;
        }
        else {
            f[i] = f[i - 1];
        }
    }

    lpn[n] = n;
    for (int i = n - 1; i > 0; i --) {
        if (a[i] != a[i + 1]) {
            lpn[i] = i;
        }
        else {
            lpn[i] = lpn[i + 1];
        }
    }

    for (int i = 1; i <= n; i ++)
        cout << a[i] << " " << f[i] << " " << lpn[i] << "\n";

    int l = 1, shift;
    ll ans = 0;

    while (l + 1 < n) {
        shift = 0;

        int r = l + 1;
        while (r < n) {
            if (shift == 0) {
                shift = pGnsN(a[l] + a[r], r + 1, n);
            }
            else {
                shift = pGnsN(a[l] + a[r], shift, n);
            }

            if (shift > 0) {
                ans += 1ll * (f[shift] - f[r]);
                if (a[r] == a[r + 1])
                    ans ++;
            }

            r = lpn[r] + 1;
        }

        l = lpn[l] + 1;
        //cout << ans << " ";
    }

    cout << ans;
}

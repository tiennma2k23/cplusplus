#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define FOR(i,a,b) for (int i = a; i <= b; ++i)
#define FORd(i,a,b) for (int i = a; i >= b; --i)
#define ii pair <int,int>
#define pii pair <ll,ll>
#define f first
#define s second
#define FastIO ios_base::sync_with_stdio(0); cin.tie(nullptr);

const int N = 4e5;
const int MOD = 1e9 + 7;
const int maxn = 1e6;

ll arr[N + 5], arr1[N + 5],pre[N + 5], a[N + 5];

int main()
{



    FastIO
    int t;
    cin >> t;
    //while (t--) {
    {

        int n,q;
        cin >> n >> q;
        FOR(i,1,n)
        {
            cin >> a[i];
            if (i & 1) arr[i] = arr[i - 1] + a[i];
            else arr[i] = arr[i - 1] - a[i];

            if (i & 1) arr1[i] = arr1[i - 1] - a[i];
            else arr1[i] = arr1[i - 1] + a[i];

            pre[i] = pre[i - 1] + a[i];
        }
        FOR(i,1,q)
        {
            int L,R; ll x;
            cin >> x >> L >> R;
            if (x < 0) x = abs(x - a[L]), L++;
            int l = L, r = R, pos = L - 1;
            while (l <= r) {
                int mid = (l + r) >> 1;
                if (x >= pre[mid] - pre[L - 1]) {
                    pos = mid;
                    l = mid + 1;
                }
                else r = mid - 1;
            }
            ll so = x - (pre[pos] - pre[L - 1]), ans = 0;
            //cout << so << ' ' << arr[R] - arr[pos] << ' ' << pos << '\n';
            if ((R - pos) % 2 != 0) so *= -1;
            if (R & 1) ans = arr[R] - arr[pos] + so;
            else ans = arr1[R] - arr1[pos] + so;
            cout << abs(ans) << '\n';
        }
    }
}

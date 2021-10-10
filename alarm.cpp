#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x, t, h, m, ans = 0;
ll ck = 0;
int main()
{
    freopen("alarm.inp","r",stdin);
    freopen("alarm.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin >> x;
    cin >> h >> m;
    while (!ck)
    {
        if (h / 10 == 7 || h % 10 == 7 || m % 10 == 7 || m % 10 == 7) ck = 1;
        else
        {
            if (m >= x)
            {
                m -= x;
            }
            else
            {
                if (h == 00) h = 24;
                h--;
                m = 60 - (x - m);

            }
            ans++;
        }
    }
    cout << ans << endl;
}

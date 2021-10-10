#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+1;
int a[100],p[maxn];
int32_t main()
{
    p[0] = 1;
    for (int i = 1; i <= 14; i++) p[i] = p[i - 1] * 2;
    int q;
    cin >> q;
    while (q--)
    {
        int n, m;
        cin >> n >> m;
        memset(a,0,sizeof(a));
        for (int i = 1; i <= n; i++)
        {

            int k;
            cin >> k;
            for (int j = 1; j <= k; j++)
            {
                int x;
                cin >> x;
                a[i] += p[x - 1];
            }
        }
        int ans = 0;
        for (int mask = 1; mask < (1 << m); mask++)
        {
            bool kt[m+1];
            for (int i=0; i<m; i++) kt[i]=0;
            for (int i = 0; i < m; i++) if (!(mask & (1 << i))) kt[i] = 1;
            int cur = 0;
            for (int i = 1; i <= n; i++)
            {
                int ok = 1;
                for (int j = 0; j < m; j++)
                    if ((a[i] & (1 << j)) && kt[j] == 1)
                    {
                        ok = 0;
                        break;
                    }
                if (ok) cur |= a[i];
            }
            if (cur == mask) ans++;
        }
        cout<<ans<<endl;
    }
}

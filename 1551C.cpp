#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> v[10];

bool cmp (long long x, long long y)
{
    return x > y;
}

void solve()
{
    int n;
    cin >> n;
    for (int i=0; i<=4; i++) v[i].clear();
    for (int i=1; i<=n; i++)
    {
        string s;
        cin >> s;
        int cnt[5];
        for (int i=0; i<=4; i++) cnt[i]=0;
        for (int j=0; j<s.length(); j++) cnt[s[j] - 'a']++;
        int tmp = cnt[0] + cnt[1] + cnt[2] + cnt[3] + cnt[4];
        for (int i=0; i<=4; i++) v[i].push_back(2 * cnt[i] - tmp);
    }
    for (int i=0; i<=4; i++) sort(v[i].begin(), v[i].end(), cmp);
    int ans = 0;
    for (int i=0; i<=4; i++)
    {
        int p = 0;
        int vt = -1;
        bool kt = true;
        if (v[i][0] < 0) continue;
        while (true)
        {
            p += v[i][++vt];
            if (p <= 0) break;
            ans = max(ans, vt + 1);
            if (vt == v[i].size() - 1) break;
        }
    }
    cout << ans <<endl;
}

int32_t main()
{
    int q;
    cin >> q;
    while (q--)
    {
        solve();
    }
}

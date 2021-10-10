
#include<bits/stdc++.h>
#define left _left
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int maxn=2e5+1;
int b[maxn],ST[4*maxn],left[maxn];
II a[maxn];
void update0(int id, int l, int r, int k, int val)
{
    if (l > r) return ;
    if (l > k || r < k) return ;
    if (l == r)
    {
        ST[id] = 0;
        return ;
    }
    int mid = (l + r) / 2;
    update0(id * 2, l, mid, k, val);
    update0(id * 2 + 1, mid + 1, r, k, val);
    ST[id] = ST[id * 2] + ST[id * 2 + 1];
}


void add(int id, int l, int r, int k, int val)
{
    if (l > r) return ;
    if (l > k || r < k) return ;
    if (l == r)
    {
        ST[id] += val;
        return ;
    }
    int mid = (l + r) / 2;
    add(id * 2, l, mid, k, val);
    add(id * 2 + 1, mid + 1, r, k, val);
    ST[id] = ST[id * 2] + ST[id * 2 + 1];
}

int get(int id, int l, int r, int u, int v)
{
    if (u > v) return 0;
    if (l > v || r < u) return 0;
    if (l >= u && r <= v) return ST[id];
    int mid = (l + r) / 2;
    return get(id * 2, l, mid, u, v) + get(id * 2 + 1, mid + 1, r, u, v);
}

void solve()
{
    int n;
    cin>>n;
    for (int i=1; i<=4*n; i++) ST[i]=0;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i].fi;
        a[i].se=i;
    }
    sort(a+1,a+1+n);
    b[a[1].se] = 1;
    int tmp = 1;
    for (int i=2; i<=n; i++)
    {
        if (a[i].fi != a[i - 1].fi) tmp++;
        b[a[i].se] = tmp;
    }
    for (int i=1; i<=n; i++) left[i] = i;
    int ans = 1;
    int pos = 1;
    for (int i=2; i<=n; i++)
    {
        if (i == 2)
        {
            ans += 2;
            left[2] = 1;
            continue;
        }
        bool ck=true;
        pos = i - 2;
        add(1, 1, n, b[i - 1], 1);
        while (ck)
        {
            if (pos < left[i - 1]) break;
            int u = b[pos], v = b[i];
            if (u > v) swap(u,v);
            int tmp = get(1, 1, n, u, v);
            if (tmp > 0) ck = false;
            else
            {
                add(1, 1, n, b[pos], 1);
                pos--;
            }
        }
        left[i] = pos + 1;
        ans += i - pos;
        for (int j=pos; j<i; j++) update0(1, 1, n, b[j], 0);
    }
    cout<<ans<<endl;
}

int32_t main()
{
    freopen("abc.inp","r",stdin);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}

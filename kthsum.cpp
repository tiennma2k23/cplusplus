#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define se second
#define fi first
using namespace std;
const int maxn=2e5+1,inf=1e15;

int n ;
int k ;
int a[maxn], f[maxn] ;

void update (int i)
{
    while (i<=n+1)
    {
        f[i]++;
        i+=i & -i;
    }
}
int get (int i)
{
    int res = 0 ;
    while (i>0)
    {
        res+=f[i];
        i-= i & -i;
    }
    return res ;
}

bool ok(int mid)
{
    int cur = 0 ;
    vector<II> v ;
    for (int i = 1 ; i <= n ; i++)
    {
        v.push_back({a[i], (i + 1)}) ;
        v.push_back({a[i] - mid, -(i + 1)}) ;
    }
    v.push_back({0, 1}) ;
    sort(v.begin(), v.end()) ;
    for (int i = 0 ; i <= n + 1 ; i++) f[i] = 0 ;
    for (int i = n * 2 ; i >= 0 ; i--)
    {
        if (v[i].se > 0)
        {
            update(v[i].se) ;
        }
        else
        {
            cur += get((-v[i].se) - 1) ;
        }
    }
    return (cur>=k);
}

int32_t main()
{
    cin >> n >> k ;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i] ;
        a[i] += a[i - 1] ;
    }
    int l = -inf, r = inf ;
    k = (n * (n + 1) / 2) - k + 1 ;
    int ans = r ;
    while (l <= r)
    {
        int mid = (l + r) / 2 ;
        if (ok(mid))
        {
            ans = min(ans, mid) ;
            r = mid - 1 ;
        }
        else l = mid + 1 ;
    }
    cout << ans <<endl;
}

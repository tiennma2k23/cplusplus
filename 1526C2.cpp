
#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
#define lz lazy
using namespace std ;
const int maxn=2e5+1,inf=1e9+7;
int n, m  ;
int a[maxn] ;
vector< II > v ;

bool cmp(II a,II b)
{
    return (a.fi > b.fi || a.fi == b.fi && (a.se > b.se)) ;
}

struct Nodes
{
    int l, r ;
    int lz, minn ;

    Nodes ()
    {
        l = r = 0 ;
        lz = minn = 0 ;
    }
};

Nodes ST[maxn << 2] ;


void down (int id)
{
    if (ST[id].lz == 0 || ST[id].l == ST[id].r) return ;
    ST[id << 1].minn += ST[id].lz ;
    ST[id << 1].lz += ST[id].lz ;
    ST[id << 1 | 1].minn += ST[id].lz ;
    ST[id << 1 | 1].lz += ST[id].lz ;
    ST[id].lz = 0 ;
}

void update (int id, int u, int v, int val)
{
    if (ST[id].r < u || v < ST[id].l) return ;
    if (u <= ST[id].l && ST[id].r <= v)
    {
        ST[id].minn += val ;
        ST[id].lz += val ;
        return ;
    }
    down(id) ;
    update(id*2, u, v, val) ;
    update(id*2+1, u, v, val) ;
    ST[id].minn = min(ST[id*2].minn, ST[id*2+1].minn) ;
}
void build (int id, int l, int r)
{
    ST[id].l = l ;
    ST[id].r = r ;
    if (l == r)
    {
        ST[id].minn = a[l] ;
        return ;
    }
    int mid = (l + r) >> 1 ;
    build(id*2, l, mid) ;
    build(id*2+1, mid + 1, r) ;
    ST[id].minn = min(ST[id*2].minn, ST[id*2+1].minn) ;
}
int get (int id, int u, int v)
{
    if (ST[id].r < u || v < ST[id].l) return inf ;
    if (u <= ST[id].l && ST[id].r <= v) return ST[id].minn ;
    down(id) ;
    return min(get(id*2, u, v), get(id*2+1, u, v)) ;
}

int32_t main()
{
    cin >> n ;
    int ans = 0 ;
    for (int i = 1  ; i <= n ; i++)
    {
        int x;
        cin >> x ;
        a[i] = a[i - 1] ;
        if (x < 0) v.push_back({x, i}) ;
        else
        {
            a[i] += x ;
            ans ++ ;
        }
    }
    //update(1,i,i,a[i]);

    build(1,1,n);
    if (v.empty())
    {
        cout << ans ;
        return 0 ;
    }
    sort(v.begin(), v.end(), cmp);
    for (auto it : v)
    {
        update(1, it.se, n, it.fi) ;
        int _min = get(1, 1, n) ;
        if (_min >= 0) ans ++ ;
        else update(1, it.se, n, -it.fi) ;
    }
    cout << ans <<endl ;
}

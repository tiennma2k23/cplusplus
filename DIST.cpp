#include<bits/stdc++.h>
#define ll long long
#define TASK "ABC"
#define II pair<ll,ll>
#define x first
#define y second
using namespace std;
const ll N=1e5;
ll n,k;
II a[N+1];
ll ST[4*N+1];
void Reset(ll id, ll l, ll r)
{
    ST[id]=0;
    if (l==r) return;
    ll mid=(l+r)/2;
    Reset(id*2,l,mid);
    Reset(id*2+1,mid+1,r);
}

void update(ll id,ll l,ll r, ll i)
{
    if (r<i||i<l) return;
    if (l==i&&i==r) {
            ST[id]++;
            return;
    }
    ll mid=(l+r)/2;
    update(id*2,l,mid,i);
    update(id*2+1,mid+1,r,i);
    ST[id]=ST[id*2]+ST[id*2+1];
}

ll get(ll id, ll l, ll r,ll u, ll v)
{
    if (r<u||v<l) return 0;
    if (u<=l&&r<=v) return ST[id];
    ll mid=(l+r)/2;
    return get(id*2,l,mid,u,v)+get(id*2+1,mid+1,r,u,v);
}

ll cnt(ll D)
{
    ll d=1,res=0;
    for (ll c=1;c<=n;c++)
    {
        while (a[c].x-a[d].x>D)
        {
            update(1,1,N,a[d].y);
            d++;
        }
        if (a[c].x-a[d].x<=D) res+=(c-d)+get(1,1,N,a[c].y-D,a[c].y+D);
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(TASK ".inp","r",stdin);
    freopen(TASK ".out","w",stdout);
    cin>>n>>k;
    for (ll i=1;i<=n;i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    sort(a+1,a+1+n);
    ll l=0;
    ll r=N;
    while (l<=r)
    {
        Reset(1,1,N);
        ll mid=(l+r)/2;
        if (cnt(mid)>=k)r=mid-1;
        else l=mid+1;
    }
    cout<<l<<endl;
}

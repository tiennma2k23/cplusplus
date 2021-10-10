#include<bits/stdc++.h>
#define ll long long

using namespace std;

const ll maxn=1e5+1;

ll a[maxn];

void solve()
{
    ll n;
    ll ans=0,ddm;
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    ll i=2;
    while (i<=n)
    {
        ll dd=2;
        ll tmp=__gcd(a[i],a[i-1]);
        ll vt=0;
        ll l=i-2;
        ll r=i+1;
        bool ck=false;
        ll maxc=0;
        while (l>=1&&a[l]%tmp==0)
        {
            l--;
            dd++;
        }
        while (r<=n&&a[r]%tmp==0)
        {
            if (maxc<=__gcd(a[r],a[r-1])) maxc=__gcd(a[r],a[r-1]),vt=r;
            r++;
            dd++;
        }
        if (ans<tmp) ans=tmp,ddm=dd;
        else if (ans==tmp) ddm=max(ddm,dd);
        if (vt>0) i=vt;
        else i=r;
    }
    cout<<ans<<" "<<ddm<<endl;
}

int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}

#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define fi first
#define se second
using namespace std;
II a[60];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,p1,dm=0,k1=LLONG_MAX;
        memset(a,0,sizeof(a));
        cin >> n;
        p1=n;
        for (ll i=2; i<=sqrt(p1); ++i)
            if (p1%i==0)
            {
                ll ct=0;
                while (p1%i==0) ct++,p1/=i;
                dm++;
                a[dm]=II(i,ct);
            }
        if (p1!=1) dm++,a[dm]=II(p1,1ll);
        ll lmx=0,vt;
        for (ll i=1; i<=dm; i++) if (lmx<a[i].se) lmx=a[i].se,vt=i;
        cout << lmx << endl;
        ll so=powl(a[vt].fi,lmx-1);
        ll _tich=n/so;
        for (ll i=1; i<lmx; i++) cout << a[vt].fi << " ";
        if (_tich!=1) cout<<_tich<<endl;
    }
}

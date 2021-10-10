#include<bits/stdc++.h>
#define ll long long

using namespace std;
const ll maxn=1000;
ll r[maxn],b[maxn];

int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,m;
        ll ans,tmp=0,tmp2=0;
        cin>>n;
        for (ll i=1;i<=n;i++) {
                cin>>r[i];
                r[i]+=r[i-1];
                tmp=max(tmp,r[i]);
        }
        cin>>m;
        for (ll i=1;i<=m;i++)
        {
            cin>>b[i];
            b[i]+=b[i-1];
            tmp2=max(tmp2,b[i]);
        }
        ans=tmp+tmp2;
        cout<<ans<<endl;

    }
}

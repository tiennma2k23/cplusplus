#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+1;
ll a[maxn];
int main()
{
    ll q;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>q;
    while (q--)
    {
        ll n,x;
        cin>>n>>x;
        for (ll i=1;i<=n;i++) cin>>a[i];
        bool ck=true;
        ll ans=0;
        a[0]=-1;
        for (ll i=1;i<=n;i++)
        {
            if (a[i]>x) swap(a[i],x),ans++;
            if (a[i]<a[i-1])
            {
                ck=false;
                break;
            }
        }
        if (ck) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
}

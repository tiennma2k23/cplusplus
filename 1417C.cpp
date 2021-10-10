#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=3e5+1;
ll f[maxn],r[maxn],a[maxn],res[maxn];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--){
        ll n;
        cin>>n;
        for (ll i=1;i<=n;i++)
            {
                cin>>a[i];
                res[i]=-1;
                f[i]=r[i]=0;
            }
        for (ll i=1;i<=n;i++)
            {
                f[a[i]]=max(f[a[i]],i-r[a[i]]);
                r[a[i]]=i;
            }
        for (ll i=1;i<=n;i++)
            {
                f[i]=max(f[i],n-r[i]+1);
                for (ll j=f[i];j<=n&&res[j]==-1;j++) res[j]=i;
            }
        for (ll i=1;i<=n;i++) cout<<res[i]<<" ";
        cout<<endl;
    }
}

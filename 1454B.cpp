#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+5;
ll a[maxn];
ll ans[1000001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        ll n;
        cin>>n;
        for (ll i=1;i<=n;i++) cin>>a[i],ans[a[i]]=i;;
        sort(a+1,a+1+n);
        a[0]=LLONG_MAX;
        a[n+1]=LLONG_MAX;
        bool ck=false;
        for (ll i=1;i<=n;i++)
        {
            if (a[i]!=a[i-1]&&a[i]!=a[i+1])
            {
                cout<<ans[a[i]]<<endl;
                ck=true;
                break;
            }
        }
        if (!ck) cout<<-1<<endl;
    }

}

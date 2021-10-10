#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+5;
ll a[maxn];
bool ck[2*maxn+1];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,dem=0;
        cin>>n;
        for (ll i=1;i<=n;i++)
        {
            cin>>a[i];
            ll x=a[i];
            if (!ck[x]) ck[x]=true,dem++;
            else if (!ck[x+1]) ck[x+1]=true,dem++;
        }
        cout<<dem<<endl;
        for (ll i=1;i<=n;i++) ck[a[i]]=false,ck[a[i]+1]=false;
    }
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1;
ll a[maxn],dem;
map<ll,ll> vt1;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,i,l,r;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    l=1;r=1;
    while (r<=n)
    {
        if (vt1[a[r]]<l) vt1[a[r]]=r;
        else
        {
            dem++;
            vt1[a[r]]=r;
            l=r+1;
        }
        r++;
    }
    if (dem!=0) cout<<dem<<endl;
    else cout<<-1<<endl;
}

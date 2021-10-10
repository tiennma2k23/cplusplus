#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+1,k=log2(maxn);

ll st[maxn][k+1],n,a[maxn];

void sparse()
{
    for (ll i=0;i<n;i++)  st[i][0]=a[i];
    for (ll j=1;j<=k;j++)
        for (ll i=0;i+(1<<(j))<=n;i++) st[i][j]=st[i][j-1]^st[i+(1<<(j-1))][j-1];
}

ll solve(ll l, ll r)
{
    ll ans=st[l][0];
    l++;
    ll tmp;
    while (l<=r)
    {
        for (ll j=k;j>=0;j--)
        {
            if ((1<<j)<=r-l+1)
            {
                ans^=st[l][j];
                tmp=j;
                break;
            }
        }
        l+=1<<tmp;
    }
    return ans;
}

int main()
{
    freopen("sumxor.inp","r",stdin);
    freopen("sumxor.out","w",stdout);
    cin>>n;
    for (ll i=0;i<n;i++) cin>>a[i];
    sparse();
    //cout<<st[0][1]<<endl;
   // ll k=7,k1=5;
    //ll tmp=k^k1;
    //cout<<tmp<<endl;
    ll m;
    cin>>m;
    while (m--)
    {
        ll l,r;
        cin>>l>>r;
        ll ans=solve(l-1,r-1);
        cout<<ans<<endl;
    }
}

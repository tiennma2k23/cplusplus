#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1001;
ll a[maxn][maxn];
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll m,n,ans=0;
    cin>>m>>n;
    char ch;
    for (ll i=1;i<=m;i++)
        for (ll j=1;j<=n;j++) cin>>ch,a[i][j]=ch-'0';
    for (ll i=1;i<=m;i++)
        for (ll j=1;j<=n;j++) if (a[i][j]==1)
    {
        ll l1=i,l2=j;
        ll tmp=0;
        for (ll j1=j;j1>=1;j1--)
        {
            if (a[i][j1]==1) tmp++;
            else break;
        }
        //cerr<<i<<j<<tmp<<endl;
        while (l1<=m&&l2>=1)
        {
            l1++,l2--;
            if (a[l1][l2]==1)
            {
                    ll tmp1=0;
                    for (ll j1=l2;j1<=n;j1++)
                    {
                        if (a[l1][j1]==1) tmp1++;
                        else
                        {
                            //ans+=max(min(tmp,tmp1)-1,0ll);
                            //cerr<<i<<j<<l1<<l2<<tmp<<tmp1<<endl;
                            //cerr<<ans<<endl;
                            break;
                        }
                    }
                    ans+=max(min(tmp,tmp1)-1,0ll);
            }
            else break;
        }
    }
    cout<<ans<<endl;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
char ch[510][510];
ll d[510][510];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        ll n,m;
        cin>>n>>m;
        for (ll i=1;i<=n;i++)
            for (ll j=1;j<=m;j++) cin>>ch[i][j],d[i][j]=0;
        for (ll i=1;i<=n;i++)
        {
            for (ll j=1;j<=m;j++) d[i][j]=d[i][j-1]+(ch[i][j]=='*');
        }
        ll ans=0;
        for (ll i=1;i<=n;i++)
        {
            for (ll j=1;j<=m;j++)
            {
                if (ch[i][j]=='*')
                {
                    ans++;
                    ll gh=i+1;
                    while (gh<=n)
                    {
                        ll tmp=gh-i;
                        if (d[gh][j+tmp]-d[gh][j-tmp-1]==2*tmp+1&&j-tmp>=1&&j+tmp<=m) gh++;
                        else break;
                    }
                    gh--;
                    ans+=gh-i;
                }
            }
        }
        cout<<ans<<endl;
    }
}

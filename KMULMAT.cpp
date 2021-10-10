#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[101][101];
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
        //ll a[n+1][n+1],b[n+1][n+1];
        for(ll i=1; i<=n; i++)
            for (ll j=1; j<=n; j++) cin>>a[i][j];
        ll k=-1;
        bool ck=true;
        for (ll i=1;i<=n;i++)
            for (ll j=1;j<=n;j++)
        {
ll b;
            cin>>b;
            if (b==0)
            {
                if (a[i][j]!=0) ck=false;
                if (a[i][j]==0) k=k;
            }
            else if (a[i][j]%b==0)
            {
                if (k==-1) k=a[i][j]/b;
                else if (a[i][j]/b!=k)
                {
                    ck=false;
                }
            }
            else ck=false;
        }
        if (ck) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}

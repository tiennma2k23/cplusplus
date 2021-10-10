#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
int a[110][110];
void solve()
{
    int n;cin>>n;
    for (int i=0;i<=n;i++)
        for (int j=0;j<=n;j++) a[i][j]=-1;

    int le=1,chan=2;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
    {
        if (le<=n*n)
        {
            a[i][j]=le;
            le+=2;
        }
        else
        {
            a[i][j]=chan;
            chan+=2;
        }
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (abs(a[i][j]-a[i][j-1])==1||abs(a[i][j]-a[i-1][j])==1)
            {
                cout<<-1<<endl;
                return;
            }
        }
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}

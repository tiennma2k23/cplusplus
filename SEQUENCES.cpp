
#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define se second
#define fi first
using namespace std;
const int maxn=1e6+1;
int a[maxn],b[maxn];
int t[maxn];
void solve()
{
    int n,ans=0,k;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[i]=x;
        b[i]=i;
    }
    qsort();
    int tmp=0;
    for (int i=2;i<=n;i++)
    {
        if (a[i]==a[i-1])
        {
            tmp+=b[i-1];
            ans+=(tmp*(n-b[i]+1));
        }
        else tmp=0;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}


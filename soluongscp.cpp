
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e5;
int d[maxn+5];
int32_t main()
{
    int n,ans=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        ans+=d[a];
        for (int j=2;j*j<=a;j++)
        {
            int tmp=j*j;
            if (a%tmp==0) ans+=d[a/tmp];
        }
        for (int j=2;j*j<=maxn;j++)
        {
            int tmp=j*j;
            if (a*tmp>maxn) break;
            ans+=d[a*tmp];
        }
        d[a]++;
    }
    cout<<ans<<endl;
}

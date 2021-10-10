#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e4+1;
int a[maxn];
int32_t main()
{
    freopen("ssub.inp","r",stdin);
    freopen("ssub.out","w",stdout);
    int n;
    int ans=0;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++)
    {
        int len=2;
        int pos=i;
        for (int j=i+2;j<=n;j++)
        {
             int tmp1=a[j]-a[pos+1];
             int tmp2=(a[pos+1]-a[pos]);
             if ((tmp1>0&&tmp2<0)||(tmp2>0&&tmp1<0)) len++,pos++;
             else break;
        }
        ans=max(ans,len);
    }
    if (ans<=2) cout<<0<<endl;
    else cout<<ans<<endl;
}

#include<bits/stdc++.h>
using namespace std;
const long long maxn=2500,maxx=1e6;
long long f[maxn+1][maxn+1],a[maxn+10],vt[4*maxx + 1];
int main()
{
    	ios::sync_with_stdio(false);
    	cin.tie(0);
    	cout.tie(0);
    long long i,q,n,j,tmp,pos,ans=-1;
    cin>>q;
    while (q--)
    {
        ans=-1;
        cin>>n;
        for (i=1;i<=n;i++) cin>>a[i];
        for (i=1;i<n;i++)
        {
            for (j=i+1;j<=n;j++)
            {
                tmp=a[j]-a[i]+2*maxx;
                pos=vt[tmp];
                if (pos!=0) f[i][j]=f[pos][i]+1;
                else f[i][j]=2;
                ans=max(ans,f[i][j]);
            }
            vt[a[i]+2*maxx]=i;
        }
        for (i=1;i<=n;i++) vt[a[i]+2*maxx]=0;
        cout<<ans<<endl;
    }
}

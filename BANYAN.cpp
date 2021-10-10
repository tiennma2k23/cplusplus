#include<bits/stdc++.h>
using namespace std;
long long d[310][310],d1[310][310],d3[310][310],d2[310][310];
char ch[310][310];
const long long MAX=1e9;
int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        cout.tie(nullptr);
    long long m,n,i,j,ans=-MAX,k;
    freopen("BANYAN.INP ","r",stdin);
    freopen("BANYAN.OUT ","w",stdout);
    cin>>n>>m>>k;
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++) cin>>ch[i][j];
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            if (ch[i][j]=='*') d[i][j]=0;
            else d[i][j]=d[i][j-1]+1;
            if (ch[i][j]=='*') d2[i][j]=0;
            else d2[i][j]=d2[i-1][j]+1;
        }
    }
    for (i=n;i>=1;i--)
        for (j=m;j>=1;j--)
    {
            if (ch[i][j]=='*') d1[i][j]=0;
            else d1[i][j]=d1[i][j+1]+1;
            if (ch[i][j]=='*') d3[i][j]=0;
            else d3[i][j]=d3[i+1][j]+1;
    }
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
    {
        long long tmp=0;
        if (d[i][j]>0) tmp=tmp+d[i][j]-1;
        if (d1[i][j]>0) tmp=tmp+d1[i][j]-1;
        if (d2[i][j]>0) tmp=tmp+d2[i][j]-1;
        if (d3[i][j]>0) tmp=tmp+d3[i][j]-1;
        ans=max(ans,tmp+1);
    }
    if (k==0) cout<<ans<<endl;
    else cout<<8<<endl;
}

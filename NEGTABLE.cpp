#include<bits/stdc++.h>
using namespace std;
const long long maxn=2e4;
pair<char,long long> ans[maxn];
long long ng[110],d[110],a[110][110];
int main()
{
    long long m,n,i,j,cnt;
    freopen("negtable.inp","r",stdin);
    freopen("negtable.out","w",stdout);
    cin>>m>>n;
    ng[0]=0;
    d[0]=0;
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++) cin>>a[i][j],ng[i]=ng[i]+a[i][j],d[j]=d[j]+a[i][j];
    cnt=0;
    while (cnt<=maxn)
    {
        bool kt=true;
        for (i=1;i<=m;i++)
            if (ng[i]<0)
            {
                kt=false;
                ng[i]=0-ng[i];
                for (j=1;j<=n;j++) d[j]=d[j]-a[i][j],a[i][j]=-a[i][j],d[j]+=a[i][j];
                cnt++;
                ans[cnt]={'R',i};
            }
        for (j=1;j<=n;j++)
            if (d[j]<0)
        {
            kt=false;
            d[j]=-d[j];
            for (i=1;i<=m;i++) ng[i]=ng[i]-a[i][j],a[i][j]=-a[i][j],ng[i]+=a[i][j];
            cnt++;
            ans[cnt]={'C',j};
        }
        if (kt)
        {
            cout<<cnt<<endl;
            for (i=1;i<=cnt;i++)
                cout<<ans[i].first<<" "<<ans[i].second<<endl;
            exit(0);
        }
    }
    cout<<-1<<endl;
}

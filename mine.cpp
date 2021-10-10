#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[100][100],pa[100][100];
int n,m;
void sub1()
{
    int ans=0;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++) cin>>a[i][j];
    for (int i=1;i<=n;i++)
            {
                for (int j=1;j<=m;j++)
                {
                    if (a[i][j]==0)
                    {
                        for (int i1=i-1;i1<=i+1;i1++)
                            for (int j1=j-1;j1<=j+1;j1++) ans+=a[i1][j1];
                    }
                }
            }
    bool ck=false;
    int s=n*m;
    for (int mask=0;mask< (1<<s);mask++)
    {
        for (int i=1;i<=n;i++)
            for (int j=1;j<=m;j++)
        {
            if (mask & (1<<((i-1)*m+j-1))) pa[i][j]=1;
            else pa[i][j]=0;
        }
        int kt=false;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++)
        {
            if (pa[i][j]!=a[i][j])
            {
                kt=true;
                break;
            }
        }
        if (kt) break;
        }
        if (kt)
        {
            int res=0;
            for (int i=1;i<=n;i++)
            {
                for (int j=1;j<=m;j++)
                {
                    if (pa[i][j]==0)
                    {
                        for (int i1=i-1;i1<=i+1;i1++)
                            for (int j1=j-1;j1<=j+1;j1++) res+=pa[i1][j1];
                    }
                }
            }
            if (res==ans)
            {
                for (int i=1;i<=n;i++)
                {
                    for (int j=1;j<=m;j++) cout<<pa[i][j]<<" ";
                    cout<<endl;
                }
                return;
            }
        }
    }
    cout<<-1<<endl;
}

void sub2()
{
    int v[m+1],dem[100],cnt=0;
    for (int i=1;i<=m;i++)
    {
        cin>>v[i];
        int t=v[i-1]+v[i+1];
        if (v[i]==0) dem[t]++;
    }
    if (dem[2]>=1)
    {
        cout<<1<<" "<<0<<" "<<1<<" ";
        cnt=3;
        for (int i=1;i<dem[1];i++) cout<<0<<" "<<1<<" ",cnt+=2;
    }
    if (dem[1]>=1)
    {
        for (int i=1;i<=dem[1];i++) cout<<0<<" "<<0<<" "<<1<<" ",cnt+=3;
    }
    for (int i=1;i<=m-cnt;i++) cout<<0<<" ";
}

int32_t main()
{
    //int n,m,ans=0;
    cin>>n>>m;
    if (n*m<=25) sub1();
    else if (n==1) sub2();
}

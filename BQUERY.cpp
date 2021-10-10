#include<bits/stdc++.h>
using namespace std;
int n,m,q;
int a[2001][2001];
void sub1()
{
    while (q--)
    {
        int type;
        cin>>type;
        if (type==1)
        {
            int r,x;
            cin>>r>>x;
            for (int i=1;i<=m;i++) a[r][i]+=x;
        }
        else if (type==2)
        {
            int c,x;
            cin>>c>>x;
            for (int i=1;i<=n;i++) a[i][c]+=x;
        }
        else
        {
            int x1,x2,y1,y2;
            cin>>x1>>y1>>x2>>y2;
            int ans=0;
            for (int i=x1;i<=x2;i++)
                for (int j=y1;j<=y2;j++) ans=max(ans,a[i][j]);
            cout<<ans<<endl;
        }
    }
}
int32_t main()
{
    cin>>n>>m>>q;
    sub1();
}

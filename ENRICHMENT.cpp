#include<bits/stdc++.h>
using namespace std;
unsigned long long int n,m,i,j,min1=9999999999,t;
int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
    cin>>m>>n;
    vector<vector<int> >a(m+1,vector<int>(n+1));
    vector<vector<int> >sum(m+1,vector<int>(n+1));
    for (i=1;i<=m;i++) sum[i][0]=0;
    for (j=1;j<=n;j++) sum[0][j]=0;
    for (i=1;i<=m;i++)
    {
        t=0;
        for (j=1;j<=n;j++)
        {
            cin>>a[i][j];
            t=t+a[i][j];
            sum[i][j]=t;
        }
    }
    for (i=1;i<=m-2;i++)
        for (j=3;j<=n;j++)
    {
        t=sum[i][j]+sum[i+1][j]+sum[i+2][j]-(sum[i][j-3]+sum[i+1][j-3]+sum[i+2][j-3]);
        min1=min(min1,t);
    }
    cout<<min1<<endl;
    }

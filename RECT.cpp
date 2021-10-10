#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[310][310],i,j,i1,j1,l,r,n,m,d;
    bool kt;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++) cin>>a[i][j];
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            d=0;
            for (i1=1;i1<=n-i+1;i1++)
                for (j1=1;j1<=m-j+1;j1++)
            {
                kt=true;
                for (l=i1;l<=i1+i-1;l++)
                {
                    if (kt)
                    for (r=j1;r<=j1+j-1;r++) if (a[l][r]==1) {kt=false;break;}
                }
                if (kt) d++;
            }
            cout<<d<<" ";
        }
        cout<<endl;
    }
}

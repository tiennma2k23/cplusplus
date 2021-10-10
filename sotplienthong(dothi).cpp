#include<bits/stdc++.h>
using namespace std;
long long int p[10000],c[100][100];
long long int lienthong (long long int n)
{
    long long int i,j,d=0,l;
    for (i=1;i<=n;i++)
    {
        if (p[i]==0)
        {
            d++;
            p[i]=d;
            for (j=1;j<=n;j++)
                for (l=1;l<=n;l++) if (p[l]==d&&p[j]==0&&c[l][j]==1) p[j]=d;
        }
    }
    return d;
}
int main()
{
    long long int n,m,i,j,kq;
    cin>>n>>m;
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++) c[i][j]=0;
    while (m--)
    {
        cin>>i>>j;
        c[i][j]=1;
    }
    kq=lienthong(n)
    cout<<lienthong(n)<<endl;
    if (kq==1) cout<<"Y"<<endl;
    else cout<<"N"<<endl;
}

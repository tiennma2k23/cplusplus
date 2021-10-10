#include <bits/stdc++.h>
using namespace std;
long int m,n;long int a[1000][1000], f[1000][1000];
int main()
{
    freopen("vao.inp","r",stdin);
    freopen("ra.out","w",stdout);

    cin>>m>>n;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
        cin>>a[i][j];
    for(int i=0; i<=m; i++)f[i][0]=0;
    for(int i=0; i<=n; i++)f[0][i]=0;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
    f[i][j]=max(f[i-1][j],f[i][j-1]) +a[i][j];
cout<<f[m][n];
}

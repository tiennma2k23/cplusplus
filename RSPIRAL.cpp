#include<bits/stdc++.h>
using namespace std;
  long long i,j,m,n,a[1000][1000],k;
int main()
{
    cin>>m>>n;
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++) cin>>a[i][j];

        {
    i=1;j=1;
    while (i<=m&&j<=n)
    {
        for (k=j;k<=n-1;k++) cout<<a[i][k]<<" ";
        for (k=i;k<=m-1;k++) cout<<a[k][n]<<" ";
        for (k=n;k>=j+1;k--) cout<<a[m][k]<<" ";
        for (k=m;k>=i+1;k--) cout<<a[k][j]<<" ";
        i++;j++;n--;m--;
    }
        }
}

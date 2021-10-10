#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
    long long int n,m,a[1000][1000],PA[1000][1000],i,j,max1;
    cin>>m>>n;
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++) cin>>a[i][j];
    for (j=1;j<=n;j++) PA[1][j]=a[1][j];
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++)
        {
                PA[i+1][j+2]=max(PA[i+1][j+2],PA[i][j]+a[i+1][j+2]);
                PA[i+1][j-2]=max(PA[i+1][j-2],PA[i][j]+a[i+1][j-2]);
                PA[i+2][j-1]=max(PA[i+2][j-1],PA[i][j]+a[i+2][j-1]);
                PA[i+2][j+1]=max(PA[i+2][j+1],PA[i][j]+a[i+2][j+1]);
        }
    max1=PA[m][1];
    for (j=1;j<=n;j++) max1=max(max1,PA[m][j]);
    cout<<max1<<endl;
}

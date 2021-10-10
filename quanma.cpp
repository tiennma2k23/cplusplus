#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int cot,dong,a[101][101],PA[101][101],i,j,max1;
    freopen("vao1.inp","r",stdin);
    freopen("ra1.out","w",stdout);
    cin>>dong>>cot;
    for (i=1;i<=dong;i++)
        for (j=1;j<=cot;j++) cin>>a[i][j];
    for (j=1;j<=cot;j++) PA[1][j]=a[1][j];
    for (i=1;i<=dong;i++)
        for (j=1;j<=cot;j++)
        {
                PA[i+1][j+2]=max(PA[i+1][j+2],PA[i][j]+a[i+1][j+2]);
                PA[i+1][j-2]=max(PA[i+1][j-2],PA[i][j]+a[i+1][j-2]);
                PA[i+2][j-1]=max(PA[i+1][j+2],PA[i][j]+a[i+1][j+2]);
                PA[i+2][j+1]=max(PA[i+1][j-2],PA[i][j]+a[i+1][j-2]);
        }
    max1=PA[dong][1];
    for (j=1;j<=cot;j++) max1=max(max1,PA[dong][j]);
    for (i=1;i<=dong;i++)
    {
        for (j=1;j<=cot;j++) cout<<PA[i][j]<<" ";cout<<endl;
    }
    cout<<max1<<endl;
}

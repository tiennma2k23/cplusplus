#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    freopen("vao.inp","r",stdin);
    freopen("ra.out","w",stdout);
    int n,m,a[100000],x[100000],y[100000],dem[100000],u,i,gt[100000],j,d;
cin>>n>>m;
for (i=1;i<=m;i++)
{
    cin>>a[i];
    if (a[i]==1) cin>>x[i]>>y[i];
    else if (a[i]==2)
    {
        cin>>u;
        d=0;
        for (j=i;j>=1;j--) if (u==x[j]) {d++;gt[d]=y[j];}
        sort (gt+1,gt+d+1);
        if (d==0) cout<<"0";
        else {for (j=1;j<=d;j++) cout<<gt[j]<<" ";}
        cout<<endl;
    }
}
}

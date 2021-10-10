#include<iostream>
using namespace std;
int main()
{
long long int m,n,t,a[210][210],x,y,p,q,sum,i,i1,j;
while (cin>>m>>n>>t)
{
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++) cin>>a[i][j];
    for (i=1;i<=t;i++)
    {
        sum=0;
        cin>>x>>y>>p>>q;
        for (i1=x;i1<=p;i1++)
            for (j=y;j<=q;j++) sum=sum+a[i1][j];
        cout<<sum<<endl;
    }
}

}

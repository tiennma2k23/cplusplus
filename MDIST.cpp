#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,x[1000],y[1000],max1=-10,j;
    cin>>n;
    for (i=1;i<=n;i++) cin>>x[i]>>y[i];
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++) max1=max(max1,(abs(x[i]-x[j])+abs(y[i]-y[j])));
    cout<<max1<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long s,n,a[105],d[10010],i,j;
    cin>>s>>n;
    fill(d , d + 10000 , 1e18);
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        for (j=a[i];j<=10000;j+=a[i]) d[j]=min(d[j],j/a[i]);
    }
    for (i=1;i<=10000;i++)
        for (j=1;j<=10000-i;j++) d[i+j]=min(d[i+j],d[i]+d[j]);
    for (i=2;i<=10000;i++)
        for (j=1;j<=i;j++) d[i-j]=min(d[i-j],d[i]+d[j]);
    cout<<d[s]<<endl;
}

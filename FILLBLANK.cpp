#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long d1[110],d2[110],i,n,a,t,ans=0,j,m,b,d;;
    cin>>n>>m;
    for (i=0;i<=40;i++) d1[i]=0,d2[i]=0;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        d=0;
        while (a%2==0)
        {
            d++;a=a/2;
        }
        if (a==1) d1[d]++;
    }
    for (i=1;i<=m;i++) cin>>b,d2[b]++;
    for (i=0;i<=40;i++) ans=ans+min(d1[i],d2[i]);
    cout<<ans<<endl;
}

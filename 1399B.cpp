#include<bits/stdc++.h>
using namespace std;
const long long max1=1e9+1,maxn=60;
int main()
{
    long long tv,ma,mb,q,j,i,a[maxn],b[maxn],res;
    cin>>tv;
    while (tv--)
    {
        ma=max1;mb=max1;res=0;
        cin>>q;
        for (j=1;j<=q;j++)
        {
            cin>>a[j];
            ma=min(ma,a[j]);
        }
        for (i=1;i<=q;i++)
        {
            cin>>b[i];
            mb=min(mb,b[i]);
        }
        for (i=1;i<=q;i++) res+=max(b[i]-mb,a[i]-ma);
        cout<<res<<endl;
    }
}

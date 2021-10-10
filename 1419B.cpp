#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxx=1e18+1;
int main()
{
    ll t,d[50],tmp,i,n;
    cin>>t;
    d[0]=0;
    tmp=1;
    for (i=1;i<=33;i++)
    {
        d[i]=2*d[i-1]+tmp*tmp;
        tmp*=2;
        if (d[i]>maxx) break;
    }
    while (t--)
    {
        cin>>n;
        ll t1=0;
        for (i=1;i<=33;i++)
        {
            t1+=d[i];
            if (t1>n) break;
        }
        cout<<i-1<<endl;
    }
}

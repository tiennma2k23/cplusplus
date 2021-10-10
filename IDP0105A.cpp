#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q,a,i,t,l,r,sum[100100];
    cin>>n>>q;
    t=0;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        if (a>0) t=t+a;
        sum[i]=t;
    }
    while (q--)
    {
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<endl;
    }
}

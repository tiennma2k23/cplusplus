#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int ans=0,cnt1=0,cnt0=0;
    int n;
    cin>>n;
    int tmp=n;
    int t=0,lt=1;
    while (tmp>0) lt*=10,tmp/=10;
    if (n/lt==t)
    {
        ans=1;
        n--;
    }
    tmp=n;
    while (tmp>0)
    {
        t+=tmp%10;
        cnt1++;
        cnt0+=(tmp%10!=0);
        tmp/=10;
    }
    ans+=(t-1)+(cnt0)+(9*(cnt1-1))+((cnt1-2));
    cout<<ans<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}

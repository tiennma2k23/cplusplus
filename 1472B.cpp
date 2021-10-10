#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
     long long  n,t=0,dem1=0,dem2=0;
        cin>>n;
        for (ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            if (x==1) dem1++;
            else dem2++;
            t+=x;
        }
        if (t%2==0)
        {
            ll tmp=t/2;
            if (tmp%2==1)
            {
                if (dem1>0) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
int main()
{
    long long tv;
    cin>>tv;
    while (tv--)
    {
        solve();
    }
}

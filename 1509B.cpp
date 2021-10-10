#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int res=0;
    for (int i=0;i<n;i++)
    {
        res+=(s[i]=='T');
        res-=(s[i]=='M');
        if (res<0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    res=0;
    for (int i=n-1;i>=0;i--)
    {
        res+=(s[i]=='T');
        res-=(s[i]=='M');
        if (res<0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    if (res==n/3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main()
{
    int nt;
    cin>>nt;
    while (nt--)
    {
        solve();
    }
}

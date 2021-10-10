#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string a,b;
    freopen("HMMDIST.inp","r",stdin);
    freopen("HMMDIST.ans","w",stdout);
    ll ans=0;
    cin>>a>>b;
    for (ll i=0;i<b.length();i++)
    {
        if (i>=a.length()-1)
        {
            for (ll j=0;j<a.length();j++)
            {
                ans+=(b[i-j]!=a[a.length()-j-1]);
            }
        }
    }
    cout<<ans<<endl;
}

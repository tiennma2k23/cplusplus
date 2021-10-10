#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t[1000001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string a,b;
    ll ans=0;
    cin>>a>>b;
    t[0]=b[0]-'0';
    for (ll i=1;i<b.length();i++) t[i]=t[i-1]+b[i]-'0';
    for (ll i=0;i<a.length();i++)
    {
        ll val=a[i]-'0';
        ll tmp=t[b.length()-a.length()+i]-t[i]+b[i]-'0';
        ll tmp2=val*(b.length()-a.length()+1);
        ans+=abs(tmp-tmp2);
    }
    cout<<ans<<endl;
}

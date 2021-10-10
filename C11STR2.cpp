#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1,mod=1e9+7;
ll p[maxn],HA[maxn],HB[maxn];
int main()
{
    string a,b;
    cin>>a>>b;
    ll n=a.length(),m=b.length(),dd=0;
    p[0]=1;
    for (ll i=1;i<=max(m,n);i++) p[i]=(p[i-1]*26)%mod;
    a=' '+a;
    b=' '+b;
    for (ll i=1;i<=n;i++) HA[i]=(HA[i-1]*26+a[i]-'a')%mod;
    for (ll i=1;i<=m;i++) HB[i]=(HB[i-1]*26+b[i]-'a')%mod;
    for (ll i=1;i<=min(m,n);i++)// xau do dai i la hau to cua a va tien to cua b
    {
        ll k1=HB[i];
        unsigned ll k2=(HA[n]-HA[n-i]*p[i]+mod*mod)%mod;
        if (k1==k2) dd=i;
    }
    for (ll i=dd+1;i<=m;i++) a+=b[i];
    a.erase(0,1);
    cout<<a<<endl;
}

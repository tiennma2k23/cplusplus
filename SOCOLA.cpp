#include<bits/stdc++.h>
#define TASK "SOCOLA"
#define ll long long
using namespace std;
int main()
{
    ll m,n,ans;
    freopen(TASK ".inp","r",stdin);
    freopen(TASK ".out","w",stdout);
    cin>>m>>n;
    ans=m+n-__gcd(m,n);
    cout<<ans<<endl;
}

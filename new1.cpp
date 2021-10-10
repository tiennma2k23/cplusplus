#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e6+1;
ll a[maxn];
bool cmp(ll a, ll b)
{
    return a>b;
}
int main()
{
    ll t;
    cin>>t;
    while (t--){
        ll n,k,sum=0;
        cin>>n>>k;
        for (ll i=1;i<=n*k;i++) cin>>a[i];
        sort(a+1,a+1+n*k,cmp);
        //for (ll i=1;i<=n*k;i++) cout<<a[i]<<endl;
        ll sl=n-(n-1)/2;
        for (ll i=1;i<=k;i++) sum+=a[i*sl];
        cout<<sum<<endl;
    }

}

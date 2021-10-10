#include<bits/stdc++.h>
#define ll long long
#define ABC "pebbles"
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(ABC ".inp","r",stdin);
    freopen(ABC ".out","w",stdout);
    ll n,k,tmp=0;
    cin>>n>>k;
    while (n--)
    {
        ll w;
        cin>>w;
        tmp+=w/k+(w%k!=0);
    }
    cout<<tmp/2+tmp%2<<endl;
}

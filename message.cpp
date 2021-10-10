#include<bits/stdc++.h>
#define ABC"message"
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(ABC ".inp","r",stdin);
    freopen(ABC ".out","w",stdout);
    ll nt;
    cin>>nt;
    while (nt--)
    {
        ll n;
        cin>>n;
        ll ans=2*(n-1);
        cout<<ans<<endl;
    }
}

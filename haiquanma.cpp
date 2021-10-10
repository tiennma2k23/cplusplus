#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;
    cin >> n;
    for(ll i=1;i<=n;i++)
    {
        cout<<((i*i)*(i*i-1)/2)-4*(i-1)*(i-2)<<endl;
    }
}

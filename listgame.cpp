
#include<bits/stdc++.h>
#define int long long
#define ll long long
using namespace std;
set<int> st;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll x;
    cin>>x;
    for (ll j=2;j*j<=x;j++)
    {
        if (x%j==0)
        {
            st.insert(j);
            x/=j;
        }
    }
    if (x!=1) st.insert(x);
    cout<<st.size()<<'\n';
}

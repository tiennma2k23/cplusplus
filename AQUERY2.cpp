#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define se second
#define fi first
using namespace std;
vector<II> v;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int q;
    cin>>q;
    while (q--)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(II(a,b));
    }
    int k;
    cin>>k;
    sort(v.begin(),v.end());
    int t=0;
    for (auto val:v)
    {
        t+=val.se;
        if (t>=k)
        {
            cout<<val.fi<<endl;
            return 0;
        }
    }
}

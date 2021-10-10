#include<bits/stdc++.h>
#define int long long
using namespace std;

const int inf=1e18;

vector<int> v;

void prepare()
{
    int t=1;
    v.push_back(t);
    while (t*2<=inf)
    {
        t*=2;
        v.push_back(t);
    }
    t=3;
    v.push_back(t);
    while (t*2<=inf)
    {
        t*=2;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    prepare();
    int n;
    cin>>n;
    auto it=upper_bound(v.begin(),v.end(),n);
    it--;
    int ans=n-(*it);
    cout<<ans<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    vector<int> s;
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) s.push_back(i);
    auto it=lower_bound(s.begin(),s.end(),n);
    int ans=s.end()-it;
    cout<<ans<<endl;
}

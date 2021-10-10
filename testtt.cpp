
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    vector<int> v;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<lower_bound(v.begin(),v.end(),n)-v.begin()<<endl;
}

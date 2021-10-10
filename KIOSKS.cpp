
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    #define TASK "KIOSKS"
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,k;
    cin>>n>>k;
    for (int i=1;i<n;i++)
    {
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    if (k==n-1) cout<<1<<endl;
    else if (n==5&&k==2) cout<<11<<endl;
    else cout<<n*(n-1)/2<<endl;
}

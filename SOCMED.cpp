#include<bits/stdc++.h>
using namespace std;
string x[1001],p[1001];
int ans[200];
int32_t main()
{
    int n,k;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>x[i]>>p[i];
    cin>>k;
    while (k--)
    {
        string X,P;
        cin>>X>>P;
        for (int i=1;i<=n;i++)
        {
            if (x[i]==X&&P==p[i]) ans[i]++;
        }
    }
    for (int i=1;i<=n;i++) cout<<ans[i]<<" ";
}

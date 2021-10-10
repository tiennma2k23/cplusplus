#include<bits/stdc++.h>
using namespace std;
int a[20000];
vector<int> v;
void solve()
{
    v.clear();
    int n,ans=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]%2==0) v.push_back(a[i]);
    }
    for (int i=1;i<=n;i++) if (a[i]%2==1) v.push_back(a[i]);
    for (int i=0;i<n;i++)
        for (int j=i+1;j<n;j++)
    {
        ans+=(__gcd(v[i],(2*v[j]))!=1);
    }
    cout<<ans<<endl;
}

int main()
{
    int q;
    cin>>q;
    while (q--)solve();
}

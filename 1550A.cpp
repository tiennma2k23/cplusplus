#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,sum,tmp,dem;
    cin>>n;
    sum=1;tmp=1;dem=1;
    while (sum<n)
    {
        tmp+=2;
        sum+=tmp;
        dem++;
    }
    cout<<dem<<endl;
}

int32_t main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}

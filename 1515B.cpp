#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf=1e9+1;
map<int,int> ck;

void solve()
{
    int n;
    cin>>n;
    if (n%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    n/=2;
    int tmp=sqrt(n);
    if (tmp*tmp==n)
    {
        cout<<"YES"<<endl;
        return;
    }
     if (n%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    n/=2;
     tmp=sqrt(n);
    if (tmp*tmp==n)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int32_t main()
{
    //create();
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}

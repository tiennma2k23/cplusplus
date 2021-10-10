#include<bits/stdc++.h>
#define int long long
#define uint unsigned int
using namespace std;

void solve()
{
    int l,r,k=1;
    cin>>l>>r;
    while (true)
    {
        if ((l|k)<=r) l|=(k);
        else
        {
            cout<<l<<endl;
            return;
        }
        //cout<<((l|(k)))<<endl;
        k*=2;
    }
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}

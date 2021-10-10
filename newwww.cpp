#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    if (a==1)
    {
        if ((n-1)%b==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else
    {
        int t=1;
        while (t<=n)
        {
            if ((n-t)%b==0)
            {
                cout<<"Yes"<<endl;
                return;
            }
            t*=a;
        }
        cout<<"No"<<endl;
    }
}

int32_t main()
{
int q;
    cin>>q;
    while (q--) solve();
}

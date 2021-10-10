#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if (n<=3)
    {
        cout<<"Bob"<<endl;
        return ;
    }
    if (n%2==0)
    {
        int m=n;
        int cnt=0;
        while (m%2==0) m/=2,cnt++;
        if (m>1)
        {
            cout<<"Alice"<<endl;
            return;
        }
        if (cnt%2==0) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    else cout<<"Bob"<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}

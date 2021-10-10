
#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    if (abs(a)==abs(b))
    {
        if (a==0)
        {
            cout<<0<<endl;
            return ;
        }
        else
        {
            cout<<1<<endl;
            return;
        }
    }
    else
    {
        int mid=(a+b)/2;
        if (abs(a-mid)==abs(b-mid))
        {
            cout<<2<<endl;
            return;
        }

    }
    cout<<-1<<endl;
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

#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n ;
    int mmin =n+1,mmax=0;
    for(int i=1; i<=n; i++)
    {
        char ch;
        cin>>ch;
        if (ch=='0')
        {
            mmin=min(mmin, i);
            mmax=max(mmax, i);
        }
    }
    if (mmax-1>=n/2)
    {
        cout<<1<<" "<<mmax<<" "<<1<<" "<<mmax-1 << endl;
        return ;
    }
    if (n-mmin>=n/2)
    {
        cout<<mmin<<" "<<n<<" "<<mmin+1<<" "<<n<<endl;
        return ;
    }
    cout<<1<<" "<<n/2<<" "<<2<<" "<<n/2+1<<endl;
}

int32_t main()
{
    int q;
    cin >> q;
    while (q--)
    {
        solve();
    }

}

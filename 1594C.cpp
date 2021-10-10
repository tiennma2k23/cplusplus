#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=3e5+1;
bool ok[maxn];

void solve()
{
    int n;
    char ch;
    cin>>n>>ch;
    int cnt=0;
    for (int i=1;i<=n;i++)
    {
        ok[i]=0;
        char x;
        cin>>x;
        if (x!=ch) ok[i]=1,cnt++;
    }
    if (cnt==0)
    {
        cout<<0<<endl;
        return;
    }
    if (!ok[n])
    {
        cout<<1<<endl<<n<<endl;
        return;
    }

    bool ck=1;
    for (int i=1;i<=n;i++)
    {
        ck=1;
        for (int j=i;j<=n;j+=i) if (ok[j])
        {
            ck=0;
            break;
        }
        if (ck)
        {
            cout<<1<<endl<<i<<endl;
            return;
        }
    }
    cout<<2<<endl<<n-1<<" "<<n<<endl;
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

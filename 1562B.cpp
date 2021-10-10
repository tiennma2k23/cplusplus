
#include<bits/stdc++.h>
#define int long long
using namespace std;
bool ok[1000];

bool check(int x)
{
    if (x==1) return true;
    for (int i=2;i*i<=x;i++)
    {
        if (x%i==0) return true;
    }
    return false;
}
void solve()
{
    int n;
        string s;
        cin>>n;
        cin>>s;
        for (int i=0;i<n;i++) if (ok[s[i]-'0'])
        {
            cout<<1<<endl<<s[i]-'0'<<endl;
            return;
        }
        for (int i=0;i<n;i++)
            for (int j=i+1;j<n;j++)
        {
            int sum=s[i]-'0';
            sum=sum*10+(s[j]-'0');
            if (ok[sum])
            {
                cout<<2<<endl<<sum<<endl;
                return;
            }
        }
}

int32_t main()
{
    for (int i=1;i<100;i++) if (check(i)) ok[i]=true;
    int q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}

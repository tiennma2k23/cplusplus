#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=3e5+5;
bool ck[maxn];
void solve()
{
        ll n;
        string a,b;
        cin>>n;
        cin>>a>>b;
        ll sl0=0,sl1=0;
        for (ll i=0;i<n;i++)
        {
            sl0+=(a[i]=='0');
            sl1+=(a[i]=='1');
            ck[i]=(sl0==sl1);
        }
        bool kt=true;ll r=n-1;
        while (r>=0)
        {
            if (kt)
            {
                if (a[r]!=b[r])
                {
                    if (!ck[r])
                    {
                        cout<<"NO"<<endl;return;
                    }
                    kt=false;
                }
            }
            else if (!kt)
            {
                if (a[r]==b[r])
                {
                    if (!ck[r])
                    {
                        cout<<"NO"<<endl;
                        return;
                    }
                    kt=true;
                }
            }
            r--;
        }
        cout<<"YES"<<endl;
}

int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        solve();
    }
}

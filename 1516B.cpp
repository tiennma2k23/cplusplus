
#include<bits/stdc++.h>
#define ll long long
#define yeu nxxx
using namespace std;
ll b[2001],xorr[2001];
int32_t main()
{
    ll nt;
    cin>>nt;
    while (nt--)
    {
        bool ck=false;
        ll n;
        cin>>n;
        for (ll i=1; i<=n; i++) cin>>b[i];
        for (ll i=1; i<=n; i++) xorr[i]=xorr[i-1]^b[i];
        for (ll i=1; i<n; i++)
        {
            ll _temp=xorr[i]^xorr[n];
            if (_temp==xorr[i])
            {
                ck=true;
                break;
            }
        }
        for (int i=1; i<=n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                int _temp1=xorr[i]^xorr[j];
                int _temp2=xorr[j]^xorr[n];
                if (_temp1==_temp2&&_temp1==xorr[i])
                {
                    ck=true;
                    break;
                }
            }
        }
        if (ck) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

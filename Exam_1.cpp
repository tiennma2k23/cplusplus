
#include<bits/stdc++.h>
#define ll long long
#define ABC "Exam"
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(ABC ".inp","r",stdin);
    freopen(ABC ".out","w",stdout);
    ll n,k;
    cin>>n>>k;
    for (ll i=0;i<=n;i++)
    {
        ll tmp=k-2*i;
        ll tmp1=n-i;
        if (tmp>=0)
        {
            if (tmp1*3<=tmp&&tmp1*5>=tmp)
            {
                cout<<i<<endl;
                return 0;
            }
        }
    }
    cout<<0<<endl;
}

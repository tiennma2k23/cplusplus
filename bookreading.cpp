#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define ABC "bookreading"
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(ABC ".inp","r",stdin);
    freopen(ABC ".out","w",stdout);
    ll q;
    cin>>q;
    while (q--)
    {
        ull ans=0;
        ull n,m;
        cin>>n>>m;
        ull r=m*10;
        for (ll i=1;i<=9;i++)
        {
            ull tmp=1ull*i*m;
            if (tmp<=n)
            {
                ans+=1ull*(tmp%10)*((n-tmp)/r+1);
            }
        }
        cout<<ans<<endl;
    }
}

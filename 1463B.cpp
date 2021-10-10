#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=1e5+1;
ll a[maxn],b[maxn],mP[maxn];
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        ll n;
        cin>>n;
        for (ll i=1;i<=n;i++) cin>>a[i];
        for (ll i=1;i<=n;i++)
        {
            b[i]=1;
            while (a[i]>1)
            {
                a[i]/=2;
                b[i]*=2;
            }
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+1;
ll a[N];
bool cmp(ll a,ll b)
{
    return a>b;
}
void sol()
{
    ll l=0,c=0,n;
        cin>>n;
        for (ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+1+n,cmp);
        for (ll i=1;i<=n;i++)
        {
            if (i%2==1) c+=a[i]*(a[i]%2==0);
            else l+=a[i]*(a[i]%2==1);
        }
        if (l>c) cout<<"Bob"<<endl;
        else if (l==c) cout<<"Tie"<<endl;
        else cout<<"Alice"<<endl;
}
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        sol();
    }
}

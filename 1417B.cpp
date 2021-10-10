#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
using namespace std;
const ll maxn=1e5+5;
int main()
{
    ll t,n,i,k,a,tmp;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        tmp=1;
        for (i=1;i<=n;i++)
        {
            cin>>a;
            if (a*2<k) cout<<1<<" ";
            else if (a*2>k) cout<<0<<" ";
            else cout<<tmp%2<<" ",tmp++;
        }
        cout<<endl;

    }
}

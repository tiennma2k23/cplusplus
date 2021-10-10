
#include<bits/stdc++.h>
#define ll long long
#define task "BACHO"
#define st first
#define nd second
#define nl "\n"

using namespace std;

const int maxn=200001;
ll n,a[maxn],k,ans=0;
map<ll,ll> m;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    cin>>n>>k;

    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        a[i]+=a[i-1];
    }

    m[0]=1;

    for(int i=1;i<=n;++i)
    {
        ans+=m[a[i]-k];
        m[a[i]]++;
    }
    cout<<ans;

    return 0;
}

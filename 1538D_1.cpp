#include <bits/stdc++.h>
#define II pair<int,int>
#define fi first
#define se second
using namespace std;

//map<int,int> cnt;
set<II> s;

int get(int x)
{
    int ans=0;
    for(int i=2; i*i<=x; i++)
    {
        while(x%i==0) ans++,x/=i;
    }
    if(x>1) ans++;
    return ans;
}

void solve()
{
    int a,b,k;
    cin>>a>>b>>k;
    if(a>b) swap(a,b);
    int l;
    if (b%a==0&&a!=b) l=1;
    else l=2;
    int x=get(a),y=get(b);
    int r=x+y;

    if (k>=l&&k<=r) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int q;
    cin>>q;
    while(q--) solve();
}

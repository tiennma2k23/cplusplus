#include<bits/stdc++.h>
#define TASK "DNP"
#define ll long long
#define Inp freopen(TASK ".inp","r",stdin);
#define Out freopen(TASK ".out","w",stdout);
#define FastIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
ll t[52][2];
int main()
{
    FastIO
    Inp
    Out
    ll n;
    cin>>n;
    t[0][0]=0;t[0][1]=0;
    t[1][0]=2;t[1][1]=1;
    for (ll i=2;i<=n;i++)
    {
        t[i][0]+=t[i-1][0]+t[i-1][1];
        t[i][1]+=t[i-1][0];
    }
    cout<<t[n][0]<<endl;
}

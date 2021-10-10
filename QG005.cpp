#include<bits/stdc++.h>
#define ll long long
using namespace std;
const long long maxn=1e6;
long long b[maxn];
ll a[20],f[20][20000];
ll thu(ll i, bool gh, ll sum)
{
    if (i<0) return sum;
    if (!gh&&f[i][sum]>=0) return f[i][sum];
    ll kq=0;
    bool ghm;
    ll maxc=gh?a[i]:9;
    for (ll c=0;c<=maxc;c++)
    {
        ghm=gh&&(c==maxc);
        kq+=thu(i-1,ghm,sum+c);
    }
    if (!gh) f[i][sum]=kq;
    return kq;
}

ll G(ll x)
{
    ll n=0;
    while (x)
    {
        a[n]=x%10;
        x/=10;
        n++;
    }
    return thu(n-1,true,0);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long i,n,max1,max2,res=-1,j,k,tmp,ans;
    memset(f,-1,sizeof(f));
    cin>>n;
    stack<ll> st;
    for (i=1;i<=n;i++) cin>>b[i];
    for(int i = 1 ; i <= n ; i ++){
        while(!st.empty() && b[i] >= b[st.top()]) st.pop();
        if(!st.empty()) res = max(res , G(b[st.top()]) - G(b[i] - 1));
        st.push(i);
    }
    while(!st.empty()) st.pop();
    for(int i = 1 ; i <= n ; i ++){
        while(!st.empty() && b[i] <= b[st.top()]) st.pop();
        if(!st.empty())
        res = max(res , G(b[i]) - G(b[st.top()] - 1));
        st.push(i);
    }
    cout<<res<<endl;
}

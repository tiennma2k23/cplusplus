
#include<bits/stdc++.h>
#define int long long
#define II pair<int,int>
#define fi first
#define se second
using namespace std;
const int inf=LLONG_MAX,maxn=1e6+1,maxm=1e6+1;
int pref[maxm], a[maxn] ;
void solve()
{
    int n;
    string s;
    cin>>n>>s;
    s=" "+s;
    int m=0;
    for (int i=1; i<=n; i++)
    {
        if (s[i]=='*')
        {
            m++;
            a[m]=i;
            pref[m]=pref[m-1]+i ;
        }
    }
    if (m==0)
    {
        cout<<0<<endl;
        return;
    }
    int suf=0,ans=inf;
    for (int i=m; i>=1; i--)
    {
        ans=min(ans,a[i]*(i-1)-pref[i-1]-i*(i-1)/2+suf-a[i]*(m-i)-(m-i)*(m-i+1)/2);
        suf+=a[i];
    }
    for (int i=1 ; i<=n ;i++)
    {
        pref[i] = pref[i - 1] ;
        a[i] = a[i - 1] ;
        if (s[i] == '*')
        {
            pref[i] += i ;
            a[i] ++ ;
        }
    }
    suf= 0 ;
    int b = 0 ;
    for (int i=n; i>=1; i--)
    {
        if (s[i]=='.'&&(i==n||s[i+1]=='.'))
        {
            ans=min(ans,a[i]*i-pref[i]-a[i]*(a[i]-1)/2+suf-b*(i+1)-b*(b-1)/2) ;
        }
        if (s[i]=='*')
        {
            suf+=i ;
            b++;
        }
    }
    cout<<ans<<endl;
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}

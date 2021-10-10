#include<bits/stdc++.h>
#define ll long long
#define II pair<ll,ll>
#define TASK "ABC"
#define FastIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define Inp freopen(TASK ".inp","r",stdin);
#define Out freopen(TASK ".out","w",stdout);
using namespace std;
int main()
{
    FastIO
    //Inp
    //Out
    ll q,t,n,a[100000],k,i,tmp;
    cin>>q;
    while (q--)
    {
        t=0;
        cin>>n>>k;
        for (i=1;i<=n;i++)
        {
            cin>>a[i];
            t=t+a[i];
        }
        sort(a+1,a+1+n);
        if (t%k==0)
        {
            tmp=t/k;
            if (a[n]<=tmp) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}

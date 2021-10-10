#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll q;
    cin>>q;
    while (q--)
    {
        ll m,n,cur,tmp,maxx=-1;
        cin>>n>>m;
        cur=(m*(m+1))/2;
        for (ll i=1;i*i<=n;i++)
        {
            if (n%i==0)
            {
                tmp=n/i;
                if (tmp>=cur) maxx=max(maxx,i);
                if (i>=cur) maxx=max(maxx,tmp);
            }
        }
        cout<<maxx<<'\n';
    }
}
